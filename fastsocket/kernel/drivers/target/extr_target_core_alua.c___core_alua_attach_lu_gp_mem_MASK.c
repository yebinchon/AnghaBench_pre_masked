
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_lu_gp_member {int lu_gp_assoc; int lu_gp_mem_list; struct t10_alua_lu_gp* lu_gp; } ;
struct t10_alua_lu_gp {int lu_gp_lock; int lu_gp_members; int lu_gp_mem_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
 struct t10_alua_lu_gp_member *VAR_0,
 struct t10_alua_lu_gp *VAR_1)
{
 FUNC_1(&VAR_1->lu_gp_lock);
 VAR_0->lu_gp = VAR_1;
 VAR_0->lu_gp_assoc = 1;
 FUNC_0(&VAR_0->lu_gp_mem_list, &VAR_1->lu_gp_mem_list);
 VAR_1->lu_gp_members++;
 FUNC_2(&VAR_1->lu_gp_lock);
}
