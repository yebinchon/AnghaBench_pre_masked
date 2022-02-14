
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int workerName; int nodeId; int groupId; } ;
typedef TYPE_1__ WorkerNode ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(char *VAR_2, int32 VAR_3)
{
 char *VAR_4 = ((void*)0);
 WorkerNode *VAR_5 = FUNC_3(VAR_2, VAR_3);

 if (FUNC_6(VAR_5))
 {
  bool VAR_6 = 0;





  FUNC_1(VAR_5->groupId);

  if (FUNC_5(VAR_5->groupId,
          VAR_6))
  {
   FUNC_8(VAR_0, (FUNC_9("you cannot remove the primary node of a node group "
           "which has shard placements")));
  }
 }

 FUNC_2(VAR_5->workerName, VAR_3);

 VAR_4 = FUNC_4(VAR_5->nodeId);


 FUNC_0(VAR_5->workerName, VAR_3);

 FUNC_7(VAR_1, VAR_4);
}
