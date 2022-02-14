
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int localNodeId; } ;
typedef TYPE_1__ WaitGraph ;
struct TYPE_18__ {int isBlockingXactWaiting; scalar_t__ blockingTransactionStamp; scalar_t__ blockingTransactionNum; int blockingNodeId; int blockingPid; scalar_t__ waitingTransactionStamp; scalar_t__ waitingTransactionNum; int waitingNodeId; int waitingPid; } ;
typedef TYPE_2__ WaitEdge ;
struct TYPE_20__ {scalar_t__ timestamp; scalar_t__ transactionNumber; int initiatorNodeIdentifier; } ;
struct TYPE_21__ {TYPE_4__ transactionId; } ;
struct TYPE_19__ {int pid; } ;
typedef int PROCStack ;
typedef TYPE_3__ PGPROC ;
typedef TYPE_4__ DistributedTransactionId ;
typedef TYPE_5__ BackendData ;


 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(WaitGraph *VAR_0, PGPROC *VAR_1, PGPROC *VAR_2,
   PROCStack *VAR_3)
{
 WaitEdge *VAR_4 = FUNC_1(VAR_0);
 BackendData VAR_5;
 BackendData VAR_6;

 FUNC_2(VAR_1, &VAR_5);
 FUNC_2(VAR_2, &VAR_6);

 VAR_4->isBlockingXactWaiting =
  FUNC_4(VAR_2) &&
  !FUNC_5(VAR_2);
 if (VAR_4->isBlockingXactWaiting)
 {
  FUNC_0(VAR_3, VAR_2);
 }

 VAR_4->waitingPid = VAR_1->pid;

 if (FUNC_3(&VAR_5))
 {
  DistributedTransactionId *VAR_7 =
   &VAR_5.transactionId;

  VAR_4->waitingNodeId = VAR_7->initiatorNodeIdentifier;
  VAR_4->waitingTransactionNum = VAR_7->transactionNumber;
  VAR_4->waitingTransactionStamp = VAR_7->timestamp;
 }
 else
 {
  VAR_4->waitingNodeId = VAR_0->localNodeId;
  VAR_4->waitingTransactionNum = 0;
  VAR_4->waitingTransactionStamp = 0;
 }

 VAR_4->blockingPid = VAR_2->pid;

 if (FUNC_3(&VAR_6))
 {
  DistributedTransactionId *VAR_8 =
   &VAR_6.transactionId;

  VAR_4->blockingNodeId = VAR_8->initiatorNodeIdentifier;
  VAR_4->blockingTransactionNum = VAR_8->transactionNumber;
  VAR_4->blockingTransactionStamp = VAR_8->timestamp;
 }
 else
 {
  VAR_4->blockingNodeId = VAR_0->localNodeId;
  VAR_4->blockingTransactionNum = 0;
  VAR_4->blockingTransactionStamp = 0;
 }
}
