
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcm_loop_tpg {struct tcm_loop_hba* tl_hba; } ;
struct tcm_loop_hba {int tl_proto_id; } ;
struct se_portal_group {struct tcm_loop_tpg* se_tpg_fabric_ptr; } ;





 int FUNC_0 (struct se_portal_group*) ;
 int FUNC_1 (struct se_portal_group*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct se_portal_group*) ;

__attribute__((used)) static u8 FUNC_4(struct se_portal_group *VAR_0)
{
 struct tcm_loop_tpg *VAR_1 = VAR_0->se_tpg_fabric_ptr;
 struct tcm_loop_hba *VAR_2 = VAR_1->tl_hba;







 switch (VAR_2->tl_proto_id) {
 case 128:
  return FUNC_3(VAR_0);
 case 130:
  return FUNC_0(VAR_0);
 case 129:
  return FUNC_1(VAR_0);
 default:
  FUNC_2("Unknown tl_proto_id: 0x%02x, using"
   " SAS emulation\n", VAR_2->tl_proto_id);
  break;
 }

 return FUNC_3(VAR_0);
}
