
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp_member {scalar_t__ tg_pt_gp_assoc; int * tg_pt_gp; int tg_pt_gp_mem_list; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_lock; int tg_pt_gp_members; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
 struct t10_alua_tg_pt_gp_member *VAR_0,
 struct t10_alua_tg_pt_gp *VAR_1)
{
 FUNC_1(&VAR_1->tg_pt_gp_lock);
 FUNC_0(&VAR_0->tg_pt_gp_mem_list);
 VAR_0->tg_pt_gp = ((void*)0);
 VAR_0->tg_pt_gp_assoc = 0;
 VAR_1->tg_pt_gp_members--;
 FUNC_2(&VAR_1->tg_pt_gp_lock);
}
