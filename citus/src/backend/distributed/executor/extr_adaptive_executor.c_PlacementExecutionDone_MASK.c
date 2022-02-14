
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* distributedExecution; } ;
typedef TYPE_1__ WorkerPool ;
struct TYPE_11__ {scalar_t__ executionState; TYPE_3__* shardPlacement; TYPE_4__* shardCommandExecution; TYPE_1__* workerPool; } ;
typedef TYPE_2__ TaskPlacementExecution ;
typedef scalar_t__ TaskExecutionState ;
struct TYPE_14__ {int failed; int unfinishedTaskCount; } ;
struct TYPE_13__ {scalar_t__ executionState; } ;
struct TYPE_12__ {scalar_t__ shardState; int placementId; } ;
typedef TYPE_3__ ShardPlacement ;
typedef TYPE_4__ ShardCommandExecution ;
typedef TYPE_5__ DistributedExecution ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(TaskPlacementExecution *VAR_8, bool VAR_9)
{
 WorkerPool *VAR_10 = VAR_8->workerPool;
 DistributedExecution *VAR_11 = VAR_10->distributedExecution;
 ShardCommandExecution *VAR_12 =
  VAR_8->shardCommandExecution;
 TaskExecutionState VAR_13 = VAR_12->executionState;
 TaskExecutionState VAR_14 = VAR_7;
 bool VAR_15 = 0;


 if (VAR_9)
 {
  VAR_8->executionState = VAR_3;
 }
 else
 {
  if (FUNC_1(VAR_11))
  {
   ShardPlacement *VAR_16 = VAR_8->shardPlacement;





   if (VAR_16->shardState == VAR_0)
   {
    FUNC_3(VAR_16->placementId, VAR_1);
   }
  }

  if (VAR_8->executionState == VAR_4)
  {






   VAR_15 = 1;
  }

  VAR_8->executionState = VAR_2;
 }

 if (VAR_13 != VAR_7)
 {




  return;
 }





 VAR_14 = FUNC_2(VAR_12);
 if (VAR_14 == VAR_6)
 {
  VAR_11->unfinishedTaskCount--;
  return;
 }
 else if (VAR_14 == VAR_5)
 {
  VAR_11->unfinishedTaskCount--;





  VAR_11->failed = 1;
  return;
 }
 else if (!VAR_15)
 {
  FUNC_0(VAR_8, VAR_9);
 }
}
