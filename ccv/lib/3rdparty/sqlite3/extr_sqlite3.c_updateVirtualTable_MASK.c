
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int i16 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_25__ {int nCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_29__ {TYPE_2__* a; } ;
struct TYPE_28__ {int nKeyCol; int* aiColumn; } ;
struct TYPE_27__ {int nMem; scalar_t__ isMultiWrite; int nTab; int * db; int * pVdbe; } ;
struct TYPE_26__ {TYPE_1__* a; } ;
struct TYPE_24__ {int * pExpr; } ;
struct TYPE_23__ {int iCursor; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Index ;
typedef TYPE_7__ ExprList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
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
 int FUNC_1 (int *) ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_6__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int ,int ,int,int,char const*,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_16 (TYPE_5__*,TYPE_4__*,int *,int ,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int*) ;

__attribute__((used)) static void FUNC_19(
  Parse *VAR_17,
  SrcList *VAR_18,
  Table *VAR_19,
  ExprList *VAR_20,
  Expr *VAR_21,
  int *VAR_22,
  Expr *VAR_23,
  int VAR_24
){
  Vdbe *VAR_25 = VAR_17->pVdbe;
  int VAR_26;
  int VAR_27;
  sqlite3 *VAR_28 = VAR_17->db;
  const char *VAR_29 = (const char*)FUNC_4(VAR_28, VAR_19);
  WhereInfo *VAR_30;
  int VAR_31 = 2 + VAR_19->nCol;
  int VAR_32;
  int VAR_33;
  int VAR_34;
  int VAR_35 = VAR_18->a[0].iCursor;
  int VAR_36[2];
  int VAR_37;
  int VAR_38;




  FUNC_2( *VAR_25 );
  VAR_26 = VAR_17->nTab++;
  VAR_38= FUNC_9(VAR_25, VAR_9, VAR_26, VAR_31);
  VAR_32 = VAR_17->nMem + 1;
  VAR_17->nMem += VAR_31;
  VAR_33 = ++VAR_17->nMem;
  VAR_34 = ++VAR_17->nMem;


  VAR_30 = FUNC_16(VAR_17, VAR_18, VAR_23, 0,0,VAR_16,0);
  if( VAR_30==0 ) return;


  for(VAR_27=0; VAR_27<VAR_19->nCol; VAR_27++){
    if( VAR_22[VAR_27]>=0 ){
      FUNC_3(VAR_17, VAR_20->a[VAR_22[VAR_27]].pExpr, VAR_32+2+VAR_27);
    }else{
      FUNC_10(VAR_25, VAR_13, VAR_35, VAR_27, VAR_32+2+VAR_27);
      FUNC_12(VAR_25, 1);
    }
  }
  if( FUNC_0(VAR_19) ){
    FUNC_9(VAR_25, VAR_11, VAR_35, VAR_32);
    if( VAR_21 ){
      FUNC_3(VAR_17, VAR_21, VAR_32+1);
    }else{
      FUNC_9(VAR_25, VAR_11, VAR_35, VAR_32+1);
    }
  }else{
    Index *VAR_39;
    i16 VAR_40;
    VAR_39 = FUNC_7(VAR_19);
    FUNC_2( VAR_39!=0 );
    FUNC_2( VAR_39->nKeyCol==1 );
    VAR_40 = VAR_39->aiColumn[0];
    FUNC_10(VAR_25, VAR_13, VAR_35, VAR_40, VAR_32);
    FUNC_9(VAR_25, VAR_12, VAR_32+2+VAR_40, VAR_32+1);
  }

  VAR_37 = FUNC_18(VAR_30, VAR_36);

  if( VAR_37 ){



    FUNC_13(VAR_25, VAR_38);
    if( FUNC_5(VAR_17) ){
      VAR_17->isMultiWrite = 0;
    }
  }else{


    FUNC_10(VAR_25, VAR_6, VAR_32, VAR_31, VAR_33);





    FUNC_9(VAR_25, VAR_7, VAR_26, VAR_34);
    FUNC_10(VAR_25, VAR_5, VAR_26, VAR_33, VAR_34);
  }


  if( VAR_37==0 ){

    FUNC_17(VAR_30);


    VAR_38 = FUNC_8(VAR_25, VAR_10, VAR_26); FUNC_1(VAR_25);



    for(VAR_27=0; VAR_27<VAR_31; VAR_27++){
      FUNC_10(VAR_25, VAR_4, VAR_26, VAR_27, VAR_32+VAR_27);
    }
  }
  FUNC_15(VAR_17, VAR_19);
  FUNC_11(VAR_25, VAR_14, 0, VAR_31, VAR_32, VAR_29, VAR_15);
  FUNC_12(VAR_25, VAR_24==VAR_1 ? VAR_0 : VAR_24);
  FUNC_6(VAR_17);



  if( VAR_37==0 ){
    FUNC_9(VAR_25, VAR_8, VAR_26, VAR_38+1); FUNC_1(VAR_25);
    FUNC_14(VAR_25, VAR_38);
    FUNC_9(VAR_25, VAR_3, VAR_26, 0);
  }else{
    FUNC_17(VAR_30);
  }
}
