
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** pBackward; struct TYPE_6__** pForward; } ;
typedef TYPE_1__ tSkipListNode ;
struct TYPE_7__ {TYPE_1__ pHead; } ;
typedef TYPE_2__ tSkipList ;
typedef size_t int32_t ;



void FUNC_0(tSkipList *VAR_0, tSkipListNode **VAR_1, int32_t VAR_2, tSkipListNode *VAR_3) {
  for (int32_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    tSkipListNode *VAR_5 = VAR_1[VAR_4];
    if (VAR_5 != ((void*)0)) {
      VAR_3->pBackward[VAR_4] = VAR_5;
      if (VAR_5->pForward[VAR_4]) VAR_5->pForward[VAR_4]->pBackward[VAR_4] = VAR_3;

      VAR_3->pForward[VAR_4] = VAR_5->pForward[VAR_4];
      VAR_5->pForward[VAR_4] = VAR_3;
    } else {
      VAR_0->pHead.pForward[VAR_4] = VAR_3;
      VAR_3->pBackward[VAR_4] = &(VAR_0->pHead);
    }
  }
}
