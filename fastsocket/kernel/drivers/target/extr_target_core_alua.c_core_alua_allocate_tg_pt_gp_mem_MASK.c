
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp_member {struct se_port* tg_pt; int tg_pt_gp_mem_ref_cnt; int tg_pt_gp_mem_lock; int tg_pt_gp_mem_list; } ;
struct se_port {struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; } ;


 int VAR_0 ;
 struct t10_alua_tg_pt_gp_member* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct t10_alua_tg_pt_gp_member* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

struct t10_alua_tg_pt_gp_member *FUNC_6(
 struct se_port *VAR_3)
{
 struct t10_alua_tg_pt_gp_member *VAR_4;

 VAR_4 = FUNC_3(VAR_2,
    VAR_1);
 if (!VAR_4) {
  FUNC_4("Unable to allocate struct t10_alua_tg_pt_gp_member\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_4->tg_pt_gp_mem_list);
 FUNC_5(&VAR_4->tg_pt_gp_mem_lock);
 FUNC_2(&VAR_4->tg_pt_gp_mem_ref_cnt, 0);

 VAR_4->tg_pt = VAR_3;
 VAR_3->sep_alua_tg_pt_gp_mem = VAR_4;

 return VAR_4;
}
