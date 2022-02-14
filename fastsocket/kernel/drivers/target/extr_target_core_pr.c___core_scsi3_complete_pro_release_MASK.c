
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_core_fabric_ops {int (* get_fabric_name ) () ;} ;
struct t10_pr_registration {scalar_t__ pr_res_scope; scalar_t__ pr_res_type; scalar_t__ pr_res_holder; scalar_t__ pr_reg_all_tg_pt; } ;
struct se_node_acl {int initiatorname; TYPE_1__* se_tpg; } ;
struct se_device {int * dev_pr_res_holder; } ;
struct TYPE_2__ {struct target_core_fabric_ops* se_tpg_tfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct t10_pr_registration*,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,char*,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(
 struct se_device *VAR_1,
 struct se_node_acl *VAR_2,
 struct t10_pr_registration *VAR_3,
 int VAR_4)
{
 struct target_core_fabric_ops *VAR_5 = VAR_2->se_tpg->se_tpg_tfo;
 char VAR_6[VAR_0];
 int VAR_7;

 FUNC_2(VAR_6, 0, VAR_0);
 VAR_7 = FUNC_0(VAR_3, &VAR_6[0],
    VAR_0);



 VAR_1->dev_pr_res_holder = ((void*)0);

 FUNC_3("SPC-3 PR [%s] Service Action: %s RELEASE cleared"
  " reservation holder TYPE: %s ALL_TG_PT: %d\n",
  VAR_5->get_fabric_name(), (VAR_4) ? "explict" : "implict",
  FUNC_1(VAR_3->pr_res_type),
  (VAR_3->pr_reg_all_tg_pt) ? 1 : 0);
 FUNC_3("SPC-3 PR [%s] RELEASE Node: %s%s\n",
  VAR_5->get_fabric_name(), VAR_2->initiatorname,
  (VAR_7) ? &VAR_6[0] : "");



 VAR_3->pr_res_holder = VAR_3->pr_res_type = VAR_3->pr_res_scope = 0;
}
