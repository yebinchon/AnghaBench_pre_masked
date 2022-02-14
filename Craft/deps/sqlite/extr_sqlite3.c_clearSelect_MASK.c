
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {int pOffset; int pLimit; int pPrior; int pOrderBy; int pHaving; int pGroupBy; int pWhere; int pSrc; int pEList; } ;
typedef TYPE_1__ Select ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(sqlite3 *VAR_0, Select *VAR_1){
  FUNC_1(VAR_0, VAR_1->pEList);
  FUNC_3(VAR_0, VAR_1->pSrc);
  FUNC_0(VAR_0, VAR_1->pWhere);
  FUNC_1(VAR_0, VAR_1->pGroupBy);
  FUNC_0(VAR_0, VAR_1->pHaving);
  FUNC_1(VAR_0, VAR_1->pOrderBy);
  FUNC_2(VAR_0, VAR_1->pPrior);
  FUNC_0(VAR_0, VAR_1->pLimit);
  FUNC_0(VAR_0, VAR_1->pOffset);
}
