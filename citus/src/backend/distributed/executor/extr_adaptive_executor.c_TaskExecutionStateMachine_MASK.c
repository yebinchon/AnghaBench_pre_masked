
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TaskPlacementExecutionState ;
struct TYPE_4__ {scalar_t__ executionState; } ;
typedef TYPE_1__ TaskPlacementExecution ;
typedef scalar_t__ TaskExecutionState ;
struct TYPE_5__ {scalar_t__ executionOrder; int placementExecutionCount; scalar_t__ executionState; TYPE_1__** placementExecutions; } ;
typedef TYPE_2__ ShardCommandExecution ;
typedef scalar_t__ PlacementExecutionOrder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static TaskExecutionState
FUNC_0(ShardCommandExecution *VAR_6)
{
 PlacementExecutionOrder VAR_7 = VAR_6->executionOrder;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = VAR_6->placementExecutionCount;
 TaskExecutionState VAR_13 = VAR_6->executionState;

 if (VAR_13 != VAR_5)
 {

  return VAR_13;
 }

 for (; VAR_11 < VAR_12; VAR_11++)
 {
  TaskPlacementExecution *VAR_14 =
   VAR_6->placementExecutions[VAR_11];
  TaskPlacementExecutionState VAR_15 = VAR_14->executionState;

  if (VAR_15 == VAR_2)
  {
   VAR_8++;
  }
  else if (VAR_15 == VAR_1)
  {
   VAR_9++;
  }

  VAR_10++;
 }

 if (VAR_9 == VAR_10)
 {
  VAR_13 = VAR_3;
 }
 else if (VAR_7 == VAR_0 && VAR_8 > 0)
 {
  VAR_13 = VAR_4;
 }
 else if (VAR_8 + VAR_9 == VAR_10)
 {
  VAR_13 = VAR_4;
 }
 else
 {
  VAR_13 = VAR_5;
 }

 VAR_6->executionState = VAR_13;

 return VAR_6->executionState;
}
