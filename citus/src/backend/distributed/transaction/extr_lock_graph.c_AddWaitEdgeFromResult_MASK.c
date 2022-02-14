
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WaitGraph ;
struct TYPE_3__ {int isBlockingXactWaiting; void* blockingTransactionStamp; void* blockingTransactionNum; void* blockingNodeId; void* blockingPid; void* waitingTransactionStamp; void* waitingTransactionNum; void* waitingNodeId; void* waitingPid; } ;
typedef TYPE_1__ WaitEdge ;
typedef int PGresult ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int *,int,int) ;
 void* FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(WaitGraph *VAR_0, PGresult *VAR_1, int VAR_2)
{
 WaitEdge *VAR_3 = FUNC_0(VAR_0);

 VAR_3->waitingPid = FUNC_2(VAR_1, VAR_2, 0);
 VAR_3->waitingNodeId = FUNC_2(VAR_1, VAR_2, 1);
 VAR_3->waitingTransactionNum = FUNC_2(VAR_1, VAR_2, 2);
 VAR_3->waitingTransactionStamp = FUNC_3(VAR_1, VAR_2, 3);
 VAR_3->blockingPid = FUNC_2(VAR_1, VAR_2, 4);
 VAR_3->blockingNodeId = FUNC_2(VAR_1, VAR_2, 5);
 VAR_3->blockingTransactionNum = FUNC_2(VAR_1, VAR_2, 6);
 VAR_3->blockingTransactionStamp = FUNC_3(VAR_1, VAR_2, 7);
 VAR_3->isBlockingXactWaiting = FUNC_1(VAR_1, VAR_2, 8);
}
