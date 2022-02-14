
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int Vdbe ;
struct TYPE_19__ {scalar_t__ op; struct TYPE_19__* pRight; struct TYPE_19__* pLeft; } ;
struct TYPE_18__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__*,scalar_t__,int,int,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int,int,TYPE_2__**,int*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(
  Parse *VAR_20,
  Expr *VAR_21,
  int VAR_22,
  u8 VAR_23,
  u8 VAR_24
){
  Vdbe *VAR_25 = VAR_20->pVdbe;
  Expr *VAR_26 = VAR_21->pLeft;
  Expr *VAR_27 = VAR_21->pRight;
  int VAR_28 = FUNC_9(VAR_26);
  int VAR_29;
  int VAR_30 = 0;
  int VAR_31 = 0;
  u8 VAR_32 = VAR_23;
  int VAR_33 = FUNC_12(VAR_25);

  if( VAR_28!=FUNC_9(VAR_27) ){
    FUNC_6(VAR_20, "row value misused");
    return;
  }
  FUNC_2( VAR_21->op==VAR_12 || VAR_21->op==VAR_19
       || VAR_21->op==VAR_15 || VAR_21->op==VAR_16
       || VAR_21->op==VAR_18 || VAR_21->op==VAR_14
       || VAR_21->op==VAR_17 || VAR_21->op==VAR_13
  );
  FUNC_2( VAR_21->op==VAR_23 || (VAR_21->op==VAR_15 && VAR_23==VAR_12)
            || (VAR_21->op==VAR_16 && VAR_23==VAR_19) );
  FUNC_2( VAR_24==0 || VAR_21->op!=VAR_23 );
  FUNC_2( VAR_24==VAR_10 || VAR_21->op==VAR_23 );

  VAR_24 |= VAR_11;
  if( VAR_32==VAR_17 ) VAR_32 = VAR_18;
  if( VAR_32==VAR_13 ) VAR_32 = VAR_14;

  VAR_30 = FUNC_4(VAR_20, VAR_26);
  VAR_31 = FUNC_4(VAR_20, VAR_27);

  for(VAR_29=0; 1 ; VAR_29++){
    int VAR_34 = 0, VAR_35 = 0;
    Expr *VAR_36, *VAR_37;
    int VAR_38, VAR_39;
    FUNC_2( VAR_29>=0 && VAR_29<VAR_28 );
    if( VAR_29>0 ) FUNC_8(VAR_20);
    VAR_38 = FUNC_5(VAR_20, VAR_26, VAR_29, VAR_30, &VAR_36, &VAR_34);
    VAR_39 = FUNC_5(VAR_20, VAR_27, VAR_29, VAR_31, &VAR_37, &VAR_35);
    FUNC_3(VAR_20, VAR_36, VAR_37, VAR_32, VAR_38, VAR_39, VAR_22, VAR_24);
    FUNC_14(VAR_23==VAR_7); FUNC_1(VAR_25,VAR_23==VAR_7);
    FUNC_14(VAR_23==VAR_6); FUNC_1(VAR_25,VAR_23==VAR_6);
    FUNC_14(VAR_23==VAR_3); FUNC_1(VAR_25,VAR_23==VAR_3);
    FUNC_14(VAR_23==VAR_2); FUNC_1(VAR_25,VAR_23==VAR_2);
    FUNC_14(VAR_23==VAR_1); FUNC_1(VAR_25,VAR_23==VAR_1);
    FUNC_14(VAR_23==VAR_8); FUNC_1(VAR_25,VAR_23==VAR_8);
    FUNC_10(VAR_20, VAR_34);
    FUNC_10(VAR_20, VAR_35);
    if( VAR_29>0 ) FUNC_7(VAR_20);
    if( VAR_29==VAR_28-1 ){
      break;
    }
    if( VAR_32==VAR_12 ){
      FUNC_11(VAR_25, VAR_5, VAR_22, VAR_33); FUNC_0(VAR_25);
      VAR_24 |= VAR_9;
    }else if( VAR_32==VAR_19 ){
      FUNC_11(VAR_25, VAR_4, VAR_22, VAR_33); FUNC_0(VAR_25);
      VAR_24 |= VAR_9;
    }else{
      FUNC_2( VAR_23==VAR_18 || VAR_23==VAR_14 || VAR_23==VAR_17 || VAR_23==VAR_13 );
      FUNC_11(VAR_25, VAR_0, 0, VAR_33);
      FUNC_1(VAR_25, VAR_23==VAR_18);
      FUNC_1(VAR_25, VAR_23==VAR_14);
      FUNC_1(VAR_25, VAR_23==VAR_17);
      FUNC_1(VAR_25, VAR_23==VAR_13);
      if( VAR_29==VAR_28-2 ) VAR_32 = VAR_23;
    }
  }
  FUNC_13(VAR_25, VAR_33);
}
