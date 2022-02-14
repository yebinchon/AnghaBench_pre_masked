
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ TaskAssignmentPolicyType ;
struct TYPE_6__ {int taskId; int * taskPlacementList; int taskType; } ;
typedef TYPE_1__ Task ;
struct TYPE_8__ {int * taskList; } ;
struct TYPE_7__ {int nodePort; int nodeName; } ;
typedef TYPE_2__ ShardPlacement ;
typedef int List ;
typedef TYPE_3__ Job ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(Job *VAR_3,
           TaskAssignmentPolicyType VAR_4,
           List *VAR_5)
{
 if (VAR_4 == VAR_2)
 {
  Task *VAR_6 = ((void*)0);
  List *VAR_7 = VAR_1;
  ShardPlacement *VAR_8 = ((void*)0);





  FUNC_0(FUNC_7(VAR_3->taskList) == 1);
  VAR_6 = (Task *) FUNC_6(VAR_3->taskList);
  FUNC_0(FUNC_1(VAR_6->taskType));
  VAR_5 = FUNC_2(VAR_5);


  VAR_7 = FUNC_3(VAR_6, VAR_5);
  VAR_6->taskPlacementList = VAR_7;

  VAR_8 = (ShardPlacement *) FUNC_6(VAR_7);
  FUNC_4(VAR_0, (FUNC_5("assigned task %u to node %s:%u", VAR_6->taskId,
        VAR_8->nodeName,
        VAR_8->nodePort)));
 }
}
