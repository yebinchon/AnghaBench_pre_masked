
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* purbb_t ;
struct TYPE_12__ {int NextRxBulkInReadIndex; int NextRxBulkInIndex; int BulkInLock; int BulkInCompleteFail; scalar_t__ NextRxBulkInPosition; int BulkInComplete; int PendingRx; } ;
struct TYPE_11__ {scalar_t__ InUse; scalar_t__ IRPPending; TYPE_1__* pUrb; void* Readable; scalar_t__ BulkInOffset; TYPE_4__* pAd; } ;
struct TYPE_10__ {scalar_t__ status; scalar_t__ actual_length; scalar_t__ context; } ;
struct TYPE_9__ {int actual_length; } ;
typedef TYPE_3__* PRX_CONTEXT ;
typedef TYPE_4__* PRTMP_ADAPTER ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_10)
{
 purbb_t VAR_11;
 PRX_CONTEXT VAR_12;
 PRTMP_ADAPTER VAR_13;
 NTSTATUS VAR_14;
 unsigned int VAR_15;

 VAR_11 = (purbb_t)VAR_10;
 VAR_12 = (PRX_CONTEXT)VAR_11->context;
 VAR_13 = VAR_12->pAd;
 VAR_14 = VAR_11->status;


 FUNC_3(&VAR_13->BulkInLock, VAR_15);
 VAR_12->InUse = VAR_1;
 VAR_12->IRPPending = VAR_1;
 VAR_12->BulkInOffset += VAR_11->actual_length;

 VAR_13->PendingRx--;

 if (VAR_14 == VAR_5)
 {
  VAR_13->BulkInComplete++;
  VAR_13->NextRxBulkInPosition = 0;
  if (VAR_12->BulkInOffset)
  {
   VAR_12->Readable = VAR_4;
   FUNC_2(VAR_13->NextRxBulkInIndex, VAR_3);
  }
  FUNC_4(&VAR_13->BulkInLock, VAR_15);
 }
 else
 {
  VAR_13->BulkInCompleteFail++;

  VAR_12->Readable = VAR_1;
  FUNC_4(&VAR_13->BulkInLock, VAR_15);


  if ((!FUNC_6(VAR_13, (VAR_9 |
         VAR_6 |
         VAR_7 |
         VAR_8))))
  {

   FUNC_1(VAR_2, ("Bulk In Failed. Status=%d, BIIdx=0x%x, BIRIdx=0x%x, actual_length= 0x%x\n",
       VAR_14, VAR_13->NextRxBulkInIndex, VAR_13->NextRxBulkInReadIndex, VAR_12->pUrb->actual_length));

   FUNC_5(VAR_13, VAR_6);
   FUNC_8(VAR_13, VAR_0, ((void*)0), 0);
  }
 }

 FUNC_0((VAR_12->InUse == VAR_12->IRPPending));

 FUNC_7(VAR_13);

 return;

}
