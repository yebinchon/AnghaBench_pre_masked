
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relationRowLockList; scalar_t__ anchorShardId; int * taskPlacementList; int taskType; } ;
typedef TYPE_1__ Task ;
struct TYPE_5__ {int * tasksToExecute; } ;
typedef int List ;
typedef TYPE_2__ DistributedExecution ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(DistributedExecution *VAR_7)
{
 List *VAR_8 = VAR_7->tasksToExecute;
 int VAR_9 = FUNC_5(VAR_8);
 Task *VAR_10 = ((void*)0);
 bool VAR_11 = 0;

 if (VAR_3 == VAR_1)
 {
  return 0;
 }

 if (VAR_9 == 0)
 {
  return 0;
 }

 VAR_10 = (Task *) FUNC_4(VAR_8);

 VAR_11 = VAR_10->relationRowLockList != VAR_4;
 if (VAR_11)
 {




  return FUNC_1();
 }

 if (FUNC_2(VAR_10->taskType))
 {
  return VAR_5 && FUNC_1();
 }

 if (FUNC_0())
 {
  return 1;
 }

 if (FUNC_5(VAR_8) > 1)
 {
  return 1;
 }

 if (FUNC_5(VAR_10->taskPlacementList) > 1)
 {
  if (VAR_6 == VAR_0)
  {





   return 1;
  }
  if (VAR_10->anchorShardId != VAR_2 && FUNC_3(
    VAR_10->anchorShardId))
  {
   return 1;
  }





  return 0;
 }

 return 0;
}
