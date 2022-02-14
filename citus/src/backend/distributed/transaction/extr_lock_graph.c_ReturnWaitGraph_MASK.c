
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_4__ {size_t edgeCount; TYPE_2__* edges; } ;
typedef TYPE_1__ WaitGraph ;
struct TYPE_5__ {scalar_t__ waitingTransactionNum; scalar_t__ blockingTransactionNum; int isBlockingXactWaiting; int blockingTransactionStamp; int blockingNodeId; int blockingPid; int waitingTransactionStamp; int waitingNodeId; int waitingPid; } ;
typedef TYPE_2__ WaitEdge ;
typedef int Tuplestorestate ;
typedef int TupleDesc ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_8(WaitGraph *VAR_0, FunctionCallInfo VAR_1)
{
 size_t VAR_2 = 0;
 TupleDesc VAR_3;
 Tuplestorestate *VAR_4 = FUNC_3(VAR_1, &VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_0->edgeCount; VAR_2++)
 {
  Datum VAR_5[9];
  bool VAR_6[9];
  WaitEdge *VAR_7 = &VAR_0->edges[VAR_2];

  FUNC_5(VAR_5, 0, sizeof(VAR_5));
  FUNC_5(VAR_6, 0, sizeof(VAR_6));

  VAR_5[0] = FUNC_1(VAR_7->waitingPid);
  VAR_5[1] = FUNC_1(VAR_7->waitingNodeId);
  if (VAR_7->waitingTransactionNum != 0)
  {
   VAR_5[2] = FUNC_2(VAR_7->waitingTransactionNum);
   VAR_5[3] = FUNC_4(VAR_7->waitingTransactionStamp);
  }
  else
  {
   VAR_6[2] = 1;
   VAR_6[3] = 1;
  }

  VAR_5[4] = FUNC_1(VAR_7->blockingPid);
  VAR_5[5] = FUNC_1(VAR_7->blockingNodeId);
  if (VAR_7->blockingTransactionNum != 0)
  {
   VAR_5[6] = FUNC_2(VAR_7->blockingTransactionNum);
   VAR_5[7] = FUNC_4(VAR_7->blockingTransactionStamp);
  }
  else
  {
   VAR_6[6] = 1;
   VAR_6[7] = 1;
  }
  VAR_5[8] = FUNC_0(VAR_7->isBlockingXactWaiting);

  FUNC_7(VAR_4, VAR_3, VAR_5, VAR_6);
 }


 FUNC_6(VAR_4);
}
