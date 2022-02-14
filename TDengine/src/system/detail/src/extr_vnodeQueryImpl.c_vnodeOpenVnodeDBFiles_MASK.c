
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int int32_t ;
typedef int __off_t ;
struct TYPE_3__ {int fileID; int headerFd; int dataFd; int lastFd; int * pDataFileData; int defaultMappingSize; int * pHeaderFileData; int headFileSize; int dataFilePath; int dtFileMappingOffset; int lastFileSize; int lastFilePath; int dataFileSize; int headerFilePath; } ;
typedef TYPE_1__ SQueryFileInfo ;
typedef int SQInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ) ;
 void* FUNC_3 (int *,int ,int ,int,int,int ) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,char*,char*,...) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int32_t FUNC_12(SQInfo *VAR_10, SQueryFileInfo *VAR_11, int32_t VAR_12, int32_t VAR_13,
                                     char *VAR_14, char *VAR_15) {
  __off_t VAR_16 = 0;

  VAR_11->fileID = VAR_12;
  VAR_11->defaultMappingSize = VAR_0;

  FUNC_6(VAR_11->headerFilePath, 256, "%s%s", VAR_15, VAR_14);


  VAR_11->headerFd = FUNC_5(VAR_11->headerFilePath, VAR_6);
  if (!FUNC_0(VAR_11->headerFd)) {
    FUNC_1("QInfo:%p failed open header file:%s reason:%s", VAR_10, VAR_11->headerFilePath, FUNC_8(VAR_8));
    goto _clean;
  }

  struct stat VAR_17;
  if (FUNC_7(VAR_11->headerFilePath, &VAR_17) < 0) return -1;
  VAR_11->headFileSize = VAR_17.st_size;
  VAR_16 = VAR_17.st_size;

  VAR_11->pHeaderFileData = FUNC_3(((void*)0), VAR_16, VAR_7, VAR_5, VAR_11->headerFd, 0);
  if (VAR_11->pHeaderFileData == VAR_2) {
    FUNC_1("QInfo:%p failed to map header file:%s, %s", VAR_10, VAR_11->headerFilePath, FUNC_8(VAR_8));
    goto _clean;
  }


  if (FUNC_2(VAR_11->pHeaderFileData, VAR_16, VAR_1) == -1) {
    FUNC_1("QInfo:%p failed to advise kernel the usage of header files, reason:%s", VAR_10, FUNC_8(VAR_8));
  }

  FUNC_6(VAR_11->dataFilePath, 256, "%sv%df%d.data", VAR_15, VAR_13, VAR_12);
  FUNC_6(VAR_11->lastFilePath, 256, "%sv%df%d.last", VAR_15, VAR_13, VAR_12);


  VAR_11->dataFd = FUNC_5(VAR_11->dataFilePath, VAR_6);
  VAR_11->lastFd = FUNC_5(VAR_11->lastFilePath, VAR_6);
  if (!FUNC_0(VAR_11->dataFd)) {
    FUNC_1("QInfo:%p failed to open data file:%s, reason:%s", VAR_10, VAR_11->dataFilePath, FUNC_8(VAR_8));
    goto _clean;
  }

  if (!FUNC_0(VAR_11->lastFd)) {
    FUNC_1("QInfo:%p failed to open last file:%s, reason:%s", VAR_10, VAR_11->lastFilePath, FUNC_8(VAR_8));
    goto _clean;
  }

  if (FUNC_7(VAR_11->dataFilePath, &VAR_17) < 0) return -1;
  VAR_11->dataFileSize = VAR_17.st_size;

  if (FUNC_7(VAR_11->lastFilePath, &VAR_17) < 0) return -1;
  VAR_11->lastFileSize = VAR_17.st_size;



  VAR_11->pDataFileData = FUNC_3(((void*)0), VAR_11->defaultMappingSize, VAR_7, VAR_4 | VAR_3,
                                    VAR_11->dataFd, VAR_11->dtFileMappingOffset);
  if (VAR_11->pDataFileData == VAR_2) {
    FUNC_1("QInfo:%p failed to map data file:%s, %s", VAR_10, VAR_11->dataFilePath, FUNC_8(VAR_8));
    goto _clean;
  }


  if (FUNC_2(VAR_11->pDataFileData, VAR_11->defaultMappingSize, VAR_1) == -1) {
    FUNC_1("QInfo:%p failed to advise kernel the usage of data file:%s, reason:%s", VAR_10, VAR_11->dataFilePath,
           FUNC_8(VAR_8));
  }


  return 0;

_clean:
  if (VAR_11->pHeaderFileData != VAR_2 && VAR_11->pDataFileData != ((void*)0)) {
    FUNC_4(VAR_11->pHeaderFileData, VAR_11->headFileSize);
    VAR_11->pHeaderFileData = ((void*)0);
  }


  if (VAR_11->pDataFileData != VAR_2 && VAR_11->pDataFileData != ((void*)0)) {
    FUNC_4(VAR_11->pDataFileData, VAR_11->defaultMappingSize);
    VAR_11->pDataFileData = ((void*)0);
  }


  FUNC_11(VAR_11->headerFd);
  FUNC_11(VAR_11->dataFd);
  FUNC_11(VAR_11->lastFd);
  return -1;
}
