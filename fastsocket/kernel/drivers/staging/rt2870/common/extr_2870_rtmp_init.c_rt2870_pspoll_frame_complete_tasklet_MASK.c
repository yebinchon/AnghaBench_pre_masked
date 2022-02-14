
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* purbb_t ;
struct TYPE_11__ {int bulkResetPipeid; int * BulkOutLock; void** BulkOutPending; scalar_t__* watchDogTxPendingCnt; } ;
struct TYPE_10__ {void* InUse; void* IRPPending; TYPE_3__* pAd; } ;
struct TYPE_9__ {scalar_t__ status; scalar_t__ context; } ;
typedef TYPE_2__* PTX_CONTEXT ;
typedef TYPE_3__* PRTMP_ADAPTER ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,void*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_12)
{
 PRTMP_ADAPTER VAR_13;
 PTX_CONTEXT VAR_14;
 purbb_t VAR_15;
 NTSTATUS VAR_16;


 VAR_15 = (purbb_t)VAR_12;
 VAR_14 = (PTX_CONTEXT)VAR_15->context;
 VAR_13 = VAR_14->pAd;
 VAR_16 = VAR_15->status;


 VAR_14->IRPPending = VAR_2;
 VAR_14->InUse = VAR_2;
 VAR_13->watchDogTxPendingCnt[0] = 0;

 if (VAR_16 == VAR_7)
 {
  FUNC_1(VAR_13, VAR_2, VAR_5, VAR_3);
 }
 else
 {
  if ((!FUNC_5(VAR_13, VAR_11)) &&
   (!FUNC_5(VAR_13, VAR_9)) &&
   (!FUNC_5(VAR_13, VAR_10)) &&
   (!FUNC_5(VAR_13, VAR_8)))
  {
   FUNC_0(VAR_6, ("Bulk Out PSPoll Failed\n"));
   FUNC_4(VAR_13, VAR_8);
   VAR_13->bulkResetPipeid = (VAR_4 | VAR_0);
   FUNC_6(VAR_13, VAR_1, ((void*)0), 0);
  }
 }

 FUNC_2(&VAR_13->BulkOutLock[0]);
 VAR_13->BulkOutPending[0] = VAR_2;
 FUNC_3(&VAR_13->BulkOutLock[0]);



 FUNC_7(VAR_13);

}
