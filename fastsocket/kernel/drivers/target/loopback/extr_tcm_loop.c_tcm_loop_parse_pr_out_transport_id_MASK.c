
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcm_loop_tpg {struct tcm_loop_hba* tl_hba; } ;
struct tcm_loop_hba {int tl_proto_id; } ;
struct se_portal_group {struct tcm_loop_tpg* se_tpg_fabric_ptr; } ;





 char* FUNC_0 (struct se_portal_group*,char const*,int *,char**) ;
 char* FUNC_1 (struct se_portal_group*,char const*,int *,char**) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (struct se_portal_group*,char const*,int *,char**) ;

__attribute__((used)) static char *FUNC_4(
 struct se_portal_group *VAR_0,
 const char *VAR_1,
 u32 *VAR_2,
 char **VAR_3)
{
 struct tcm_loop_tpg *VAR_4 = VAR_0->se_tpg_fabric_ptr;
 struct tcm_loop_hba *VAR_5 = VAR_4->tl_hba;

 switch (VAR_5->tl_proto_id) {
 case 128:
  return FUNC_3(VAR_0, VAR_1, VAR_2,
     VAR_3);
 case 130:
  return FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3);
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3);
 default:
  FUNC_2("Unknown tl_proto_id: 0x%02x, using"
   " SAS emulation\n", VAR_5->tl_proto_id);
  break;
 }

 return FUNC_3(VAR_0, VAR_1, VAR_2,
   VAR_3);
}
