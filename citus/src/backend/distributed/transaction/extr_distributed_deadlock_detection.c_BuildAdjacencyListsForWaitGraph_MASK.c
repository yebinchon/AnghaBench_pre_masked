
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
struct TYPE_12__ {int edgeCount; TYPE_2__* edges; } ;
typedef TYPE_1__ WaitGraph ;
struct TYPE_13__ {int blockingTransactionStamp; int blockingTransactionNum; int blockingNodeId; int waitingTransactionStamp; int waitingTransactionNum; int waitingNodeId; } ;
typedef TYPE_2__ WaitEdge ;
struct TYPE_14__ {int waitsFor; } ;
typedef TYPE_3__ TransactionNode ;
struct TYPE_16__ {int member_1; int member_3; int member_2; int member_0; } ;
struct TYPE_15__ {int keysize; int entrysize; int hcxt; int match; int hash; } ;
typedef int HTAB ;
typedef TYPE_4__ HASHCTL ;
typedef TYPE_5__ DistributedTransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (char*,int,TYPE_4__*,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

extern HTAB *
FUNC_4(WaitGraph *VAR_7)
{
 HASHCTL VAR_8;
 uint32 VAR_9 = 0;
 HTAB *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 int VAR_12 = VAR_7->edgeCount;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.keysize = sizeof(DistributedTransactionId);
 VAR_8.entrysize = sizeof(TransactionNode);
 VAR_8.hash = VAR_2;
 VAR_8.match = VAR_1;
 VAR_8.hcxt = VAR_0;
 VAR_9 = (VAR_5 | VAR_6 | VAR_4 | VAR_3);

 VAR_10 = FUNC_1("distributed deadlock detection", 64, &VAR_8, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
 {
  WaitEdge *VAR_13 = &VAR_7->edges[VAR_11];
  TransactionNode *VAR_14 = ((void*)0);
  TransactionNode *VAR_15 = ((void*)0);
  bool VAR_16 = 0;

  DistributedTransactionId VAR_17 = {
   VAR_13->waitingNodeId,
   VAR_16,
   VAR_13->waitingTransactionNum,
   VAR_13->waitingTransactionStamp
  };

  DistributedTransactionId VAR_18 = {
   VAR_13->blockingNodeId,
   VAR_16,
   VAR_13->blockingTransactionNum,
   VAR_13->blockingTransactionStamp
  };

  VAR_14 =
   FUNC_0(VAR_10, &VAR_17);
  VAR_15 =
   FUNC_0(VAR_10, &VAR_18);

  VAR_14->waitsFor = FUNC_2(VAR_14->waitsFor,
              VAR_15);
 }

 return VAR_10;
}
