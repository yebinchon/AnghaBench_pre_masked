
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_core_fabric_ops {int (* get_fabric_name ) () ;} ;
struct t10_pr_registration {int pr_res_holder; int pr_res_type; int pr_res_scope; int pr_reg_abort_list; scalar_t__ pr_reg_all_tg_pt; struct se_node_acl* pr_reg_nacl; } ;
struct se_node_acl {int initiatorname; TYPE_1__* se_tpg; } ;
struct se_device {struct t10_pr_registration* dev_pr_res_holder; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct target_core_fabric_ops* se_tpg_tfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_node_acl*,struct t10_pr_registration*,int ) ;
 int FUNC_1 (struct t10_pr_registration*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int ,char*,int ,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(
 struct se_device *VAR_1,
 struct t10_pr_registration *VAR_2,
 struct list_head *VAR_3,
 int VAR_4,
 int VAR_5,
 int VAR_6)
{
 struct se_node_acl *VAR_7 = VAR_2->pr_reg_nacl;
 struct target_core_fabric_ops *VAR_8 = VAR_7->se_tpg->se_tpg_tfo;
 char VAR_9[VAR_0];
 int VAR_10;

 FUNC_4(VAR_9, 0, VAR_0);
 VAR_10 = FUNC_1(VAR_2, &VAR_9[0],
    VAR_0);



 if (VAR_1->dev_pr_res_holder)
  FUNC_0(VAR_1, VAR_7,
    VAR_1->dev_pr_res_holder, 0);

 VAR_1->dev_pr_res_holder = VAR_2;
 VAR_2->pr_res_holder = 1;
 VAR_2->pr_res_type = VAR_4;
 VAR_2->pr_res_scope = VAR_5;

 FUNC_5("SPC-3 PR [%s] Service Action: PREEMPT%s created new"
  " reservation holder TYPE: %s ALL_TG_PT: %d\n",
  VAR_8->get_fabric_name(), (VAR_6) ? "_AND_ABORT" : "",
  FUNC_2(VAR_4),
  (VAR_2->pr_reg_all_tg_pt) ? 1 : 0);
 FUNC_5("SPC-3 PR [%s] PREEMPT%s from Node: %s%s\n",
  VAR_8->get_fabric_name(), (VAR_6) ? "_AND_ABORT" : "",
  VAR_7->initiatorname, (VAR_10) ? &VAR_9[0] : "");





 if (VAR_3)
  FUNC_3(&VAR_2->pr_reg_abort_list,
    VAR_3);
}
