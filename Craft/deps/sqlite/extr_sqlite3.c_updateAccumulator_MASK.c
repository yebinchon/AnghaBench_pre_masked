
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int u8 ;
struct ExprList_item {int pExpr; } ;
struct AggInfo_func {scalar_t__ iDistinct; TYPE_3__* pFunc; int iMem; TYPE_18__* pExpr; } ;
struct AggInfo_col {int iMem; int pExpr; } ;
typedef int Vdbe ;
struct TYPE_25__ {int directMode; int nFunc; int nAccumulator; struct AggInfo_col* aCol; struct AggInfo_func* aFunc; } ;
struct TYPE_24__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_23__ {int nMem; TYPE_2__* db; int * pVdbe; } ;
struct TYPE_22__ {int flags; } ;
struct TYPE_21__ {int * pDfltColl; } ;
struct TYPE_20__ {TYPE_5__* pList; } ;
struct TYPE_19__ {TYPE_1__ x; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;
typedef int CollSeq ;
typedef TYPE_6__ AggInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_18__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int,int,int) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int,int) ;
 int * FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int,int,int ,void*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static void FUNC_16(Parse *VAR_7, AggInfo *VAR_8){
  Vdbe *VAR_9 = VAR_7->pVdbe;
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  struct AggInfo_func *VAR_13;
  struct AggInfo_col *VAR_14;

  VAR_8->directMode = 1;
  FUNC_4(VAR_7);
  for(VAR_10=0, VAR_13=VAR_8->aFunc; VAR_10<VAR_8->nFunc; VAR_10++, VAR_13++){
    int VAR_15;
    int VAR_16 = 0;
    int VAR_17;
    ExprList *VAR_18 = VAR_13->pExpr->x.pList;
    FUNC_1( !FUNC_0(VAR_13->pExpr, VAR_0) );
    if( VAR_18 ){
      VAR_15 = VAR_18->nExpr;
      VAR_17 = FUNC_8(VAR_7, VAR_15);
      FUNC_6(VAR_7, VAR_18, VAR_17, 1);
    }else{
      VAR_15 = 0;
      VAR_17 = 0;
    }
    if( VAR_13->iDistinct>=0 ){
      VAR_16 = FUNC_14(VAR_9);
      FUNC_1( VAR_15==1 );
      FUNC_2(VAR_7, VAR_13->iDistinct, VAR_16, 1, VAR_17);
    }
    if( VAR_13->pFunc->flags & VAR_6 ){
      CollSeq *VAR_19 = 0;
      struct ExprList_item *VAR_20;
      int VAR_21;
      FUNC_1( VAR_18!=0 );
      for(VAR_21=0, VAR_20=VAR_18->a; !VAR_19 && VAR_21<VAR_15; VAR_21++, VAR_20++){
        VAR_19 = FUNC_7(VAR_7, VAR_20->pExpr);
      }
      if( !VAR_19 ){
        VAR_19 = VAR_7->db->pDfltColl;
      }
      if( VAR_11==0 && VAR_8->nAccumulator ) VAR_11 = ++VAR_7->nMem;
      FUNC_11(VAR_9, VAR_2, VAR_11, 0, 0, (char *)VAR_19, VAR_4);
    }
    FUNC_11(VAR_9, VAR_1, 0, VAR_17, VAR_13->iMem,
                      (void*)VAR_13->pFunc, VAR_5);
    FUNC_12(VAR_9, (u8)VAR_15);
    FUNC_3(VAR_7, VAR_17, VAR_15);
    FUNC_9(VAR_7, VAR_17, VAR_15);
    if( VAR_16 ){
      FUNC_15(VAR_9, VAR_16);
      FUNC_4(VAR_7);
    }
  }
  if( VAR_11 ){
    VAR_12 = FUNC_10(VAR_9, VAR_3, VAR_11);
  }
  FUNC_4(VAR_7);
  for(VAR_10=0, VAR_14=VAR_8->aCol; VAR_10<VAR_8->nAccumulator; VAR_10++, VAR_14++){
    FUNC_5(VAR_7, VAR_14->pExpr, VAR_14->iMem);
  }
  VAR_8->directMode = 0;
  FUNC_4(VAR_7);
  if( VAR_12 ){
    FUNC_13(VAR_9, VAR_12);
  }
}
