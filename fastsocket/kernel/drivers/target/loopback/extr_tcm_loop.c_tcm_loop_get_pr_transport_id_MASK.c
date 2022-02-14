
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcm_loop_tpg {struct tcm_loop_hba* tl_hba; } ;
struct tcm_loop_hba {int tl_proto_id; } ;
struct t10_pr_registration {int dummy; } ;
struct se_portal_group {struct tcm_loop_tpg* se_tpg_fabric_ptr; } ;
struct se_node_acl {int dummy; } ;





 int FUNC_0 (struct se_portal_group*,struct se_node_acl*,struct t10_pr_registration*,int*,unsigned char*) ;
 int FUNC_1 (struct se_portal_group*,struct se_node_acl*,struct t10_pr_registration*,int*,unsigned char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct se_portal_group*,struct se_node_acl*,struct t10_pr_registration*,int*,unsigned char*) ;

__attribute__((used)) static u32 FUNC_4(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1,
 struct t10_pr_registration *VAR_2,
 int *VAR_3,
 unsigned char *VAR_4)
{
 struct tcm_loop_tpg *VAR_5 = VAR_0->se_tpg_fabric_ptr;
 struct tcm_loop_hba *VAR_6 = VAR_5->tl_hba;

 switch (VAR_6->tl_proto_id) {
 case 128:
  return FUNC_3(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);
 case 130:
  return FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);
 default:
  FUNC_2("Unknown tl_proto_id: 0x%02x, using"
   " SAS emulation\n", VAR_6->tl_proto_id);
  break;
 }

 return FUNC_3(VAR_0, VAR_1, VAR_2,
   VAR_3, VAR_4);
}
