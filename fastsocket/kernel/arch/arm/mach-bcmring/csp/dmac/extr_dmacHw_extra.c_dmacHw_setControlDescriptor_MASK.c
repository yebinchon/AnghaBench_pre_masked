
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_7__* pHead; TYPE_7__* pTail; TYPE_7__* pEnd; TYPE_7__* pProg; } ;
typedef TYPE_2__ dmacHw_DESC_RING_t ;
struct TYPE_10__ {scalar_t__ flowControler; scalar_t__ transferType; scalar_t__ dstMaxTransactionWidth; scalar_t__ srcMasterInterface; scalar_t__ dstMasterInterface; } ;
typedef TYPE_3__ dmacHw_CONFIG_t ;
struct TYPE_8__ {int hi; scalar_t__ lo; } ;
struct TYPE_11__ {TYPE_1__ ctl; scalar_t__ dar; scalar_t__ devCtl; scalar_t__ sar; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;


 int VAR_12 ;

int FUNC_4(dmacHw_CONFIG_t *VAR_13,
    void *VAR_14,
    uint32_t VAR_15,
    uint32_t VAR_16
    ) {
 dmacHw_DESC_RING_t *VAR_17 = FUNC_2(VAR_14);

 if (VAR_15 == 0) {
  return -1;
 }


 if ((VAR_17->pHead->ctl.hi & VAR_0) == 0) {
  return -1;
 }

 VAR_17->pHead->devCtl = VAR_16;

 VAR_17->pHead->sar = (uint32_t) &VAR_17->pHead->devCtl;
 VAR_17->pHead->dar = VAR_15;

 if (VAR_13->flowControler == VAR_4) {
  VAR_17->pHead->ctl.lo = VAR_13->transferType |
      VAR_9 |
      VAR_2 |
      VAR_11 |
      VAR_13->dstMaxTransactionWidth |
      VAR_10 |
      VAR_3 |
      VAR_13->srcMasterInterface |
      VAR_13->dstMasterInterface | VAR_6;
 } else {
  uint32_t VAR_18 = 0;
  switch (VAR_13->transferType) {
  case 128:
   VAR_18 = VAR_8;
   break;
  case 129:
   VAR_18 = VAR_7;
   break;
  default:
   FUNC_0(0);
  }
  VAR_17->pHead->ctl.lo = VAR_18 |
      VAR_9 |
      VAR_2 |
      VAR_11 |
      VAR_13->dstMaxTransactionWidth |
      VAR_10 |
      VAR_3 |
      VAR_13->srcMasterInterface |
      VAR_13->dstMasterInterface |
      VAR_13->flowControler | VAR_6;
 }


 VAR_17->pHead->ctl.hi = VAR_5 & 1;


 if (VAR_17->pProg == VAR_1) {
  VAR_17->pProg = VAR_17->pHead;
 }
 VAR_17->pEnd = VAR_17->pHead;


 FUNC_3(VAR_17, VAR_12);


 if (!FUNC_1(VAR_13->transferType)) {
  VAR_17->pTail = VAR_17->pHead;
 }
 return 0;
}
