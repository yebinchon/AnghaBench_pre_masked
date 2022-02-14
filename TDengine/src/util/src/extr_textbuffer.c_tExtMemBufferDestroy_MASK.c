
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nAllocSize; TYPE_2__* pFlushoutInfo; } ;
struct TYPE_9__ {TYPE_1__ flushoutData; } ;
struct TYPE_8__ {scalar_t__ dataFile; int pColModel; int dataFilePath; struct TYPE_8__* pNext; struct TYPE_8__* pHead; TYPE_3__ fileMeta; } ;
typedef TYPE_2__ tFilePagesItem ;
typedef TYPE_3__ tFileMeta ;
typedef TYPE_2__ tExtMemBuffer ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(tExtMemBuffer **VAR_1) {
  if ((*VAR_1) == ((void*)0)) {
    return;
  }


  tFileMeta *VAR_2 = &(*VAR_1)->fileMeta;
  if (VAR_2->flushoutData.nAllocSize != 0 && VAR_2->flushoutData.pFlushoutInfo != ((void*)0)) {
    FUNC_4(VAR_2->flushoutData.pFlushoutInfo);
  }


  tFilePagesItem *VAR_3 = (*VAR_1)->pHead;
  while (VAR_3 != ((void*)0)) {
    tFilePagesItem *VAR_4 = VAR_3;
    VAR_3 = VAR_3->pNext;
    FUNC_4(VAR_4);
  }


  if ((*VAR_1)->dataFile != 0) {
    int32_t VAR_5 = FUNC_0((*VAR_1)->dataFile);
    if (VAR_5 != 0) {
      FUNC_1("failed to close file:%s, reason:%s", (*VAR_1)->dataFilePath, FUNC_2(VAR_0));
    }
    FUNC_5((*VAR_1)->dataFilePath);
  }

  FUNC_3((*VAR_1)->pColModel);

  FUNC_4(*VAR_1);
}
