
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int currentNodeIndex; } ;
typedef TYPE_1__ TaskExecution ;
struct TYPE_8__ {scalar_t__ taskType; int taskId; int jobId; TYPE_1__* taskExecution; int * taskPlacementList; int upstreamTaskId; int partitionId; } ;
typedef TYPE_2__ Task ;
struct TYPE_9__ {char* nodeName; int nodePort; } ;
typedef int * StringInfo ;
typedef TYPE_3__ ShardPlacement ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,char*,int ) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;

__attribute__((used)) static StringInfo
FUNC_4(Task *VAR_3, Task *VAR_4)
{
 StringInfo VAR_5 = ((void*)0);
 uint32 VAR_6 = VAR_3->partitionId;
 uint32 VAR_7 = VAR_3->upstreamTaskId;


 List *VAR_8 = VAR_4->taskPlacementList;
 TaskExecution *VAR_9 = VAR_4->taskExecution;
 uint32 VAR_10 = VAR_9->currentNodeIndex;

 ShardPlacement *VAR_11 = FUNC_2(VAR_8, VAR_10);
 char *VAR_12 = VAR_11->nodeName;
 uint32 VAR_13 = VAR_11->nodePort;

 FUNC_0(VAR_3->taskType == VAR_1);
 FUNC_0(VAR_4->taskType == VAR_2);

 VAR_5 = FUNC_3();
 FUNC_1(VAR_5, VAR_0,
      VAR_4->jobId, VAR_4->taskId, VAR_6,
      VAR_7,
      VAR_12, VAR_13);

 return VAR_5;
}
