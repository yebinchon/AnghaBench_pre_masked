
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int commandsSent; TYPE_3__* currentTask; TYPE_7__* connection; TYPE_2__* workerPool; } ;
typedef TYPE_1__ WorkerSession ;
struct TYPE_19__ {int idleConnectionCount; int unusedConnectionCount; TYPE_8__* distributedExecution; } ;
typedef TYPE_2__ WorkerPool ;
struct TYPE_20__ {int executionState; int * shardPlacement; TYPE_5__* shardCommandExecution; } ;
typedef TYPE_3__ TaskPlacementExecution ;
struct TYPE_21__ {char* queryString; } ;
typedef TYPE_4__ Task ;
struct TYPE_25__ {TYPE_6__* paramListInfo; } ;
struct TYPE_24__ {void* connectionState; int pgConn; } ;
struct TYPE_23__ {int numParams; } ;
struct TYPE_22__ {TYPE_4__* task; } ;
typedef int ShardPlacement ;
typedef TYPE_5__ ShardCommandExecution ;
typedef TYPE_6__* ParamListInfo ;
typedef int Oid ;
typedef TYPE_7__ MultiConnection ;
typedef int List ;
typedef TYPE_8__ DistributedExecution ;


 int FUNC_0 (int *,TYPE_7__*) ;
 int FUNC_1 (TYPE_6__*,int **,char const***) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 int FUNC_5 (TYPE_7__*,char*,int,int *,char const**) ;
 TYPE_6__* FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static bool
FUNC_7(TaskPlacementExecution *VAR_2,
         WorkerSession *VAR_3)
{
 WorkerPool *VAR_4 = VAR_3->workerPool;
 DistributedExecution *VAR_5 = VAR_4->distributedExecution;
 ParamListInfo VAR_6 = VAR_5->paramListInfo;
 MultiConnection *VAR_7 = VAR_3->connection;
 ShardCommandExecution *VAR_8 =
  VAR_2->shardCommandExecution;
 Task *VAR_9 = VAR_8->task;
 ShardPlacement *VAR_10 = VAR_2->shardPlacement;
 List *VAR_11 = FUNC_3(VAR_9, VAR_10);
 char *VAR_12 = VAR_9->queryString;
 int VAR_13 = 0;
 int VAR_14 = 0;





 FUNC_0(VAR_11, VAR_7);


 VAR_3->commandsSent++;

 if (VAR_3->commandsSent == 1)
 {

  VAR_4->unusedConnectionCount--;
 }


 VAR_4->idleConnectionCount--;
 VAR_3->currentTask = VAR_2;
 VAR_2->executionState = VAR_1;

 if (VAR_6 != ((void*)0))
 {
  int VAR_15 = VAR_6->numParams;
  Oid *VAR_16 = ((void*)0);
  const char **VAR_17 = ((void*)0);


  VAR_6 = FUNC_6(VAR_6);

  FUNC_1(VAR_6, &VAR_16,
           &VAR_17);
  VAR_13 = FUNC_5(VAR_7, VAR_12, VAR_15,
           VAR_16, VAR_17);
 }
 else
 {
  VAR_13 = FUNC_4(VAR_7, VAR_12);
 }

 if (VAR_13 == 0)
 {
  VAR_7->connectionState = VAR_0;
  return 0;
 }

 VAR_14 = FUNC_2(VAR_7->pgConn);
 if (VAR_14 == 0)
 {
  VAR_7->connectionState = VAR_0;
  return 0;
 }

 return 1;
}
