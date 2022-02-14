
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int queue_depth; int initiatorname; } ;
struct TYPE_2__ {int (* get_fabric_name ) () ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1)
{
 if (!VAR_1->queue_depth) {
  FUNC_0("Queue depth for %s Initiator Node: %s is 0,"
   "defaulting to 1.\n", VAR_0->se_tpg_tfo->get_fabric_name(),
   VAR_1->initiatorname);
  VAR_1->queue_depth = 1;
 }

 return 0;
}
