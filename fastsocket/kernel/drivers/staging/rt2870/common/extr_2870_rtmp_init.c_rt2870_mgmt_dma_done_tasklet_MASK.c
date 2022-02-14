
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* purbb_t ;
struct TYPE_13__ {int TxDmaIdx; scalar_t__ TxSwFreeIdx; TYPE_1__* Cell; } ;
struct TYPE_16__ {size_t bulkResetPipeid; TYPE_2__ MgmtRing; int MLMEBulkOutLock; int * BulkOutLock; void** BulkOutPending; } ;
struct TYPE_15__ {int SelfIdx; scalar_t__ BulkOutSize; void* bWaitingBulkOut; void* InUse; void* IRPPending; TYPE_5__* pAd; } ;
struct TYPE_14__ {scalar_t__ status; scalar_t__ context; } ;
struct TYPE_12__ {int * pNdisPacket; } ;
typedef TYPE_4__* PTX_CONTEXT ;
typedef TYPE_5__* PRTMP_ADAPTER ;
typedef int * PNDIS_PACKET ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_2 ;
 int FUNC_2 (int,scalar_t__) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int ,int *,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_12)
{
 PRTMP_ADAPTER VAR_13;
 PTX_CONTEXT VAR_14;
 int VAR_15;
 PNDIS_PACKET VAR_16;
 purbb_t VAR_17;
 NTSTATUS VAR_18;
 unsigned long VAR_19;


 VAR_17 = (purbb_t)VAR_12;
 VAR_14 = (PTX_CONTEXT)VAR_17->context;
 VAR_13 = VAR_14->pAd;
 VAR_18 = VAR_17->status;
 VAR_15 = VAR_14->SelfIdx;

 FUNC_0((VAR_13->MgmtRing.TxDmaIdx == VAR_15));

 FUNC_4(&VAR_13->BulkOutLock[VAR_3], VAR_19);


 if (VAR_18 != VAR_6)
 {

  if ((!FUNC_7(VAR_13, VAR_10)) &&
   (!FUNC_7(VAR_13, VAR_8)) &&
   (!FUNC_7(VAR_13, VAR_9)) &&
   (!FUNC_7(VAR_13, VAR_7)))
  {
   FUNC_1(VAR_5, ("Bulk Out MLME Failed, Status=%d!\n", VAR_18));

   FUNC_6(VAR_13, VAR_7);
   VAR_13->bulkResetPipeid = (VAR_3 | VAR_0);
  }
 }

 VAR_13->BulkOutPending[VAR_3] = VAR_2;
 FUNC_5(&VAR_13->BulkOutLock[VAR_3], VAR_19);

 FUNC_4(&VAR_13->MLMEBulkOutLock, VAR_19);

 VAR_14->IRPPending = VAR_2;
 VAR_14->InUse = VAR_2;
 VAR_14->bWaitingBulkOut = VAR_2;
 VAR_14->BulkOutSize = 0;

 VAR_16 = VAR_13->MgmtRing.Cell[VAR_15].pNdisPacket;
 VAR_13->MgmtRing.Cell[VAR_15].pNdisPacket = ((void*)0);


 FUNC_2(VAR_13->MgmtRing.TxDmaIdx, VAR_4);
 VAR_13->MgmtRing.TxSwFreeIdx++;
 FUNC_5(&VAR_13->MLMEBulkOutLock, VAR_19);


 if (VAR_16)
  FUNC_3(VAR_13, VAR_16);

 if ((FUNC_7(VAR_13, (VAR_10 |
        VAR_8 |
        VAR_9))))
 {

 }
 else
 {
  if (FUNC_7(VAR_13, VAR_7) &&
   ((VAR_13->bulkResetPipeid & VAR_0) == VAR_0))
  {
   FUNC_8(VAR_13, VAR_1, ((void*)0), 0);
  }
  else
  {



   if (VAR_13->MgmtRing.TxSwFreeIdx < VAR_4 )
   {
    FUNC_10(VAR_13, VAR_11);
   }
    FUNC_9(VAR_13);
   }
  }

}
