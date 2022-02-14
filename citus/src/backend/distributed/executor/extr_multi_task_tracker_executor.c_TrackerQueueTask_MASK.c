
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * taskAssignmentQuery; int status; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_9__ {int * taskStateHash; } ;
typedef TYPE_2__ TaskTracker ;
struct TYPE_10__ {int taskId; int jobId; int queryString; } ;
typedef TYPE_3__ Task ;
typedef int * StringInfo ;
typedef int HTAB ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(TaskTracker *VAR_1, Task *VAR_2)
{
 HTAB *VAR_3 = VAR_1->taskStateHash;
 TrackerTaskState *VAR_4 = ((void*)0);
 StringInfo VAR_5 = ((void*)0);


 VAR_5 = FUNC_0(VAR_2, VAR_2->queryString);

 VAR_4 = FUNC_1(VAR_3, VAR_2->jobId, VAR_2->taskId);
 VAR_4->status = VAR_0;
 VAR_4->taskAssignmentQuery = VAR_5;
}
