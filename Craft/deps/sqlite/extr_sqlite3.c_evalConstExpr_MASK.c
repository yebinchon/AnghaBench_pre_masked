
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct ExprList_item {TYPE_12__* pExpr; } ;
struct TYPE_15__ {TYPE_3__* pParse; } ;
typedef TYPE_2__ Walker ;
struct TYPE_14__ {TYPE_4__* pList; } ;
struct TYPE_18__ {int op; int op2; int iTable; TYPE_1__ x; } ;
struct TYPE_17__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_16__ {int nMem; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;






 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_5(Walker *VAR_4, Expr *VAR_5){
  Parse *VAR_6 = VAR_4->pParse;
  switch( VAR_5->op ){
    case 129:
    case 128: {
      return VAR_3;
    }
    case 132: {
      return VAR_2;
    }
    case 130:
    case 133:
    case 131: {




      ExprList *VAR_7 = VAR_5->x.pList;
      FUNC_2( !FUNC_1(VAR_5, VAR_1) );
      if( VAR_7 ){
        int VAR_8 = VAR_7->nExpr;
        struct ExprList_item *VAR_9 = VAR_7->a;
        for(; VAR_8>0; VAR_8--, VAR_9++){
          if( FUNC_0(VAR_9->pExpr) ) VAR_9->pExpr->flags |= VAR_0;
        }
      }
      break;
    }
  }
  if( FUNC_3(VAR_5) ){
    int VAR_10 = ++VAR_6->nMem;
    int VAR_11 = FUNC_4(VAR_6, VAR_5, VAR_10);



    FUNC_2( VAR_11==VAR_10 );
    VAR_5->op2 = VAR_5->op;
    VAR_5->op = 128;
    VAR_5->iTable = VAR_11;
    return VAR_3;
  }
  return VAR_2;
}
