
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_4__* purbb_t ;
typedef size_t UCHAR ;
struct TYPE_19__ {size_t BulkOutPipeId; size_t NextBulkOutPosition; scalar_t__ ENextBulkOutPosition; scalar_t__ CurWritePosition; TYPE_3__* TransferBuffer; void* IRPPending; TYPE_5__* pAd; } ;
struct TYPE_14__ {int GoodTransmits; } ;
struct TYPE_18__ {size_t bulkResetPipeid; int BulkOutCompleteOther; int BulkOutComplete; int BulkOutReq; int * BulkOutLock; int * bulkResetReq; TYPE_1__ Counters8023; scalar_t__* watchDogTxPendingCnt; void** BulkOutPending; int BulkOutDataOneSecCount; scalar_t__ OS_Cookie; } ;
struct TYPE_17__ {scalar_t__ status; scalar_t__ context; } ;
struct TYPE_15__ {int * WirelessPacket; } ;
struct TYPE_16__ {TYPE_2__ field; } ;
typedef int * PUCHAR ;
typedef TYPE_5__* PRTMP_ADAPTER ;
typedef scalar_t__ POS_COOKIE ;
typedef TYPE_6__* PHT_TX_CONTEXT ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_5__*,size_t,TYPE_6__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,size_t) ;
 int FUNC_8 (TYPE_5__*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_9)
{
 PRTMP_ADAPTER VAR_10;
 purbb_t VAR_11;
 POS_COOKIE VAR_12;
 PHT_TX_CONTEXT VAR_13;
 UCHAR VAR_14;
 NTSTATUS VAR_15;
 unsigned long VAR_16;


 VAR_11 = (purbb_t)VAR_9;
 VAR_13 = (PHT_TX_CONTEXT)VAR_11->context;
 VAR_10 = VAR_13->pAd;
 VAR_12 = (POS_COOKIE) VAR_10->OS_Cookie;
 VAR_15 = VAR_11->status;


 VAR_14 = VAR_13->BulkOutPipeId;
 VAR_10->BulkOutDataOneSecCount++;




 FUNC_2(&VAR_10->BulkOutLock[VAR_14], VAR_16);
 VAR_10->BulkOutPending[VAR_14] = VAR_0;
 VAR_13->IRPPending = VAR_0;
 VAR_10->watchDogTxPendingCnt[VAR_14] = 0;

 if (VAR_15 == VAR_2)
 {
  VAR_10->BulkOutComplete++;

  FUNC_3(&VAR_10->BulkOutLock[VAR_14], VAR_16);

  VAR_10->Counters8023.GoodTransmits++;

  FUNC_1(VAR_10, VAR_14, VAR_13);



 }
 else
 {
  PUCHAR VAR_17;

  VAR_10->BulkOutCompleteOther++;

  VAR_17 = &VAR_13->TransferBuffer->field.WirelessPacket[VAR_13->NextBulkOutPosition];

  if (!FUNC_5(VAR_10, (VAR_6 |
         VAR_4 |
         VAR_5 |
         VAR_3)))
  {
   FUNC_4(VAR_10, VAR_3);
   VAR_10->bulkResetPipeid = VAR_14;
   VAR_10->bulkResetReq[VAR_14] = VAR_10->BulkOutReq;
  }
  FUNC_3(&VAR_10->BulkOutLock[VAR_14], VAR_16);

  FUNC_0(VAR_1, ("BulkOutDataPacket failed: ReasonCode=%d!\n", VAR_15));
  FUNC_0(VAR_1, ("\t>>BulkOut Req=0x%lx, Complete=0x%lx, Other=0x%lx\n", VAR_10->BulkOutReq, VAR_10->BulkOutComplete, VAR_10->BulkOutCompleteOther));
  FUNC_0(VAR_1, ("\t>>BulkOut Header:%x %x %x %x %x %x %x %x\n", VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3], VAR_17[4], VAR_17[5], VAR_17[6], VAR_17[7]));


 }






 if ((VAR_13->ENextBulkOutPosition != VAR_13->CurWritePosition) &&
  (VAR_13->ENextBulkOutPosition != (VAR_13->CurWritePosition+8)) &&
  !FUNC_8(VAR_10, (VAR_7 << VAR_14)))
 {

  FUNC_7(VAR_10, (VAR_8 << VAR_14));
 }




 FUNC_6(VAR_10);
}
