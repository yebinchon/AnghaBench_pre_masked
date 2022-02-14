
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_10__ {int hi; scalar_t__ lo; } ;
struct TYPE_11__ {TYPE_1__ ctl; int devCtl; scalar_t__ dar; scalar_t__ sar; scalar_t__ llp; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_12__ {int num; scalar_t__ virt2PhyOffset; TYPE_2__* pEnd; TYPE_2__* pHead; TYPE_2__* pTail; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;
struct TYPE_13__ {scalar_t__ transferType; scalar_t__ srcUpdate; scalar_t__ dstUpdate; scalar_t__ srcMaxTransactionWidth; scalar_t__ dstMaxTransactionWidth; scalar_t__ srcMasterInterface; scalar_t__ dstMasterInterface; scalar_t__ srcMaxBurstWidth; scalar_t__ dstMaxBurstWidth; } ;
typedef TYPE_4__ dmacHw_CONFIG_t ;
struct TYPE_14__ {int descUpdated; int varDataStarted; int channel; int module; } ;
typedef TYPE_5__ dmacHw_CBLK_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (void*) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (int) ;

int FUNC_6(dmacHw_HANDLE_t VAR_8,
         dmacHw_CONFIG_t *VAR_9,
         void *VAR_10,
         uint32_t VAR_11,
         void *(*VAR_12) (int VAR_13),
         int VAR_14,
         int VAR_15
    ) {
 dmacHw_CBLK_t *VAR_16 = FUNC_2(VAR_8);
 dmacHw_DESC_t *VAR_17 = ((void*)0);
 dmacHw_DESC_t *VAR_18 = ((void*)0);
 dmacHw_DESC_RING_t *VAR_19 = FUNC_1(VAR_10);
 uint32_t VAR_20;
 uint32_t VAR_21;
 int VAR_22;

 FUNC_0(VAR_9->transferType ==
        VAR_6);

 if (VAR_15 > VAR_19->num) {
  return -1;
 }

 VAR_18 = VAR_19->pEnd;
 VAR_17 = VAR_19->pHead;

 VAR_21 = VAR_9->srcUpdate |
     VAR_9->dstUpdate |
     VAR_9->srcMaxTransactionWidth |
     VAR_9->dstMaxTransactionWidth |
     VAR_9->srcMasterInterface |
     VAR_9->dstMasterInterface |
     VAR_9->srcMaxBurstWidth |
     VAR_9->dstMaxBurstWidth |
     VAR_5 |
     VAR_3 |
     VAR_4 | VAR_2;

 for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {

  if (((VAR_19->pHead->ctl.hi & VAR_0) == 0) ||
      ((dmacHw_DESC_t *) VAR_19->pHead->llp == VAR_19->pTail)
      ) {

   break;
  }

  VAR_19->pHead->sar = VAR_11;
  if (VAR_12) {

   VAR_20 = (uint32_t) (*VAR_12) (VAR_14);

   if (VAR_20 == 0) {
    if (VAR_22 == 0) {

     return -1;
    }
    break;
   }

   VAR_19->pHead->dar = VAR_20;
  }

  VAR_19->pHead->ctl.lo = VAR_21;

  VAR_19->pHead->devCtl = VAR_1;

  VAR_19->pHead->ctl.hi = 0;

  VAR_19->pEnd = VAR_19->pHead;

  FUNC_3(VAR_19, VAR_7);
 }


 VAR_19->pEnd->ctl.lo &=
     ~(VAR_3 | VAR_4);

 if (VAR_18 != VAR_17) {
  VAR_18->ctl.lo |=
      VAR_3 | VAR_4;
 }

 VAR_16->descUpdated = 1;
 if (!VAR_16->varDataStarted) {

  FUNC_4(VAR_16->module, VAR_16->channel,
          (uint32_t) VAR_17 - VAR_19->virt2PhyOffset);

  VAR_16->varDataStarted = 1;
 }

 return VAR_22;
}
