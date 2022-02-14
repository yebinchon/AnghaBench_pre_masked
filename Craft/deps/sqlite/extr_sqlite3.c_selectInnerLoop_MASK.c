
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_29__ {int p1; int p2; int opcode; } ;
typedef TYPE_2__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_34__ {int eTnctType; int tabTnct; int addrTnct; } ;
struct TYPE_33__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_32__ {int nMem; int * pVdbe; } ;
struct TYPE_31__ {int iLimit; } ;
struct TYPE_30__ {int eDest; int iSDParm; int iSdst; int nSdst; int affSdst; } ;
struct TYPE_28__ {int pExpr; } ;
typedef TYPE_3__ SelectDest ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ DistinctCtx ;
typedef int CollSeq ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,int,int,int) ;
 int FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*,TYPE_4__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_5__*,int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*,int,int) ;
 int FUNC_9 (TYPE_5__*,int,int,int) ;
 int * FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,int ,int,int,int) ;
 int FUNC_16 (int *,int ,int,int,int,int *,int) ;
 int FUNC_17 (int *,int,char const*,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 TYPE_2__* FUNC_21 (int *,int ) ;
 int FUNC_22 (int) ;

__attribute__((used)) static void FUNC_23(
  Parse *VAR_20,
  Select *VAR_21,
  ExprList *VAR_22,
  int VAR_23,
  int VAR_24,
  ExprList *VAR_25,
  DistinctCtx *VAR_26,
  SelectDest *VAR_27,
  int VAR_28,
  int VAR_29
){
  Vdbe *VAR_30 = VAR_20->pVdbe;
  int VAR_31;
  int VAR_32;
  int VAR_33;
  int VAR_34 = VAR_27->eDest;
  int VAR_35 = VAR_27->iSDParm;
  int VAR_36;

  FUNC_1( *VAR_30 );
  if( FUNC_0(VAR_30==0) ) return;
  FUNC_1( VAR_22!=0 );
  VAR_32 = VAR_26 ? VAR_26->eTnctType : VAR_18;
  if( VAR_25==0 && !VAR_32 ){
    FUNC_3(VAR_30, VAR_21, VAR_28);
  }



  if( VAR_24>0 ){
    VAR_36 = VAR_24;
  }else{
    VAR_36 = VAR_22->nExpr;
  }
  if( VAR_27->iSdst==0 ){
    VAR_27->iSdst = VAR_20->nMem+1;
    VAR_27->nSdst = VAR_36;
    VAR_20->nMem += VAR_36;
  }else{
    FUNC_1( VAR_27->nSdst==VAR_36 );
  }
  VAR_33 = VAR_27->iSdst;
  if( VAR_24>0 ){
    for(VAR_31=0; VAR_31<VAR_24; VAR_31++){
      FUNC_15(VAR_30, VAR_1, VAR_23, VAR_31, VAR_33+VAR_31);
    }
  }else if( VAR_34!=135 ){



    FUNC_7(VAR_20);
    FUNC_8(VAR_20, VAR_22, VAR_33, VAR_34==133);
  }
  VAR_24 = VAR_36;





  if( VAR_32 ){
    FUNC_1( VAR_22!=0 );
    FUNC_1( VAR_22->nExpr==VAR_24 );
    switch( VAR_26->eTnctType ){
      case 129: {
        VdbeOp *VAR_37;
        int VAR_38;
        int VAR_39;


        VAR_39 = VAR_20->nMem+1;
        VAR_20->nMem += VAR_24;







        FUNC_19(VAR_30, VAR_26->addrTnct);
        VAR_37 = FUNC_21(VAR_30, VAR_26->addrTnct);
        VAR_37->opcode = VAR_12;
        VAR_37->p1 = 1;
        VAR_37->p2 = VAR_39;

        VAR_38 = FUNC_20(VAR_30) + VAR_24;
        for(VAR_31=0; VAR_31<VAR_24; VAR_31++){
          CollSeq *VAR_40 = FUNC_10(VAR_20, VAR_22->a[VAR_31].pExpr);
          if( VAR_31<VAR_24-1 ){
            FUNC_15(VAR_30, VAR_10, VAR_33+VAR_31, VAR_38, VAR_39+VAR_31);
          }else{
            FUNC_15(VAR_30, VAR_3, VAR_33+VAR_31, VAR_28, VAR_39+VAR_31);
          }
          FUNC_17(VAR_30, -1, (const char *)VAR_40, VAR_15);
          FUNC_18(VAR_30, VAR_16);
        }
        FUNC_1( FUNC_20(VAR_30)==VAR_38 );
        FUNC_15(VAR_30, VAR_2, VAR_33, VAR_39, VAR_24-1);
        break;
      }

      case 128: {
        FUNC_19(VAR_30, VAR_26->addrTnct);
        break;
      }

      default: {
        FUNC_1( VAR_26->eTnctType==VAR_19 );
        FUNC_2(VAR_20, VAR_26->tabTnct, VAR_28, VAR_24, VAR_33);
        break;
      }
    }
    if( VAR_25==0 ){
      FUNC_3(VAR_30, VAR_21, VAR_28);
    }
  }

  switch( VAR_34 ){




    case 130: {
      int VAR_41;
      VAR_41 = FUNC_11(VAR_20);
      FUNC_15(VAR_30, VAR_9, VAR_33, VAR_24, VAR_41);
      FUNC_14(VAR_30, VAR_5, VAR_35, VAR_41);
      FUNC_12(VAR_20, VAR_41);
      break;
    }





    case 136: {
      FUNC_15(VAR_30, VAR_4, VAR_35, VAR_33, VAR_24);
      break;
    }




    case 131:
    case 137: {
      int VAR_42 = FUNC_11(VAR_20);
      FUNC_22( VAR_34==131 );
      FUNC_22( VAR_34==137 );
      FUNC_15(VAR_30, VAR_9, VAR_33, VAR_24, VAR_42);
      if( VAR_25 ){
        FUNC_4(VAR_20, VAR_25, VAR_21, VAR_42);
      }else{
        int VAR_43 = FUNC_11(VAR_20);
        FUNC_14(VAR_30, VAR_11, VAR_35, VAR_43);
        FUNC_15(VAR_30, VAR_7, VAR_35, VAR_42, VAR_43);
        FUNC_18(VAR_30, VAR_0);
        FUNC_12(VAR_20, VAR_43);
      }
      FUNC_12(VAR_20, VAR_42);
      break;
    }






    case 132: {
      FUNC_1( VAR_24==1 );
      VAR_27->affSdst =
                  FUNC_5(VAR_22->a[0].pExpr, VAR_27->affSdst);
      if( VAR_25 ){




        FUNC_4(VAR_20, VAR_25, VAR_21, VAR_33);
      }else{
        int VAR_44 = FUNC_11(VAR_20);
        FUNC_16(VAR_30, VAR_9, VAR_33,1,VAR_44, &VAR_27->affSdst, 1);
        FUNC_6(VAR_20, VAR_33, 1);
        FUNC_14(VAR_30, VAR_5, VAR_35, VAR_44);
        FUNC_12(VAR_20, VAR_44);
      }
      break;
    }



    case 135: {
      FUNC_14(VAR_30, VAR_8, 1, VAR_35);

      break;
    }





    case 134: {
      FUNC_1( VAR_24==1 );
      if( VAR_25 ){
        FUNC_4(VAR_20, VAR_25, VAR_21, VAR_33);
      }else{
        FUNC_9(VAR_20, VAR_33, VAR_35, 1);

      }
      break;
    }






    case 138:
    case 133: {
      FUNC_22( VAR_34==138 );
      FUNC_22( VAR_34==133 );
      if( VAR_25 ){
        int VAR_45 = FUNC_11(VAR_20);
        FUNC_15(VAR_30, VAR_9, VAR_33, VAR_24, VAR_45);
        FUNC_4(VAR_20, VAR_25, VAR_21, VAR_45);
        FUNC_12(VAR_20, VAR_45);
      }else if( VAR_34==138 ){
        FUNC_13(VAR_30, VAR_14, VAR_27->iSDParm);
      }else{
        FUNC_14(VAR_30, VAR_13, VAR_33, VAR_24);
        FUNC_6(VAR_20, VAR_33, VAR_24);
      }
      break;
    }







    default: {
      FUNC_1( VAR_34==VAR_17 );
      break;
    }

  }





  if( VAR_25==0 && VAR_21->iLimit ){
    FUNC_15(VAR_30, VAR_6, VAR_21->iLimit, VAR_29, -1);
  }
}
