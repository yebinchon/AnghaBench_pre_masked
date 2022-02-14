
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_22__ {TYPE_1__* db; int * pVdbe; } ;
struct TYPE_21__ {int iLimit; TYPE_3__* pEList; } ;
struct TYPE_20__ {int iSdst; int nSdst; int eDest; int iSDParm; char affSdst; } ;
struct TYPE_19__ {TYPE_2__* a; } ;
struct TYPE_18__ {int pExpr; } ;
struct TYPE_17__ {scalar_t__ mallocFailed; } ;
typedef TYPE_4__ SelectDest ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef int KeyInfo ;


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




 int const VAR_14 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_5__*,int) ;
 char FUNC_2 (int ,char) ;
 int FUNC_3 (TYPE_6__*,int,int) ;
 int FUNC_4 (TYPE_6__*,int,int,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int ,int,int,int,char*,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(
  Parse *VAR_15,
  Select *VAR_16,
  SelectDest *VAR_17,
  SelectDest *VAR_18,
  int VAR_19,
  int VAR_20,
  KeyInfo *VAR_21,
  int VAR_22,
  int VAR_23
){
  Vdbe *VAR_24 = VAR_15->pVdbe;
  int VAR_25;
  int VAR_26;

  VAR_26 = FUNC_13(VAR_24);
  VAR_25 = FUNC_15(VAR_24);



  if( VAR_20 ){
    int VAR_27, VAR_28;
    VAR_27 = FUNC_8(VAR_24, VAR_4, VAR_20);
    VAR_28 = FUNC_11(VAR_24, VAR_1, VAR_17->iSdst, VAR_20+1, VAR_17->nSdst,
                              (char*)VAR_21, VAR_22);
    FUNC_10(VAR_24, VAR_8, VAR_28+2, VAR_25, VAR_28+2);
    FUNC_14(VAR_24, VAR_27);
    FUNC_10(VAR_24, VAR_2, VAR_17->iSdst, VAR_20+1, VAR_17->nSdst-1);
    FUNC_9(VAR_24, VAR_7, 1, VAR_20);
  }
  if( VAR_15->db->mallocFailed ) return 0;



  FUNC_1(VAR_24, VAR_16, VAR_25);

  switch( VAR_18->eDest ){


    case 128:
    case 132: {
      int VAR_29 = FUNC_6(VAR_15);
      int VAR_30 = FUNC_6(VAR_15);
      FUNC_17( VAR_18->eDest==128 );
      FUNC_17( VAR_18->eDest==132 );
      FUNC_10(VAR_24, VAR_9, VAR_17->iSdst, VAR_17->nSdst, VAR_29);
      FUNC_9(VAR_24, VAR_10, VAR_18->iSDParm, VAR_30);
      FUNC_10(VAR_24, VAR_6, VAR_18->iSDParm, VAR_29, VAR_30);
      FUNC_12(VAR_24, VAR_0);
      FUNC_7(VAR_15, VAR_30);
      FUNC_7(VAR_15, VAR_29);
      break;
    }






    case 129: {
      int VAR_31;
      FUNC_0( VAR_17->nSdst==1 );
      VAR_18->affSdst =
         FUNC_2(VAR_16->pEList->a[0].pExpr, VAR_18->affSdst);
      VAR_31 = FUNC_6(VAR_15);
      FUNC_11(VAR_24, VAR_9, VAR_17->iSdst, 1, VAR_31, &VAR_18->affSdst,1);
      FUNC_3(VAR_15, VAR_17->iSdst, 1);
      FUNC_9(VAR_24, VAR_3, VAR_18->iSDParm, VAR_31);
      FUNC_7(VAR_15, VAR_31);
      break;
    }
    case 130: {
      FUNC_0( VAR_17->nSdst==1 );
      FUNC_4(VAR_15, VAR_17->iSdst, VAR_18->iSDParm, 1);

      break;
    }





    case 133: {
      if( VAR_18->iSdst==0 ){
        VAR_18->iSdst = FUNC_5(VAR_15, VAR_17->nSdst);
        VAR_18->nSdst = VAR_17->nSdst;
      }
      FUNC_4(VAR_15, VAR_17->iSdst, VAR_18->iSdst, VAR_18->nSdst);
      FUNC_8(VAR_24, VAR_13, VAR_18->iSDParm);
      break;
    }
    default: {
      FUNC_0( VAR_18->eDest==VAR_14 );
      FUNC_9(VAR_24, VAR_11, VAR_17->iSdst, VAR_17->nSdst);
      FUNC_3(VAR_15, VAR_17->iSdst, VAR_17->nSdst);
      break;
    }
  }



  if( VAR_16->iLimit ){
    FUNC_10(VAR_24, VAR_5, VAR_16->iLimit, VAR_23, -1);
  }



  FUNC_16(VAR_24, VAR_25);
  FUNC_8(VAR_24, VAR_12, VAR_19);

  return VAR_26;
}
