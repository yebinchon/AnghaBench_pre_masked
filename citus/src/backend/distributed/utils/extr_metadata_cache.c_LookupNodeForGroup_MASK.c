
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {scalar_t__ groupId; } ;
typedef TYPE_1__ WorkerNode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_2 ;


 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;

WorkerNode *
FUNC_4(int32 VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_1();

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  WorkerNode *VAR_8 = VAR_3[VAR_7];
  int32 VAR_9 = VAR_8->groupId;
  if (VAR_9 != VAR_5)
  {
   continue;
  }

  VAR_6 = 1;

  if (FUNC_0(VAR_8))
  {
   return VAR_8;
  }
 }

 if (!VAR_6)
 {
  FUNC_2(VAR_0, (FUNC_3("there is a shard placement in node group %d but "
          "there are no nodes in that group", VAR_5)));
 }

 switch (VAR_2)
 {
  case 128:
  {
   FUNC_2(VAR_0, (FUNC_3("node group %d does not have a primary node",
           VAR_5)));
   return ((void*)0);
  }

  case 129:
  {
   FUNC_2(VAR_0, (FUNC_3("node group %d does not have a secondary node",
           VAR_5)));
   return ((void*)0);
  }

  default:
  {
   FUNC_2(VAR_1, (FUNC_3("unrecognized value for use_secondary_nodes")));
   return ((void*)0);
  }
 }
}
