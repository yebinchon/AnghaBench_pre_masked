
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_6__ {scalar_t__ uid; size_t numOfParams; int * param; } ;
struct TYPE_5__ {int numOfAlloc; size_t numOfExprs; TYPE_4__* pExprs; } ;
typedef TYPE_1__ SSqlExprInfo ;
typedef int SSqlExpr ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(SSqlExprInfo* VAR_0, const SSqlExprInfo* VAR_1, uint64_t VAR_2) {
  if (VAR_1 == ((void*)0)) {
    return;
  }

  *VAR_0 = *VAR_1;

  VAR_0->pExprs = FUNC_0(sizeof(SSqlExpr) * VAR_0->numOfAlloc);
  int16_t VAR_3 = 0;
  for (int32_t VAR_4 = 0; VAR_4 < VAR_1->numOfExprs; ++VAR_4) {
    if (VAR_1->pExprs[VAR_4].uid == VAR_2) {
      VAR_0->pExprs[VAR_3++] = VAR_1->pExprs[VAR_4];
    }
  }

  VAR_0->numOfExprs = VAR_3;
  for (int32_t VAR_5 = 0; VAR_5 < VAR_0->numOfExprs; ++VAR_5) {
    for (int32_t VAR_6 = 0; VAR_6 < VAR_1->pExprs[VAR_5].numOfParams; ++VAR_6) {
      FUNC_1(&VAR_0->pExprs[VAR_5].param[VAR_6], &VAR_1->pExprs[VAR_5].param[VAR_6]);
    }
  }
}
