
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct AggInfo_func {scalar_t__ iMem; int iDistinct; TYPE_4__* pExpr; } ;
typedef int Vdbe ;
struct TYPE_17__ {int nFunc; int nColumn; int mxReg; int mnReg; struct AggInfo_func* aFunc; TYPE_1__* aCol; } ;
struct TYPE_14__ {TYPE_10__* pList; } ;
struct TYPE_16__ {TYPE_2__ x; } ;
struct TYPE_15__ {int * pVdbe; } ;
struct TYPE_13__ {scalar_t__ iMem; } ;
struct TYPE_12__ {int nExpr; } ;
typedef TYPE_3__ Parse ;
typedef int KeyInfo ;
typedef TYPE_4__ Expr ;
typedef TYPE_5__ AggInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_3__*,TYPE_10__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int *,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ,int,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(Parse *VAR_4, AggInfo *VAR_5){
  Vdbe *VAR_6 = VAR_4->pVdbe;
  int VAR_7;
  struct AggInfo_func *VAR_8;
  int VAR_9 = VAR_5->nFunc + VAR_5->nColumn;
  if( VAR_9==0 ) return;
  FUNC_4(VAR_6, VAR_1, 0, VAR_5->mnReg, VAR_5->mxReg);
  for(VAR_8=VAR_5->aFunc, VAR_7=0; VAR_7<VAR_5->nFunc; VAR_7++, VAR_8++){
    if( VAR_8->iDistinct>=0 ){
      Expr *VAR_10 = VAR_8->pExpr;
      FUNC_1( !FUNC_0(VAR_10, VAR_0) );
      if( VAR_10->x.pList==0 || VAR_10->x.pList->nExpr!=1 ){
        FUNC_3(VAR_4, "DISTINCT aggregates must have exactly one "
           "argument");
        VAR_8->iDistinct = -1;
      }else{
        KeyInfo *VAR_11 = FUNC_2(VAR_4, VAR_10->x.pList, 0, 0);
        FUNC_5(VAR_6, VAR_2, VAR_8->iDistinct, 0, 0,
                          (char*)VAR_11, VAR_3);
      }
    }
  }
}
