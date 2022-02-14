
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_23__ {int zName; int tnum; } ;
typedef TYPE_3__ Table ;
struct TYPE_25__ {int tnum; scalar_t__ onError; int zName; int pSchema; TYPE_3__* pTable; } ;
struct TYPE_24__ {int nTab; TYPE_2__* db; } ;
struct TYPE_21__ {int zName; } ;
typedef TYPE_4__ Parse ;
typedef int KeyInfo ;
typedef TYPE_5__ Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int,int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ,char*,int ) ;
 int * FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int,int,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_4__*,int,int ,int,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *,int ,int,int,int) ;
 int FUNC_13 (int *,int ,int,int,int,char*,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void FUNC_17(Parse *VAR_24, Index *VAR_25, int VAR_26){
  Table *VAR_27 = VAR_25->pTable;
  int VAR_28 = VAR_24->nTab++;
  int VAR_29 = VAR_24->nTab++;
  int VAR_30;
  int VAR_31;
  int VAR_32;
  int VAR_33;
  Vdbe *VAR_34;
  KeyInfo *VAR_35;
  int VAR_36;
  sqlite3 *VAR_37 = VAR_24->db;
  int VAR_38 = FUNC_8(VAR_37, VAR_25->pSchema);


  if( FUNC_0(VAR_24, VAR_23, VAR_25->zName, 0,
      VAR_37->aDb[VAR_38].zName ) ){
    return;
  }



  FUNC_9(VAR_24, VAR_38, VAR_27->tnum, 1, VAR_27->zName);

  VAR_34 = FUNC_3(VAR_24);
  if( VAR_34==0 ) return;
  if( VAR_26>=0 ){
    VAR_33 = VAR_26;
  }else{
    VAR_33 = VAR_25->tnum;
    FUNC_11(VAR_34, VAR_5, VAR_33, VAR_38);
  }
  VAR_35 = FUNC_5(VAR_24, VAR_25);
  FUNC_13(VAR_34, VAR_11, VAR_29, VAR_33, VAR_38,
                    (char *)VAR_35, VAR_20);
  FUNC_14(VAR_34, VAR_2|((VAR_26>=0)?VAR_3:0));


  VAR_30 = VAR_24->nTab++;
  FUNC_13(VAR_34, VAR_17, VAR_30, 0, 0, (char*)VAR_35, VAR_19);



  FUNC_6(VAR_24, VAR_28, VAR_38, VAR_27, VAR_10);
  VAR_31 = FUNC_11(VAR_34, VAR_12, VAR_28, 0);
  VAR_36 = FUNC_2(VAR_24);

  FUNC_1(VAR_24, VAR_25, VAR_28, VAR_36, 1);
  FUNC_11(VAR_34, VAR_15, VAR_30, VAR_36);
  FUNC_11(VAR_34, VAR_9, VAR_28, VAR_31+1);
  FUNC_16(VAR_34, VAR_31);
  VAR_31 = FUNC_11(VAR_34, VAR_18, VAR_30, 0);
  if( VAR_25->onError!=VAR_1 ){
    int VAR_39 = FUNC_15(VAR_34) + 3;
    FUNC_11(VAR_34, VAR_7, 0, VAR_39);
    VAR_32 = FUNC_15(VAR_34);
    FUNC_12(VAR_34, VAR_13, VAR_30, VAR_39, VAR_36);
    FUNC_4(VAR_24, VAR_22,
        VAR_0, "indexed columns are not unique", VAR_21
    );
  }else{
    VAR_32 = FUNC_15(VAR_34);
  }
  FUNC_11(VAR_34, VAR_14, VAR_30, VAR_36);
  FUNC_12(VAR_34, VAR_8, VAR_29, VAR_36, 1);
  FUNC_14(VAR_34, VAR_4);
  FUNC_7(VAR_24, VAR_36);
  FUNC_11(VAR_34, VAR_16, VAR_30, VAR_32);
  FUNC_16(VAR_34, VAR_31);

  FUNC_10(VAR_34, VAR_6, VAR_28);
  FUNC_10(VAR_34, VAR_6, VAR_29);
  FUNC_10(VAR_34, VAR_6, VAR_30);
}
