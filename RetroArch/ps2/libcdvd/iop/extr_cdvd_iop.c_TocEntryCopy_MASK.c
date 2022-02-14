
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dirTocEntry {int fileProperties; int filenameLength; scalar_t__* filename; int fileLBA; int fileSize; } ;
struct TocEntry {int fileProperties; scalar_t__* filename; int fileLBA; int fileSize; } ;
struct TYPE_2__ {int filesystemType; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,char*) ;

void FUNC_2(struct TocEntry *VAR_1, struct dirTocEntry *VAR_2)
{
    int VAR_3;
    int VAR_4;

    VAR_1->fileSize = VAR_2->fileSize;
    VAR_1->fileLBA = VAR_2->fileLBA;
    VAR_1->fileProperties = VAR_2->fileProperties;

    if (VAR_0.filesystemType == 2) {

        VAR_4 = VAR_2->filenameLength / 2;

        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
            VAR_1->filename[VAR_3] = VAR_2->filename[(VAR_3 << 1) + 1];
    } else {
        VAR_4 = VAR_2->filenameLength;


        FUNC_0(VAR_1->filename, VAR_2->filename, 128);
    }

    VAR_1->filename[VAR_4] = 0;

    if (!(VAR_1->fileProperties & 0x02)) {

        FUNC_1(VAR_1->filename, ";");
    }
}
