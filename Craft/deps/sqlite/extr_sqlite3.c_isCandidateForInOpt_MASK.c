
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pSelect; } ;
typedef TYPE_4__ Table ;
struct TYPE_16__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_15__ {int selFlags; scalar_t__ pGroupBy; scalar_t__ pOffset; TYPE_7__* pEList; TYPE_5__* pSrc; scalar_t__ pWhere; scalar_t__ pLimit; scalar_t__ pPrior; } ;
struct TYPE_14__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_12__ {TYPE_2__* pExpr; } ;
struct TYPE_11__ {scalar_t__ op; } ;
struct TYPE_10__ {TYPE_4__* pTab; scalar_t__ pSelect; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ ExprList ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Select *VAR_3){
  SrcList *VAR_4;
  ExprList *VAR_5;
  Table *VAR_6;
  if( VAR_3==0 ) return 0;
  if( VAR_3->pPrior ) return 0;
  if( VAR_3->selFlags & (VAR_1|VAR_0) ){
    FUNC_3( (VAR_3->selFlags & (VAR_1|VAR_0))==VAR_1 );
    FUNC_3( (VAR_3->selFlags & (VAR_1|VAR_0))==VAR_0 );
    return 0;
  }
  FUNC_2( VAR_3->pGroupBy==0 );
  if( VAR_3->pLimit ) return 0;
  FUNC_2( VAR_3->pOffset==0 );
  if( VAR_3->pWhere ) return 0;
  VAR_4 = VAR_3->pSrc;
  FUNC_2( VAR_4!=0 );
  if( VAR_4->nSrc!=1 ) return 0;
  if( VAR_4->a[0].pSelect ) return 0;
  VAR_6 = VAR_4->a[0].pTab;
  if( FUNC_1(VAR_6==0) ) return 0;
  FUNC_2( VAR_6->pSelect==0 );
  if( FUNC_0(VAR_6) ) return 0;
  VAR_5 = VAR_3->pEList;
  if( VAR_5->nExpr!=1 ) return 0;
  if( VAR_5->a[0].pExpr->op!=VAR_2 ) return 0;
  return 1;
}
