
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_cm_core {int node_cnt; int listen_node_cnt; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct nes_cm_core *VAR_1)
{
 FUNC_1(VAR_0, "---------------------------------------------\n");
 FUNC_1(VAR_0, "CM Core  -- (core = %p )\n", VAR_1);
 if (!VAR_1)
  return;
 FUNC_1(VAR_0, "---------------------------------------------\n");

 FUNC_1(VAR_0, "State         : %u \n", VAR_1->state);

 FUNC_1(VAR_0, "Listen Nodes  : %u \n", FUNC_0(&VAR_1->listen_node_cnt));
 FUNC_1(VAR_0, "Active Nodes  : %u \n", FUNC_0(&VAR_1->node_cnt));

 FUNC_1(VAR_0, "core          : %p \n", VAR_1);

 FUNC_1(VAR_0, "-------------- end core ---------------\n");
}
