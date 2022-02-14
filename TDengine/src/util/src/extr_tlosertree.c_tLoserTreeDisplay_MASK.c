
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {size_t totalEntries; TYPE_1__* pNode; } ;
struct TYPE_4__ {int index; } ;
typedef TYPE_2__ SLoserTreeInfo ;


 int FUNC_0 (char*,...) ;

void FUNC_1(SLoserTreeInfo* VAR_0) {
  FUNC_0("the value of loser tree:\t");
  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->totalEntries; ++VAR_1) FUNC_0("%d\t", VAR_0->pNode[VAR_1].index);
  FUNC_0("\n");
}
