
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TaskTracker ;
typedef int TaskExecution ;
struct TYPE_4__ {scalar_t__ taskType; scalar_t__ dependedTaskList; int * taskExecution; } ;
typedef TYPE_1__ Task ;
typedef int HTAB ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static TaskTracker *
FUNC_3(HTAB *VAR_2, Task *VAR_3, TaskExecution *VAR_4)
{
 TaskTracker *VAR_5 = ((void*)0);
 Task *VAR_6 = ((void*)0);
 TaskExecution *VAR_7 = ((void*)0);


 if (VAR_3->taskType != VAR_0)
 {
  return ((void*)0);
 }

 FUNC_0(VAR_3->dependedTaskList != VAR_1);
 VAR_6 = (Task *) FUNC_2(VAR_3->dependedTaskList);
 VAR_7 = VAR_6->taskExecution;

 VAR_5 = FUNC_1(VAR_2, VAR_6, VAR_7);
 FUNC_0(VAR_5 != ((void*)0));

 return VAR_5;
}
