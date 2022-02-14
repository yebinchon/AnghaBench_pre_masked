
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int TaskType ;
struct TYPE_4__ {int taskId; int jobId; int taskType; } ;
typedef TYPE_1__ TaskMapKey ;
struct TYPE_5__ {int * task; } ;
typedef TYPE_2__ TaskMapEntry ;
typedef int Task ;
typedef int HTAB ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static Task *
FUNC_2(HTAB *VAR_1, TaskType VAR_2, uint64 VAR_3, uint32 VAR_4)
{
 TaskMapEntry *VAR_5 = ((void*)0);
 Task *VAR_6 = ((void*)0);
 void *VAR_7 = ((void*)0);
 bool VAR_8 = 0;

 TaskMapKey VAR_9;
 FUNC_1(&VAR_9, 0, sizeof(TaskMapKey));

 VAR_9.taskType = VAR_2;
 VAR_9.jobId = VAR_3;
 VAR_9.taskId = VAR_4;

 VAR_7 = (void *) &VAR_9;
 VAR_5 = (TaskMapEntry *) FUNC_0(VAR_1, VAR_7, VAR_0, &VAR_8);

 if (VAR_5 != ((void*)0))
 {
  VAR_6 = VAR_5->task;
 }

 return VAR_6;
}
