
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remoteTaskList; void* unfinishedTaskCount; void* totalTaskCount; int tasksToExecute; } ;
typedef TYPE_1__ DistributedExecution ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(DistributedExecution *VAR_0)
{

 VAR_0->tasksToExecute = VAR_0->remoteTaskList;

 VAR_0->totalTaskCount = FUNC_0(VAR_0->remoteTaskList);
 VAR_0->unfinishedTaskCount = FUNC_0(VAR_0->remoteTaskList);
}
