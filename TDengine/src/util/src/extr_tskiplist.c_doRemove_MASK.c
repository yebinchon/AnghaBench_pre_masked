
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {size_t nLevel; TYPE_1__** pForward; } ;
typedef TYPE_3__ tSkipListNode ;
struct TYPE_11__ {int nTotalMemSize; } ;
struct TYPE_13__ {int nSize; TYPE_2__ state; } ;
typedef TYPE_4__ tSkipList ;
typedef size_t int32_t ;
struct TYPE_10__ {struct TYPE_10__** pForward; TYPE_3__** pBackward; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(tSkipList *VAR_1, tSkipListNode *VAR_2, tSkipListNode *VAR_3[]) {
  int32_t VAR_4 = VAR_2->nLevel;
  for (int32_t VAR_5 = VAR_4 - 1; VAR_5 >= 0; --VAR_5) {
    if ((VAR_3[VAR_5]->pForward[VAR_5] != ((void*)0)) && (VAR_3[VAR_5]->pForward[VAR_5]->pForward[VAR_5])) {
      VAR_3[VAR_5]->pForward[VAR_5]->pForward[VAR_5]->pBackward[VAR_5] = VAR_3[VAR_5];
    }

    if (VAR_3[VAR_5]->pForward[VAR_5] != ((void*)0)) {
      VAR_3[VAR_5]->pForward[VAR_5] = VAR_3[VAR_5]->pForward[VAR_5]->pForward[VAR_5];
    }
  }

  VAR_1->state.nTotalMemSize -= (sizeof(tSkipListNode) + VAR_0 * VAR_2->nLevel * 2);
  FUNC_0(VAR_1, VAR_2->nLevel);

  FUNC_1(VAR_2);
  --VAR_1->nSize;
}
