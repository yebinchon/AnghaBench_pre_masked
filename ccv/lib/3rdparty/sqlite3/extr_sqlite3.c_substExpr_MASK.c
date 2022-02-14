
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int sqlite3 ;
typedef int ifNullRow ;
struct TYPE_23__ {int pList; int pSelect; } ;
struct TYPE_25__ {scalar_t__ iRightJoinTable; scalar_t__ op; scalar_t__ iTable; size_t iColumn; TYPE_3__ x; struct TYPE_25__* pRight; struct TYPE_25__* pLeft; } ;
struct TYPE_24__ {scalar_t__ iTable; scalar_t__ iNewTable; scalar_t__ isLeftJoin; TYPE_11__* pParse; TYPE_2__* pEList; } ;
struct TYPE_22__ {size_t nExpr; TYPE_1__* a; } ;
struct TYPE_21__ {TYPE_5__* pExpr; } ;
struct TYPE_20__ {int * db; } ;
typedef TYPE_4__ SubstContext ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;

__attribute__((used)) static Expr *FUNC_10(
  SubstContext *VAR_6,
  Expr *VAR_7
){
  if( VAR_7==0 ) return 0;
  if( FUNC_0(VAR_7, VAR_1)
   && VAR_7->iRightJoinTable==VAR_6->iTable
  ){
    VAR_7->iRightJoinTable = VAR_6->iNewTable;
  }
  if( VAR_7->op==VAR_3 && VAR_7->iTable==VAR_6->iTable ){
    if( VAR_7->iColumn<0 ){
      VAR_7->op = VAR_5;
    }else{
      Expr *VAR_8;
      Expr *VAR_9 = VAR_6->pEList->a[VAR_7->iColumn].pExpr;
      Expr VAR_10;
      FUNC_2( VAR_6->pEList!=0 && VAR_7->iColumn<VAR_6->pEList->nExpr );
      FUNC_2( VAR_7->pLeft==0 && VAR_7->pRight==0 );
      if( FUNC_6(VAR_9) ){
        FUNC_7(VAR_6->pParse, VAR_9);
      }else{
        sqlite3 *VAR_11 = VAR_6->pParse->db;
        if( VAR_6->isLeftJoin && VAR_9->op!=VAR_3 ){
          FUNC_3(&VAR_10, 0, sizeof(VAR_10));
          VAR_10.op = VAR_4;
          VAR_10.pLeft = VAR_9;
          VAR_10.iTable = VAR_6->iNewTable;
          VAR_9 = &VAR_10;
        }
        VAR_8 = FUNC_5(VAR_11, VAR_9, 0);
        if( VAR_8 && VAR_6->isLeftJoin ){
          FUNC_1(VAR_8, VAR_0);
        }
        if( VAR_8 && FUNC_0(VAR_7,VAR_1) ){
          VAR_8->iRightJoinTable = VAR_7->iRightJoinTable;
          FUNC_1(VAR_8, VAR_1);
        }
        FUNC_4(VAR_11, VAR_7);
        VAR_7 = VAR_8;
      }
    }
  }else{
    if( VAR_7->op==VAR_4 && VAR_7->iTable==VAR_6->iTable ){
      VAR_7->iTable = VAR_6->iNewTable;
    }
    VAR_7->pLeft = FUNC_10(VAR_6, VAR_7->pLeft);
    VAR_7->pRight = FUNC_10(VAR_6, VAR_7->pRight);
    if( FUNC_0(VAR_7, VAR_2) ){
      FUNC_9(VAR_6, VAR_7->x.pSelect, 1);
    }else{
      FUNC_8(VAR_6, VAR_7->x.pList);
    }
  }
  return VAR_7;
}
