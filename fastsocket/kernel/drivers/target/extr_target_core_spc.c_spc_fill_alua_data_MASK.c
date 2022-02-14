
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; } ;
struct t10_alua_tg_pt_gp {unsigned char tg_pt_gp_alua_access_type; } ;
struct se_port {struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct se_port *VAR_0, unsigned char *VAR_1)
{
 struct t10_alua_tg_pt_gp *VAR_2;
 struct t10_alua_tg_pt_gp_member *VAR_3;




 VAR_1[5] = 0x80;







 if (!VAR_0)
  return;
 VAR_3 = VAR_0->sep_alua_tg_pt_gp_mem;
 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->tg_pt_gp_mem_lock);
 VAR_2 = VAR_3->tg_pt_gp;
 if (VAR_2)
  VAR_1[5] |= VAR_2->tg_pt_gp_alua_access_type;
 FUNC_1(&VAR_3->tg_pt_gp_mem_lock);
}
