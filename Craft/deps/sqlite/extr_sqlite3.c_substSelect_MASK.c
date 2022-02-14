
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct SrcList_item {TYPE_2__* pSelect; } ;
typedef int sqlite3 ;
struct TYPE_7__ {TYPE_1__* pSrc; struct TYPE_7__* pPrior; void* pWhere; void* pHaving; int pOrderBy; int pGroupBy; int pEList; } ;
struct TYPE_6__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_1__ SrcList ;
typedef TYPE_2__ Select ;
typedef int ExprList ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int *,void*,int,int *) ;
 int FUNC_3 (int *,int ,int,int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3 *VAR_0,
  Select *VAR_1,
  int VAR_2,
  ExprList *VAR_3
){
  SrcList *VAR_4;
  struct SrcList_item *VAR_5;
  int VAR_6;
  if( !VAR_1 ) return;
  FUNC_3(VAR_0, VAR_1->pEList, VAR_2, VAR_3);
  FUNC_3(VAR_0, VAR_1->pGroupBy, VAR_2, VAR_3);
  FUNC_3(VAR_0, VAR_1->pOrderBy, VAR_2, VAR_3);
  VAR_1->pHaving = FUNC_2(VAR_0, VAR_1->pHaving, VAR_2, VAR_3);
  VAR_1->pWhere = FUNC_2(VAR_0, VAR_1->pWhere, VAR_2, VAR_3);
  FUNC_4(VAR_0, VAR_1->pPrior, VAR_2, VAR_3);
  VAR_4 = VAR_1->pSrc;
  FUNC_1( VAR_4 );
  if( FUNC_0(VAR_4) ){
    for(VAR_6=VAR_4->nSrc, VAR_5=VAR_4->a; VAR_6>0; VAR_6--, VAR_5++){
      FUNC_4(VAR_0, VAR_5->pSelect, VAR_2, VAR_3);
    }
  }
}
