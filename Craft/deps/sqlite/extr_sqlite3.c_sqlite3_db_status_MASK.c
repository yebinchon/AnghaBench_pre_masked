
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct Vdbe {struct Vdbe* pNext; } ;
struct TYPE_18__ {int nOut; int mxOut; int* anStat; } ;
struct TYPE_23__ {int nDb; int* pnBytesFreed; int mutex; TYPE_5__* aDb; struct Vdbe* pVdbe; TYPE_1__ lookaside; } ;
typedef TYPE_6__ sqlite3 ;
typedef int Trigger ;
typedef int Table ;
struct TYPE_25__ {int count; int ht; } ;
struct TYPE_21__ {int count; int ht; } ;
struct TYPE_20__ {int count; int ht; } ;
struct TYPE_24__ {TYPE_8__ tblHash; TYPE_8__ trigHash; TYPE_4__ fkeyHash; TYPE_3__ idxHash; } ;
struct TYPE_22__ {int * pBt; TYPE_7__* pSchema; } ;
struct TYPE_19__ {int (* xRoundup ) (int) ;} ;
struct TYPE_17__ {TYPE_2__ m; } ;
typedef TYPE_7__ Schema ;
typedef int Pager ;
typedef int HashElem ;
typedef int Btree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__*,struct Vdbe*) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 TYPE_11__ VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*,struct Vdbe*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_8__*) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;

int FUNC_19(
  sqlite3 *VAR_3,
  int VAR_4,
  int *VAR_5,
  int *VAR_6,
  int VAR_7
){
  int VAR_8 = VAR_1;
  FUNC_12(VAR_3->mutex);
  switch( VAR_4 ){
    case 130: {
      *VAR_5 = VAR_3->lookaside.nOut;
      *VAR_6 = VAR_3->lookaside.mxOut;
      if( VAR_7 ){
        VAR_3->lookaside.mxOut = VAR_3->lookaside.nOut;
      }
      break;
    }

    case 133:
    case 131:
    case 132: {
      FUNC_18( VAR_4==133 );
      FUNC_18( VAR_4==131 );
      FUNC_18( VAR_4==132 );
      FUNC_1( (VAR_4-133)>=0 );
      FUNC_1( (VAR_4-133)<3 );
      *VAR_5 = 0;
      *VAR_6 = VAR_3->lookaside.anStat[VAR_4 - 133];
      if( VAR_7 ){
        VAR_3->lookaside.anStat[VAR_4 - 133] = 0;
      }
      break;
    }






    case 135: {
      int VAR_9 = 0;
      int VAR_10;
      FUNC_2(VAR_3);
      for(VAR_10=0; VAR_10<VAR_3->nDb; VAR_10++){
        Btree *VAR_11 = VAR_3->aDb[VAR_10].pBt;
        if( VAR_11 ){
          Pager *VAR_12 = FUNC_4(VAR_11);
          VAR_9 += FUNC_10(VAR_12);
        }
      }
      FUNC_3(VAR_3);
      *VAR_5 = VAR_9;
      *VAR_6 = 0;
      break;
    }






    case 129: {
      int VAR_13;
      int VAR_14 = 0;

      FUNC_2(VAR_3);
      VAR_3->pnBytesFreed = &VAR_14;
      for(VAR_13=0; VAR_13<VAR_3->nDb; VAR_13++){
        Schema *VAR_15 = VAR_3->aDb[VAR_13].pSchema;
        if( FUNC_0(VAR_15!=0) ){
          HashElem *VAR_16;

          VAR_14 += VAR_2.m.xRoundup(sizeof(HashElem)) * (
              VAR_15->tblHash.count
            + VAR_15->trigHash.count
            + VAR_15->idxHash.count
            + VAR_15->fkeyHash.count
          );
          VAR_14 += FUNC_8(VAR_15->tblHash.ht);
          VAR_14 += FUNC_8(VAR_15->trigHash.ht);
          VAR_14 += FUNC_8(VAR_15->idxHash.ht);
          VAR_14 += FUNC_8(VAR_15->fkeyHash.ht);

          for(VAR_16=FUNC_15(&VAR_15->trigHash); VAR_16; VAR_16=FUNC_16(VAR_16)){
            FUNC_7(VAR_3, (Trigger*)FUNC_14(VAR_16));
          }
          for(VAR_16=FUNC_15(&VAR_15->tblHash); VAR_16; VAR_16=FUNC_16(VAR_16)){
            FUNC_6(VAR_3, (Table *)FUNC_14(VAR_16));
          }
        }
      }
      VAR_3->pnBytesFreed = 0;
      FUNC_3(VAR_3);

      *VAR_6 = 0;
      *VAR_5 = VAR_14;
      break;
    }






    case 128: {
      struct Vdbe *VAR_17;
      int VAR_18 = 0;

      VAR_3->pnBytesFreed = &VAR_18;
      for(VAR_17=VAR_3->pVdbe; VAR_17; VAR_17=VAR_17->pNext){
        FUNC_11(VAR_3, VAR_17);
        FUNC_5(VAR_3, VAR_17);
      }
      VAR_3->pnBytesFreed = 0;

      *VAR_6 = 0;
      *VAR_5 = VAR_18;

      break;
    }






    case 137:
    case 136:
    case 134:{
      int VAR_19;
      int VAR_20 = 0;
      FUNC_1( 136==137 +1 );
      FUNC_1( 134==137 +2 );

      for(VAR_19=0; VAR_19<VAR_3->nDb; VAR_19++){
        if( VAR_3->aDb[VAR_19].pBt ){
          Pager *VAR_21 = FUNC_4(VAR_3->aDb[VAR_19].pBt);
          FUNC_9(VAR_21, VAR_4, VAR_7, &VAR_20);
        }
      }
      *VAR_6 = 0;
      *VAR_5 = VAR_20;
      break;
    }

    default: {
      VAR_8 = VAR_0;
    }
  }
  FUNC_13(VAR_3->mutex);
  return VAR_8;
}
