
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_core_fabric_ops {int (* get_fabric_name ) () ;int (* tpg_get_tag ) (struct se_portal_group*) ;int (* tpg_get_wwn ) (struct se_portal_group*) ;} ;
struct t10_pr_registration {char* pr_res_key; char* pr_reg_aptpl; int pr_res_generation; scalar_t__ pr_reg_all_tg_pt; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int initiatorname; struct se_portal_group* se_tpg; } ;
struct se_device {TYPE_1__* transport; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct t10_pr_registration*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,char*,int ,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct se_portal_group*) ;
 int FUNC_6 (struct se_portal_group*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(
 struct target_core_fabric_ops *VAR_1,
 struct se_device *VAR_2,
 struct se_node_acl *VAR_3,
 struct t10_pr_registration *VAR_4,
 int VAR_5)
{
 struct se_portal_group *VAR_6 = VAR_3->se_tpg;
 char VAR_7[VAR_0];
 int VAR_8;

 FUNC_1(&VAR_7[0], 0, VAR_0);
 VAR_8 = FUNC_0(VAR_4, &VAR_7[0],
    VAR_0);

 FUNC_2("SPC-3 PR [%s] Service Action: REGISTER%s Initiator"
  " Node: %s%s\n", VAR_1->get_fabric_name(), (VAR_5 == 2) ?
  "_AND_MOVE" : (VAR_5 == 1) ?
  "_AND_IGNORE_EXISTING_KEY" : "", VAR_3->initiatorname,
  (VAR_8) ? VAR_7 : "");
 FUNC_2("SPC-3 PR [%s] registration on Target Port: %s,0x%04x\n",
   VAR_1->get_fabric_name(), VAR_1->tpg_get_wwn(VAR_6),
  VAR_1->tpg_get_tag(VAR_6));
 FUNC_2("SPC-3 PR [%s] for %s TCM Subsystem %s Object Target"
  " Port(s)\n", VAR_1->get_fabric_name(),
  (VAR_4->pr_reg_all_tg_pt) ? "ALL" : "SINGLE",
  VAR_2->transport->name);
 FUNC_2("SPC-3 PR [%s] SA Res Key: 0x%016Lx PRgeneration:"
  " 0x%08x  APTPL: %d\n", VAR_1->get_fabric_name(),
  VAR_4->pr_res_key, VAR_4->pr_res_generation,
  VAR_4->pr_reg_aptpl);
}
