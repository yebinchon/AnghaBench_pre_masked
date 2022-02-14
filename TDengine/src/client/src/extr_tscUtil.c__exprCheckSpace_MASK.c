
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ numOfAlloc; int * pExprs; } ;
typedef TYPE_1__ SSqlExprInfo ;
typedef int SSqlExpr ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(SSqlExprInfo* VAR_1, int32_t VAR_2) {
  if (VAR_2 > VAR_1->numOfAlloc) {
    uint32_t VAR_3 = VAR_1->numOfAlloc;

    uint32_t VAR_4 = (VAR_3 <= 0) ? 8 : (VAR_3 << 1U);
    while (VAR_4 < VAR_2) {
      VAR_4 = (VAR_4 << 1U);
    }

    if (VAR_4 > VAR_0) {
      VAR_4 = VAR_0;
    }

    int32_t VAR_5 = VAR_4 - VAR_3;

    VAR_1->pExprs = FUNC_1(VAR_1->pExprs, VAR_4 * sizeof(SSqlExpr));
    FUNC_0(&VAR_1->pExprs[VAR_3], 0, VAR_5 * sizeof(SSqlExpr));

    VAR_1->numOfAlloc = VAR_4;
  }
}
