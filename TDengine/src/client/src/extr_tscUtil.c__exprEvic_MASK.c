
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int numOfExprs; int * pExprs; } ;
typedef TYPE_1__ SSqlExprInfo ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(SSqlExprInfo* VAR_0, int32_t VAR_1) {
  if (VAR_1 < VAR_0->numOfExprs) {
    FUNC_0(&VAR_0->pExprs[VAR_1 + 1], &VAR_0->pExprs[VAR_1],
            sizeof(VAR_0->pExprs[0]) * (VAR_0->numOfExprs - VAR_1));
  }
}
