
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* pNext; } ;
typedef TYPE_2__ tFilePagesItem ;
struct TYPE_7__ {scalar_t__ nFileSize; scalar_t__ numOfElemsInFile; } ;
struct TYPE_9__ {scalar_t__ numOfAllElems; int * dataFile; int * pTail; TYPE_2__* pHead; scalar_t__ numOfPagesInMem; scalar_t__ numOfElemsInBuffer; TYPE_1__ fileMeta; } ;
typedef TYPE_3__ tExtMemBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(tExtMemBuffer *VAR_1) {
  if (VAR_1 == ((void*)0) || VAR_1->numOfAllElems == 0) return;




  tFilePagesItem *VAR_2 = VAR_1->pHead;
  while (VAR_2 != ((void*)0)) {
    tFilePagesItem *VAR_3 = VAR_2;
    VAR_2 = VAR_2->pNext;
    FUNC_2(VAR_3);
  }

  VAR_1->fileMeta.numOfElemsInFile = 0;
  VAR_1->fileMeta.nFileSize = 0;

  VAR_1->numOfElemsInBuffer = 0;
  VAR_1->numOfPagesInMem = 0;
  VAR_1->pHead = ((void*)0);
  VAR_1->pTail = ((void*)0);

  FUNC_1(VAR_1);

  if (VAR_1->dataFile != ((void*)0)) {

    FUNC_0(VAR_1->dataFile, 0, VAR_0);
  }
}
