
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int taskId; int jobId; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_6__ {int taskId; int jobId; } ;
typedef TYPE_2__ Task ;
typedef int HTAB ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,int ,int*) ;

__attribute__((used)) static TrackerTaskState *
FUNC_1(HTAB *VAR_1, Task *VAR_2)
{
 TrackerTaskState *VAR_3 = ((void*)0);
 void *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 TrackerTaskState VAR_6;
 VAR_6.jobId = VAR_2->jobId;
 VAR_6.taskId = VAR_2->taskId;

 VAR_4 = (void *) &VAR_6;
 VAR_3 = (TrackerTaskState *) FUNC_0(VAR_1, VAR_4,
             VAR_0, &VAR_5);

 return VAR_3;
}
