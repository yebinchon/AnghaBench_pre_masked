
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {TYPE_3__* currentTask; TYPE_6__* connection; TYPE_2__* workerPool; } ;
typedef TYPE_1__ WorkerSession ;
struct TYPE_22__ {int idleConnectionCount; TYPE_7__* distributedExecution; } ;
typedef TYPE_2__ WorkerPool ;
struct TYPE_23__ {TYPE_4__* shardCommandExecution; } ;
typedef TYPE_3__ TaskPlacementExecution ;
struct TYPE_27__ {int isTransaction; } ;
struct TYPE_25__ {int transactionState; } ;
struct TYPE_26__ {int connectionState; int pgConn; TYPE_5__ remoteTransaction; } ;
struct TYPE_24__ {int expectResults; int gotResults; } ;
typedef TYPE_4__ ShardCommandExecution ;
typedef int RemoteTransactionState ;
typedef TYPE_5__ RemoteTransaction ;
typedef int PGresult ;
typedef TYPE_6__ MultiConnection ;
typedef TYPE_7__ DistributedExecution ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_8 (TYPE_1__*) ;





 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_6__*,int *,int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_14(WorkerSession *VAR_4)
{
 WorkerPool *VAR_5 = VAR_4->workerPool;
 DistributedExecution *VAR_6 = VAR_5->distributedExecution;

 MultiConnection *VAR_7 = VAR_4->connection;
 RemoteTransaction *VAR_8 = &(VAR_7->remoteTransaction);
 RemoteTransactionState VAR_9;

 do {
  VAR_9 = VAR_8->transactionState;

  if (!FUNC_2(VAR_4))
  {

   break;
  }

  switch (VAR_9)
  {
   case 131:
   {
    if (VAR_6->isTransaction)
    {

     FUNC_0(VAR_4);


     FUNC_12(VAR_7);

     VAR_8->transactionState = 132;
    }
    else
    {
     TaskPlacementExecution *VAR_10 = ((void*)0);
     bool VAR_11 = 0;

     VAR_10 = FUNC_8(VAR_4);
     if (VAR_10 == ((void*)0))
     {




      FUNC_13(VAR_4, VAR_2);

      break;
     }

     VAR_11 =
      FUNC_11(VAR_10, VAR_4);
     if (!VAR_11)
     {

      FUNC_1(VAR_4->connection->connectionState ==
          VAR_1);

      return;
     }

     VAR_8->transactionState = 129;
    }

    FUNC_13(VAR_4,
            VAR_2 | VAR_3);
    break;
   }

   case 130:
   case 132:
   {
    PGresult *VAR_12 = ((void*)0);

    VAR_12 = FUNC_6(VAR_7->pgConn);
    if (VAR_12 != ((void*)0))
    {
     if (!FUNC_3(VAR_12))
     {

      FUNC_10(VAR_7, VAR_12, VAR_0);
     }

     FUNC_5(VAR_12);


     FUNC_13(VAR_4,
             VAR_2 | VAR_3);

     break;
    }

    if (VAR_4->currentTask != ((void*)0))
    {
     TaskPlacementExecution *VAR_13 = VAR_4->currentTask;
     bool VAR_14 = 1;





     FUNC_4(VAR_7);

     VAR_4->currentTask = ((void*)0);

     FUNC_7(VAR_13, VAR_14);


     VAR_5->idleConnectionCount++;
    }


    FUNC_13(VAR_4,
            VAR_2 | VAR_3);

    if (VAR_6->isTransaction)
    {
     VAR_8->transactionState = 128;
    }
    else
    {
     VAR_8->transactionState = 131;
    }
    break;
   }

   case 128:
   {
    TaskPlacementExecution *VAR_15 = ((void*)0);
    bool VAR_16 = 0;

    VAR_15 = FUNC_8(VAR_4);
    if (VAR_15 == ((void*)0))
    {

     FUNC_13(VAR_4, VAR_2);
     break;
    }

    VAR_16 =
     FUNC_11(VAR_15, VAR_4);
    if (!VAR_16)
    {

     FUNC_1(VAR_4->connection->connectionState == VAR_1);

     return;
    }

    VAR_8->transactionState = 129;
    break;
   }

   case 129:
   {
    bool VAR_17 = 0;
    TaskPlacementExecution *VAR_18 = VAR_4->currentTask;
    ShardCommandExecution *VAR_19 =
     VAR_18->shardCommandExecution;
    bool VAR_20 = VAR_19->expectResults;

    if (VAR_19->gotResults)
    {

     VAR_20 = 0;
    }

    VAR_17 = FUNC_9(VAR_4, VAR_20);
    if (!VAR_17)
    {
     break;
    }

    VAR_19->gotResults = 1;
    VAR_8->transactionState = 132;
    break;
   }

   default:
   {
    break;
   }
  }
 }

 while (VAR_8->transactionState != VAR_9);
}
