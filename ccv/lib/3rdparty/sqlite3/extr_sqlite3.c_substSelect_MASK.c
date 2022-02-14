
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pFuncArg; } ;
struct TYPE_6__ {scalar_t__ isTabFunc; } ;
struct SrcList_item {TYPE_2__ u1; TYPE_1__ fg; TYPE_4__* pSelect; } ;
struct TYPE_9__ {TYPE_3__* pSrc; void* pWhere; void* pHaving; int pOrderBy; int pGroupBy; int pEList; struct TYPE_9__* pPrior; } ;
struct TYPE_8__ {int nSrc; struct SrcList_item* a; } ;
typedef int SubstContext ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(
  SubstContext *VAR_0,
  Select *VAR_1,
  int VAR_2
){
  SrcList *VAR_3;
  struct SrcList_item *VAR_4;
  int VAR_5;
  if( !VAR_1 ) return;
  do{
    FUNC_2(VAR_0, VAR_1->pEList);
    FUNC_2(VAR_0, VAR_1->pGroupBy);
    FUNC_2(VAR_0, VAR_1->pOrderBy);
    VAR_1->pHaving = FUNC_1(VAR_0, VAR_1->pHaving);
    VAR_1->pWhere = FUNC_1(VAR_0, VAR_1->pWhere);
    VAR_3 = VAR_1->pSrc;
    FUNC_0( VAR_3!=0 );
    for(VAR_5=VAR_3->nSrc, VAR_4=VAR_3->a; VAR_5>0; VAR_5--, VAR_4++){
      FUNC_3(VAR_0, VAR_4->pSelect, 1);
      if( VAR_4->fg.isTabFunc ){
        FUNC_2(VAR_0, VAR_4->u1.pFuncArg);
      }
    }
  }while( VAR_2 && (VAR_1 = VAR_1->pPrior)!=0 );
}
