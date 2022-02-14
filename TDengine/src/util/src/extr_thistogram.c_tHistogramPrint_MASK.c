
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__** pForward; scalar_t__ pData; } ;
typedef TYPE_4__ tSkipListNode ;
typedef int int32_t ;
struct TYPE_13__ {double val; int num; } ;
struct TYPE_12__ {int numOfEntries; int numOfElems; TYPE_3__* pList; TYPE_1__* elems; } ;
struct TYPE_9__ {TYPE_4__** pForward; } ;
struct TYPE_10__ {TYPE_2__ pHead; } ;
struct TYPE_8__ {double val; int num; } ;
typedef TYPE_5__ SHistogramInfo ;
typedef TYPE_6__ SHistBin ;


 int FUNC_0 (char*,int,double,...) ;

void FUNC_1(SHistogramInfo* VAR_0) {
  FUNC_0("total entries: %d, elements: %d\n", VAR_0->numOfEntries, VAR_0->numOfElems);





  tSkipListNode* VAR_1 = VAR_0->pList->pHead.pForward[0];

  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->numOfEntries; ++VAR_2) {
    SHistBin* VAR_3 = (SHistBin*)VAR_1->pData;
    FUNC_0("%d: (%f, %lld)\n", VAR_2 + 1, VAR_3->val, VAR_3->num);
    VAR_1 = VAR_1->pForward[0];
  }

}
