#include "FileReader.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace BMS;
using namespace std;

// �t�@�C�������w�肵�ēǂݍ���
FileReader::FileReader(){}

FileReader::~FileReader(){}

// �t�@�C���p�X���w�肵�ēǂݍ���
void FileReader::load(const char* filePath)
{
	loadByStream(filePath);
}

// STL��ifstream�ɂ��ǂݍ���
void loadByStream(const char* filePath)
{
	ifstream ifs(filePath);
	if (ifs.fail())
	{
		throw "Can't open file";
	}

	string line;	// �ǂݍ��ݗp������

	while (getline(ifs, line))
	{
		// �ǂݍ��񂾍s�����͂��s��
	}

	ifs.close();
}