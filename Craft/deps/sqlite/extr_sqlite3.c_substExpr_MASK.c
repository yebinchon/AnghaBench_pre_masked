
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_14__ {int pList; int pSelect; } ;
struct TYPE_16__ {scalar_t__ op; int iTable; size_t iColumn; TYPE_2__ x; struct TYPE_16__* pRight; struct TYPE_16__* pLeft; } ;
struct TYPE_15__ {size_t nExpr; TYPE_1__* a; } ;
struct TYPE_13__ {int pExpr; } ;
typedef TYPE_3__ ExprList ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int,TYPE_3__*) ;

__attribute__((used)) static Expr *FUNC_6(
  sqlite3 *VAR_3,
  Expr *VAR_4,
  int VAR_5,
  ExprList *VAR_6
){
  if( VAR_4==0 ) return 0;
  if( VAR_4->op==VAR_1 && VAR_4->iTable==VAR_5 ){
    if( VAR_4->iColumn<0 ){
      VAR_4->op = VAR_2;
    }else{
      Expr *VAR_7;
      FUNC_1( VAR_6!=0 && VAR_4->iColumn<VAR_6->nExpr );
      FUNC_1( VAR_4->pLeft==0 && VAR_4->pRight==0 );
      VAR_7 = FUNC_3(VAR_3, VAR_6->a[VAR_4->iColumn].pExpr, 0);
      FUNC_2(VAR_3, VAR_4);
      VAR_4 = VAR_7;
    }
  }else{
    VAR_4->pLeft = FUNC_6(VAR_3, VAR_4->pLeft, VAR_5, VAR_6);
    VAR_4->pRight = FUNC_6(VAR_3, VAR_4->pRight, VAR_5, VAR_6);
    if( FUNC_0(VAR_4, VAR_0) ){
      FUNC_5(VAR_3, VAR_4->x.pSelect, VAR_5, VAR_6);
    }else{
      FUNC_4(VAR_3, VAR_4->x.pList, VAR_5, VAR_6);
    }
  }
  return VAR_4;
}
