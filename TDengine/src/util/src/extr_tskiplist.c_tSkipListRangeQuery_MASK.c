
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSkipListNode ;
struct TYPE_8__ {int queryCount; } ;
struct TYPE_9__ {TYPE_1__ state; } ;
typedef TYPE_2__ tSkipList ;
struct TYPE_10__ {int upperBndRelOptr; int upperBnd; int lowerBndRelOptr; int lowerBnd; } ;
typedef TYPE_3__ tSKipListQueryCond ;
typedef int int32_t ;


 int FUNC_0 (TYPE_2__*,int *,int *,int ,int ***) ;
 int * FUNC_1 (TYPE_2__*,int *,int ) ;

int32_t FUNC_2(tSkipList *VAR_0, tSKipListQueryCond *VAR_1, tSkipListNode ***VAR_2) {
  VAR_0->state.queryCount++;
  tSkipListNode *VAR_3 = FUNC_1(VAR_0, &VAR_1->lowerBnd, VAR_1->lowerBndRelOptr);
  if (VAR_3 == 0) {
    *VAR_2 = ((void*)0);
    return 0;
  }

  return FUNC_0(VAR_0, VAR_3, &VAR_1->upperBnd, VAR_1->upperBndRelOptr, VAR_2);
}
