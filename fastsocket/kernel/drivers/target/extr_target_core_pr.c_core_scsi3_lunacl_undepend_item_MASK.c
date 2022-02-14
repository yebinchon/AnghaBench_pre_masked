
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_portal_group {TYPE_2__* se_tpg_tfo; } ;
struct se_node_acl {struct se_portal_group* se_tpg; } ;
struct TYPE_3__ {int cg_item; } ;
struct se_lun_acl {TYPE_1__ se_lun_group; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {int pr_ref_count; struct se_lun_acl* se_lun_acl; } ;
struct TYPE_4__ {int tf_subsys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct se_dev_entry *VAR_0)
{
 struct se_lun_acl *VAR_1 = VAR_0->se_lun_acl;
 struct se_node_acl *VAR_2;
 struct se_portal_group *VAR_3;



 if (!VAR_1) {
  FUNC_0(&VAR_0->pr_ref_count);
  FUNC_2();
  return;
 }
 VAR_2 = VAR_1->se_lun_nacl;
 VAR_3 = VAR_2->se_tpg;

 FUNC_1(VAR_3->se_tpg_tfo->tf_subsys,
   &VAR_1->se_lun_group.cg_item);

 FUNC_0(&VAR_0->pr_ref_count);
 FUNC_2();
}
