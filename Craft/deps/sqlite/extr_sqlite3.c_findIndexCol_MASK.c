
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int zName; } ;
struct TYPE_14__ {scalar_t__ op; scalar_t__ iColumn; int iTable; } ;
struct TYPE_13__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_12__ {char** azColl; scalar_t__* aiColumn; } ;
struct TYPE_11__ {int pExpr; } ;
typedef int Parse ;
typedef TYPE_2__ Index ;
typedef TYPE_3__ ExprList ;
typedef TYPE_4__ Expr ;
typedef TYPE_5__ CollSeq ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(
  Parse *VAR_1,
  ExprList *VAR_2,
  int VAR_3,
  Index *VAR_4,
  int VAR_5
){
  int VAR_6;
  const char *VAR_7 = VAR_4->azColl[VAR_5];

  for(VAR_6=0; VAR_6<VAR_2->nExpr; VAR_6++){
    Expr *VAR_8 = FUNC_2(VAR_2->a[VAR_6].pExpr);
    if( VAR_8->op==VAR_0
     && VAR_8->iColumn==VAR_4->aiColumn[VAR_5]
     && VAR_8->iTable==VAR_3
    ){
      CollSeq *VAR_9 = FUNC_1(VAR_1, VAR_2->a[VAR_6].pExpr);
      if( FUNC_0(VAR_9) && 0==FUNC_3(VAR_9->zName, VAR_7) ){
        return VAR_6;
      }
    }
  }

  return -1;
}
