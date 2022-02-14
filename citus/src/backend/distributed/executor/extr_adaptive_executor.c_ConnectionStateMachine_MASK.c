
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int * currentTask; int sessionId; TYPE_4__* connection; TYPE_3__* workerPool; } ;
typedef TYPE_2__ WorkerSession ;
struct TYPE_17__ {int failedConnectionCount; int sessionList; int idleConnectionCount; int activeConnectionCount; TYPE_5__* distributedExecution; } ;
typedef TYPE_3__ WorkerPool ;
struct TYPE_19__ {int connectionSetChanged; int errorOnAnyFailure; int failed; } ;
struct TYPE_15__ {int transactionState; int beginSent; } ;
struct TYPE_18__ {int connectionState; TYPE_1__ remoteTransaction; int port; int hostname; int pgConn; } ;
typedef int PostgresPollingStatusType ;
typedef int MultiConnectionState ;
typedef TYPE_4__ MultiConnection ;
typedef TYPE_5__ DistributedExecution ;
typedef int ConnStatusType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (TYPE_4__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(WorkerSession *VAR_11)
{
 WorkerPool *VAR_12 = VAR_11->workerPool;
 DistributedExecution *VAR_13 = VAR_12->distributedExecution;

 MultiConnection *VAR_14 = VAR_11->connection;
 MultiConnectionState VAR_15;

 do {
  VAR_15 = VAR_14->connectionState;

  switch (VAR_15)
  {
   case 129:
   {

    VAR_14->connectionState = 131;
    break;
   }

   case 131:
   {
    PostgresPollingStatusType VAR_16;

    ConnStatusType VAR_17 = FUNC_2(VAR_14->pgConn);
    if (VAR_17 == VAR_1)
    {
     FUNC_10(VAR_2, (FUNC_11("established connection to %s:%d for "
           "session %ld",
           VAR_14->hostname, VAR_14->port,
           VAR_11->sessionId)));

     VAR_12->activeConnectionCount++;
     VAR_12->idleConnectionCount++;

     FUNC_7(VAR_11,
             VAR_9 | VAR_10);

     VAR_14->connectionState = 132;
     break;
    }
    else if (VAR_17 == VAR_0)
    {
     VAR_14->connectionState = 130;
     break;
    }

    VAR_16 = FUNC_1(VAR_14->pgConn);
    if (VAR_16 == VAR_4)
    {
     VAR_14->connectionState = 130;
    }
    else if (VAR_16 == VAR_5)
    {
     FUNC_7(VAR_11, VAR_9);
    }
    else if (VAR_16 == VAR_6)
    {
     FUNC_7(VAR_11, VAR_10);
    }
    else
    {
     FUNC_10(VAR_2, (FUNC_11("established connection to %s:%d for "
           "session %ld",
           VAR_14->hostname, VAR_14->port,
           VAR_11->sessionId)));

     VAR_12->activeConnectionCount++;
     VAR_12->idleConnectionCount++;

     FUNC_7(VAR_11,
             VAR_9 | VAR_10);

     VAR_14->connectionState = 132;
    }

    break;
   }

   case 132:
   {

    FUNC_5(VAR_11);
    break;
   }

   case 128:
   {

    VAR_12->activeConnectionCount--;

    if (VAR_11->currentTask == ((void*)0))
    {

     VAR_12->idleConnectionCount--;
    }

    VAR_14->connectionState = 130;
    break;
   }

   case 130:
   {

    int VAR_18 = FUNC_12(VAR_12->sessionList);

    VAR_12->failedConnectionCount++;


    FUNC_0(VAR_14, 0);


    FUNC_9(VAR_11);

    if (VAR_12->failedConnectionCount >= VAR_18)
    {







     FUNC_8(VAR_12);
    }





    if (VAR_13->failed || VAR_13->errorOnAnyFailure)
    {

     FUNC_3(VAR_14, VAR_3);
    }
    else
    {

     FUNC_3(VAR_14, VAR_8);
    }


    FUNC_6(VAR_14);
    FUNC_4(VAR_14);


    VAR_13->connectionSetChanged = 1;






    if (!VAR_14->remoteTransaction.beginSent)
    {
     VAR_14->remoteTransaction.transactionState =
      VAR_7;
    }

    break;
   }

   default:
   {
    break;
   }
  }
 } while (VAR_14->connectionState != VAR_15);
}
