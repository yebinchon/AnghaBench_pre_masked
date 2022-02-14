
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dmacHw_TRANSACTION_WIDTH_e ;
struct TYPE_8__ {int hi; int lo; } ;
struct TYPE_9__ {int sar; int dar; scalar_t__ llp; TYPE_1__ ctl; scalar_t__ devCtl; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_10__ {int num; TYPE_2__* pHead; TYPE_2__* pTail; TYPE_2__* pEnd; TYPE_2__* pProg; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;
struct TYPE_11__ {int dstMaxTransactionWidth; int srcMaxTransactionWidth; int srcGatherWidth; int dstScatterWidth; int maxDataPerBlock; int transferType; scalar_t__ flowControler; int srcUpdate; int dstUpdate; int srcMaxBurstWidth; int dstMaxBurstWidth; int srcMasterInterface; int dstMasterInterface; int dstScatterJump; int srcGatherJump; } ;
typedef TYPE_4__ dmacHw_CONFIG_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
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





int FUNC_6(dmacHw_CONFIG_t *VAR_15,
        void *VAR_16,
        void *VAR_17,
        void *VAR_18,
        size_t VAR_19
    ) {
 dmacHw_TRANSACTION_WIDTH_e VAR_20;
 dmacHw_TRANSACTION_WIDTH_e VAR_21;
 dmacHw_DESC_RING_t *VAR_22 = FUNC_3(VAR_16);
 dmacHw_DESC_t *VAR_23;
 dmacHw_DESC_t *VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = 0;
 int VAR_31 = 0;
 uint32_t VAR_32 = VAR_5;

 VAR_30 = FUNC_5(VAR_15->dstMaxTransactionWidth);
 VAR_31 = FUNC_5(VAR_15->srcMaxTransactionWidth);


 if ((VAR_17 == ((void*)0)) || (VAR_18 == ((void*)0)) || (VAR_19 == 0)) {

  return -1;
 }


 if ((VAR_15->srcGatherWidth % VAR_31)
     || (VAR_15->dstScatterWidth % VAR_30)) {
  return -2;
 }
 VAR_20 = VAR_15->dstMaxTransactionWidth;
 while (FUNC_0(VAR_30) & (uint32_t) VAR_18) {
  VAR_20 = FUNC_4(VAR_20);
  VAR_30 = FUNC_5(VAR_20);
 }


 VAR_21 = VAR_15->srcMaxTransactionWidth;
 while (FUNC_0(VAR_31) & (uint32_t) VAR_17) {
  VAR_21 = FUNC_4(VAR_21);
  VAR_31 = FUNC_5(VAR_21);
 }


 if (VAR_15->maxDataPerBlock
     && ((VAR_15->maxDataPerBlock / VAR_31) <
  VAR_5)) {
  VAR_32 = VAR_15->maxDataPerBlock / VAR_31;
 }


 VAR_25 = VAR_19 / VAR_31;

 if (VAR_25 && (VAR_30 > VAR_31)) {
  VAR_27 = VAR_19 % VAR_30;

  VAR_25 = VAR_25 - (VAR_27 / VAR_31);
 } else {
  VAR_27 = VAR_19 % VAR_31;
 }

 if (VAR_27) {
  VAR_28++;
 }

 if (VAR_25) {
  VAR_28 += ((VAR_25 - 1) / VAR_32) + 1;
 }


 VAR_24 = VAR_22->pHead;
 for (VAR_29 = 0; (VAR_28 <= VAR_22->num) && (VAR_29 < VAR_28);
      VAR_29++) {
  if ((VAR_24->ctl.hi & VAR_0) == 0) {

   return -3;
  }
  VAR_24 = (dmacHw_DESC_t *) VAR_24->llp;
 }


 VAR_23 = VAR_24 = VAR_22->pHead;

 while (VAR_29) {

  VAR_24->ctl.lo = 0;

  if (VAR_15->srcGatherWidth) {
   VAR_24->ctl.lo |= VAR_11;
  }

  if (VAR_15->dstScatterWidth) {
   VAR_24->ctl.lo |= VAR_7;
  }

  VAR_24->sar = (uint32_t) VAR_17;
  VAR_24->dar = (uint32_t) VAR_18;

  if (VAR_24 == VAR_22->pHead) {
   VAR_24->devCtl = VAR_4;
  } else {
   VAR_24->devCtl = 0;
  }

  VAR_26 = VAR_25;


  if (VAR_29 == 1) {

   VAR_24->ctl.lo &=
       ~(VAR_9 |
         VAR_10);

   if (VAR_27) {

    switch (VAR_15->transferType) {
    case 129:
     VAR_20 =
         VAR_2;
     VAR_26 =
         (VAR_27 / VAR_31) +
         ((VAR_27 % VAR_31) ? 1 : 0);
     break;
    case 130:
     VAR_21 =
         VAR_14;
     VAR_26 = VAR_27;
     break;
    case 131:
     VAR_21 =
         VAR_14;
     VAR_20 =
         VAR_2;
     VAR_26 = VAR_27;
     break;
    case 128:

     break;
    }
   } else {
    VAR_25 -= VAR_26;
   }
  } else {
   if (VAR_25 / VAR_32) {
    VAR_26 = VAR_32;
   }

   VAR_25 -= VAR_26;
  }

  FUNC_1(VAR_26 > 0);

  if (VAR_15->flowControler == VAR_3) {
   VAR_24->ctl.lo |= VAR_15->transferType |
       VAR_15->srcUpdate |
       VAR_15->dstUpdate |
       VAR_21 |
       VAR_20 |
       VAR_15->srcMaxBurstWidth |
       VAR_15->dstMaxBurstWidth |
       VAR_15->srcMasterInterface |
       VAR_15->dstMasterInterface | VAR_8;
  } else {
   uint32_t VAR_33 = 0;
   switch (VAR_15->transferType) {
   case 129:
    VAR_33 = VAR_13;
    break;
   case 130:
    VAR_33 = VAR_12;
    break;
   default:
    FUNC_1(0);
   }
   VAR_24->ctl.lo |= VAR_33 |
       VAR_15->srcUpdate |
       VAR_15->dstUpdate |
       VAR_21 |
       VAR_20 |
       VAR_15->srcMaxBurstWidth |
       VAR_15->dstMaxBurstWidth |
       VAR_15->srcMasterInterface |
       VAR_15->dstMasterInterface | VAR_8;
  }


  VAR_24->ctl.hi = VAR_26 & VAR_6;

  if (VAR_29 > 1) {

   VAR_24 = (dmacHw_DESC_t *) VAR_24->llp;


   switch (VAR_15->transferType) {
   case 129:
    if (VAR_15->dstScatterWidth) {
     VAR_18 =
         (char *)VAR_18 +
         VAR_26 * VAR_31 +
         (((VAR_26 * VAR_31) /
           VAR_15->dstScatterWidth) *
          VAR_15->dstScatterJump);
    } else {
     VAR_18 =
         (char *)VAR_18 +
         VAR_26 * VAR_31;
    }
    break;
   case 130:
    if (VAR_15->srcGatherWidth) {
     VAR_17 =
         (char *)VAR_18 +
         VAR_26 * VAR_31 +
         (((VAR_26 * VAR_31) /
           VAR_15->srcGatherWidth) *
          VAR_15->srcGatherJump);
    } else {
     VAR_17 =
         (char *)VAR_17 +
         VAR_26 * VAR_31;
    }
    break;
   case 131:
    if (VAR_15->dstScatterWidth) {
     VAR_18 =
         (char *)VAR_18 +
         VAR_26 * VAR_31 +
         (((VAR_26 * VAR_31) /
           VAR_15->dstScatterWidth) *
          VAR_15->dstScatterJump);
    } else {
     VAR_18 =
         (char *)VAR_18 +
         VAR_26 * VAR_31;
    }

    if (VAR_15->srcGatherWidth) {
     VAR_17 =
         (char *)VAR_18 +
         VAR_26 * VAR_31 +
         (((VAR_26 * VAR_31) /
           VAR_15->srcGatherWidth) *
          VAR_15->srcGatherJump);
    } else {
     VAR_17 =
         (char *)VAR_17 +
         VAR_26 * VAR_31;
    }
    break;
   case 128:

    break;
   default:
    FUNC_1(0);
   }
  } else {

   FUNC_1(VAR_25 == 0);
  }
  VAR_29--;
 }


 if (VAR_22->pProg == VAR_1) {
  VAR_22->pProg = VAR_23;
 }

 VAR_22->pEnd = VAR_24;

 VAR_22->pHead = (dmacHw_DESC_t *) VAR_24->llp;



 if (!FUNC_2(VAR_15->transferType)) {
  VAR_22->pTail = VAR_22->pHead;
 }
 return 0;
}
