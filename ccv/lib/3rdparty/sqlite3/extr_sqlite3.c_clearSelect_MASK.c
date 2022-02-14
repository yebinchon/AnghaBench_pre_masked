
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int pWith; int pLimit; int pOrderBy; int pHaving; int pGroupBy; int pWhere; int pSrc; int pEList; struct TYPE_4__* pPrior; } ;
typedef TYPE_1__ Select ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(sqlite3 *VAR_0, Select *VAR_1, int VAR_2){
  while( VAR_1 ){
    Select *VAR_3 = VAR_1->pPrior;
    FUNC_3(VAR_0, VAR_1->pEList);
    FUNC_4(VAR_0, VAR_1->pSrc);
    FUNC_2(VAR_0, VAR_1->pWhere);
    FUNC_3(VAR_0, VAR_1->pGroupBy);
    FUNC_2(VAR_0, VAR_1->pHaving);
    FUNC_3(VAR_0, VAR_1->pOrderBy);
    FUNC_2(VAR_0, VAR_1->pLimit);
    if( FUNC_0(VAR_1->pWith) ) FUNC_5(VAR_0, VAR_1->pWith);
    if( VAR_2 ) FUNC_1(VAR_0, VAR_1);
    VAR_1 = VAR_3;
    VAR_2 = 1;
  }
}
