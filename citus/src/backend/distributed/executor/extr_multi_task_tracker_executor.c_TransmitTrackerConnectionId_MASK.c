
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {scalar_t__ jobId; scalar_t__ taskId; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_7__ {int connectionId; TYPE_1__* connectionBusyOnTask; } ;
typedef TYPE_2__ TaskTracker ;
struct TYPE_8__ {scalar_t__ jobId; scalar_t__ taskId; } ;
typedef TYPE_3__ Task ;


 int VAR_0 ;

__attribute__((used)) static int32
FUNC_0(TaskTracker *VAR_1, Task *VAR_2)
{
 int32 VAR_3 = VAR_0;

 TrackerTaskState *VAR_4 = VAR_1->connectionBusyOnTask;
 if (VAR_4 != ((void*)0))
 {

  if (VAR_4->jobId == VAR_2->jobId &&
   VAR_4->taskId == VAR_2->taskId)
  {
   VAR_3 = VAR_1->connectionId;
  }
 }

 return VAR_3;
}
