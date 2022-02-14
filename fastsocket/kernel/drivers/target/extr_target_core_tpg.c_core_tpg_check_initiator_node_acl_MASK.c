
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; int acl_node_lock; int num_node_acls; int acl_node_list; } ;
struct se_node_acl {int dynamic_node_acl; int queue_depth; int acl_list; int stats_lock; int acl_index; struct se_portal_group* se_tpg; int initiatorname; int acl_pr_ref_count; int nacl_sess_lock; int device_list_lock; int acl_free_comp; int acl_kref; int acl_sess_list; } ;
struct TYPE_2__ {int (* tpg_check_demo_mode_login_only ) (struct se_portal_group*) ;int (* get_fabric_name ) () ;int (* tpg_get_tag ) (struct se_portal_group*) ;int (* tpg_release_fabric_acl ) (struct se_portal_group*,struct se_node_acl*) ;int (* set_default_node_attributes ) (struct se_node_acl*) ;int (* tpg_get_default_depth ) (struct se_portal_group*) ;struct se_node_acl* (* tpg_alloc_fabric_acl ) (struct se_portal_group*) ;int (* tpg_check_demo_mode ) (struct se_portal_group*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct se_node_acl*) ;
 int FUNC_3 (struct se_node_acl*,struct se_portal_group*) ;
 scalar_t__ FUNC_4 (struct se_portal_group*,struct se_node_acl*) ;
 int FUNC_5 (struct se_node_acl*,struct se_portal_group*) ;
 struct se_node_acl* FUNC_6 (struct se_portal_group*,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,char*,unsigned char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct se_portal_group*) ;
 int FUNC_17 () ;
 struct se_node_acl* FUNC_18 (struct se_portal_group*) ;
 int FUNC_19 (struct se_portal_group*) ;
 int FUNC_20 (struct se_node_acl*) ;
 int FUNC_21 (struct se_portal_group*,struct se_node_acl*) ;
 int FUNC_22 (struct se_portal_group*,struct se_node_acl*) ;
 int FUNC_23 (struct se_portal_group*) ;
 int FUNC_24 () ;
 int FUNC_25 (struct se_portal_group*) ;

struct se_node_acl *FUNC_26(
 struct se_portal_group *VAR_2,
 unsigned char *VAR_3)
{
 struct se_node_acl *VAR_4;

 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!VAR_2->se_tpg_tfo->tpg_check_demo_mode(VAR_2))
  return ((void*)0);

 VAR_4 = VAR_2->se_tpg_tfo->tpg_alloc_fabric_acl(VAR_2);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->acl_list);
 FUNC_0(&VAR_4->acl_sess_list);
 FUNC_8(&VAR_4->acl_kref);
 FUNC_7(&VAR_4->acl_free_comp);
 FUNC_13(&VAR_4->device_list_lock);
 FUNC_13(&VAR_4->nacl_sess_lock);
 FUNC_1(&VAR_4->acl_pr_ref_count, 0);
 VAR_4->queue_depth = VAR_2->se_tpg_tfo->tpg_get_default_depth(VAR_2);
 FUNC_12(VAR_4->initiatorname, VAR_1, "%s", VAR_3);
 VAR_4->se_tpg = VAR_2;
 VAR_4->acl_index = FUNC_11(VAR_0);
 FUNC_13(&VAR_4->stats_lock);
 VAR_4->dynamic_node_acl = 1;

 VAR_2->se_tpg_tfo->set_default_node_attributes(VAR_4);

 if (FUNC_2(VAR_4) < 0) {
  VAR_2->se_tpg_tfo->tpg_release_fabric_acl(VAR_2, VAR_4);
  return ((void*)0);
 }

 if (FUNC_4(VAR_2, VAR_4) < 0) {
  FUNC_3(VAR_4, VAR_2);
  VAR_2->se_tpg_tfo->tpg_release_fabric_acl(VAR_2, VAR_4);
  return ((void*)0);
 }





 if ((VAR_2->se_tpg_tfo->tpg_check_demo_mode_login_only == ((void*)0)) ||
     (VAR_2->se_tpg_tfo->tpg_check_demo_mode_login_only(VAR_2) != 1))
  FUNC_5(VAR_4, VAR_2);

 FUNC_14(&VAR_2->acl_node_lock);
 FUNC_9(&VAR_4->acl_list, &VAR_2->acl_node_list);
 VAR_2->num_node_acls++;
 FUNC_15(&VAR_2->acl_node_lock);

 FUNC_10("%s_TPG[%u] - Added DYNAMIC ACL with TCQ Depth: %d for %s"
  " Initiator Node: %s\n", VAR_2->se_tpg_tfo->get_fabric_name(),
  VAR_2->se_tpg_tfo->tpg_get_tag(VAR_2), VAR_4->queue_depth,
  VAR_2->se_tpg_tfo->get_fabric_name(), VAR_3);

 return VAR_4;
}
