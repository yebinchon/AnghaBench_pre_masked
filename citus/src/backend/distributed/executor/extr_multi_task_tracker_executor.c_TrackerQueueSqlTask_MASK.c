
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* taskAssignmentQuery; int status; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_13__ {int * taskStateHash; } ;
typedef TYPE_2__ TaskTracker ;
struct TYPE_14__ {int taskId; int jobId; int queryString; } ;
typedef TYPE_3__ Task ;
struct TYPE_15__ {int data; } ;
typedef TYPE_4__* StringInfo ;
typedef int HTAB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,char*) ;
 TYPE_4__* FUNC_3 () ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(TaskTracker *VAR_4, Task *VAR_5)
{
 HTAB *VAR_6 = VAR_4->taskStateHash;
 TrackerTaskState *VAR_7 = ((void*)0);
 StringInfo VAR_8 = ((void*)0);
 StringInfo VAR_9 = FUNC_3();
 char *VAR_10 = FUNC_4(VAR_5->queryString);

 if (VAR_0)
 {
  FUNC_2(VAR_9, VAR_1,
       VAR_5->jobId, VAR_5->taskId, VAR_10);
 }
 else
 {
  FUNC_2(VAR_9, VAR_2,
       VAR_5->jobId, VAR_5->taskId, VAR_10);
 }


 VAR_8 = FUNC_0(VAR_5, VAR_9->data);

 VAR_7 = FUNC_1(VAR_6, VAR_5->jobId, VAR_5->taskId);
 VAR_7->status = VAR_3;
 VAR_7->taskAssignmentQuery = VAR_8;
}
