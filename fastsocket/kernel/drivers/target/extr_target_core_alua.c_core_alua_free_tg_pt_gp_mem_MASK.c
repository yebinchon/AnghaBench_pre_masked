
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp_member {int tg_pt_gp_mem_lock; struct t10_alua_tg_pt_gp* tg_pt_gp; scalar_t__ tg_pt_gp_assoc; int tg_pt_gp_mem_list; int tg_pt_gp_mem_ref_cnt; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_lock; int tg_pt_gp_members; } ;
struct se_port {struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct t10_alua_tg_pt_gp_member*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

void FUNC_6(struct se_port *VAR_1)
{
 struct t10_alua_tg_pt_gp *VAR_2;
 struct t10_alua_tg_pt_gp_member *VAR_3;

 VAR_3 = VAR_1->sep_alua_tg_pt_gp_mem;
 if (!VAR_3)
  return;

 while (FUNC_0(&VAR_3->tg_pt_gp_mem_ref_cnt))
  FUNC_1();

 FUNC_4(&VAR_3->tg_pt_gp_mem_lock);
 VAR_2 = VAR_3->tg_pt_gp;
 if (VAR_2) {
  FUNC_4(&VAR_2->tg_pt_gp_lock);
  if (VAR_3->tg_pt_gp_assoc) {
   FUNC_3(&VAR_3->tg_pt_gp_mem_list);
   VAR_2->tg_pt_gp_members--;
   VAR_3->tg_pt_gp_assoc = 0;
  }
  FUNC_5(&VAR_2->tg_pt_gp_lock);
  VAR_3->tg_pt_gp = ((void*)0);
 }
 FUNC_5(&VAR_3->tg_pt_gp_mem_lock);

 FUNC_2(VAR_0, VAR_3);
}
