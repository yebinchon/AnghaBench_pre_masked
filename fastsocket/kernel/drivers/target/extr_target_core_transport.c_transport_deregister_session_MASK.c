
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {int (* get_fabric_name ) () ;int (* tpg_release_fabric_acl ) (struct se_portal_group*,struct se_node_acl*) ;int (* tpg_check_demo_mode_cache ) (struct se_portal_group*) ;} ;
struct se_session {struct se_node_acl* se_node_acl; int * fabric_sess_ptr; struct se_portal_group* se_tpg; int sess_list; } ;
struct se_portal_group {struct target_core_fabric_ops* se_tpg_tfo; int acl_node_lock; int num_node_acls; int session_lock; } ;
struct se_node_acl {int acl_list; scalar_t__ dynamic_node_acl; } ;


 int FUNC_0 (struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (struct se_node_acl*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct se_portal_group*) ;
 int FUNC_7 (struct se_portal_group*,struct se_node_acl*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct se_node_acl*) ;
 int FUNC_10 (struct se_session*) ;

void FUNC_11(struct se_session *VAR_0)
{
 struct se_portal_group *VAR_1 = VAR_0->se_tpg;
 struct target_core_fabric_ops *VAR_2;
 struct se_node_acl *VAR_3;
 unsigned long VAR_4;
 bool VAR_5 = 1;

 if (!VAR_1) {
  FUNC_10(VAR_0);
  return;
 }
 VAR_2 = VAR_1->se_tpg_tfo;

 FUNC_4(&VAR_1->session_lock, VAR_4);
 FUNC_2(&VAR_0->sess_list);
 VAR_0->se_tpg = ((void*)0);
 VAR_0->fabric_sess_ptr = ((void*)0);
 FUNC_5(&VAR_1->session_lock, VAR_4);





 VAR_3 = VAR_0->se_node_acl;

 FUNC_4(&VAR_1->acl_node_lock, VAR_4);
 if (VAR_3 && VAR_3->dynamic_node_acl) {
  if (!VAR_2->tpg_check_demo_mode_cache(VAR_1)) {
   FUNC_2(&VAR_3->acl_list);
   VAR_1->num_node_acls--;
   FUNC_5(&VAR_1->acl_node_lock, VAR_4);
   FUNC_1(VAR_3);
   FUNC_0(VAR_3, VAR_1);
   VAR_2->tpg_release_fabric_acl(VAR_1, VAR_3);

   VAR_5 = 0;
   FUNC_4(&VAR_1->acl_node_lock, VAR_4);
  }
 }
 FUNC_5(&VAR_1->acl_node_lock, VAR_4);

 FUNC_3("TARGET_CORE[%s]: Deregistered fabric_sess\n",
  VAR_1->se_tpg_tfo->get_fabric_name());





 if (VAR_3 && VAR_5 == 1)
  FUNC_9(VAR_3);

 FUNC_10(VAR_0);
}
