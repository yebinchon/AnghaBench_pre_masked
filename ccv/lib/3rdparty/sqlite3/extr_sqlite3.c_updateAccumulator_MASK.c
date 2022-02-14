
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int u8 ;
struct ExprList_item {int pExpr; } ;
struct AggInfo_func {scalar_t__ iDistinct; TYPE_8__* pFunc; int iMem; TYPE_18__* pExpr; } ;
struct AggInfo_col {int iMem; int pExpr; } ;
typedef int Vdbe ;
struct TYPE_25__ {int funcFlags; } ;
struct TYPE_24__ {int directMode; int nFunc; int nAccumulator; struct AggInfo_col* aCol; struct AggInfo_func* aFunc; } ;
struct TYPE_23__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_22__ {int nMem; TYPE_2__* db; int * pVdbe; } ;
struct TYPE_21__ {int * pDfltColl; } ;
struct TYPE_20__ {TYPE_4__* pList; } ;
struct TYPE_19__ {TYPE_1__ x; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef int CollSeq ;
typedef TYPE_5__ AggInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_18__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int,int,int) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,int,int ,int ) ;
 int * FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int ,int,int ) ;
 int FUNC_13 (int *,int ,int,int ,int ,char*,int ) ;
 int FUNC_14 (int *,TYPE_8__*,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(Parse *VAR_8, AggInfo *VAR_9){
  Vdbe *VAR_10 = VAR_8->pVdbe;
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 0;
  struct AggInfo_func *VAR_14;
  struct AggInfo_col *VAR_15;

  VAR_9->directMode = 1;
  for(VAR_11=0, VAR_14=VAR_9->aFunc; VAR_11<VAR_9->nFunc; VAR_11++, VAR_14++){
    int VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    ExprList *VAR_19 = VAR_14->pExpr->x.pList;
    FUNC_2( !FUNC_0(VAR_14->pExpr, VAR_0) );
    if( VAR_19 ){
      VAR_16 = VAR_19->nExpr;
      VAR_18 = FUNC_9(VAR_8, VAR_16);
      FUNC_7(VAR_8, VAR_19, VAR_18, 0, VAR_6);
    }else{
      VAR_16 = 0;
      VAR_18 = 0;
    }
    if( VAR_14->iDistinct>=0 ){
      VAR_17 = FUNC_17(VAR_10);
      FUNC_19( VAR_16==0 );
      FUNC_19( VAR_16>1 );
      FUNC_3(VAR_8, VAR_14->iDistinct, VAR_17, 1, VAR_18);
    }
    if( VAR_14->pFunc->funcFlags & VAR_7 ){
      CollSeq *VAR_20 = 0;
      struct ExprList_item *VAR_21;
      int VAR_22;
      FUNC_2( VAR_19!=0 );
      for(VAR_22=0, VAR_21=VAR_19->a; !VAR_20 && VAR_22<VAR_16; VAR_22++, VAR_21++){
        VAR_20 = FUNC_8(VAR_8, VAR_21->pExpr);
      }
      if( !VAR_20 ){
        VAR_20 = VAR_8->db->pDfltColl;
      }
      if( VAR_12==0 && VAR_9->nAccumulator ) VAR_12 = ++VAR_8->nMem;
      FUNC_13(VAR_10, VAR_2, VAR_12, 0, 0, (char *)VAR_20, VAR_4);
    }
    FUNC_12(VAR_10, VAR_1, 0, VAR_18, VAR_14->iMem);
    FUNC_14(VAR_10, VAR_14->pFunc, VAR_5);
    FUNC_15(VAR_10, (u8)VAR_16);
    FUNC_4(VAR_8, VAR_18, VAR_16);
    FUNC_10(VAR_8, VAR_18, VAR_16);
    if( VAR_17 ){
      FUNC_18(VAR_10, VAR_17);
      FUNC_5(VAR_8);
    }
  }
  if( VAR_12 ){
    VAR_13 = FUNC_11(VAR_10, VAR_3, VAR_12); FUNC_1(VAR_10);
  }
  FUNC_5(VAR_8);
  for(VAR_11=0, VAR_15=VAR_9->aCol; VAR_11<VAR_9->nAccumulator; VAR_11++, VAR_15++){
    FUNC_6(VAR_8, VAR_15->pExpr, VAR_15->iMem);
  }
  VAR_9->directMode = 0;
  FUNC_5(VAR_8);
  if( VAR_13 ){
    FUNC_16(VAR_10, VAR_13);
  }
}
