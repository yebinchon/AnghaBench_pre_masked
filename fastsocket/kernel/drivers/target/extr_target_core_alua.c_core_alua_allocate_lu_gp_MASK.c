
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_lu_gp {int lu_gp_valid_id; scalar_t__ lu_gp_id; int lu_gp_ref_cnt; int lu_gp_lock; int lu_gp_mem_list; int lu_gp_node; } ;


 int VAR_0 ;
 struct t10_alua_lu_gp* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 struct t10_alua_lu_gp* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

struct t10_alua_lu_gp *
FUNC_6(const char *VAR_5, int VAR_6)
{
 struct t10_alua_lu_gp *VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_1);
 if (!VAR_7) {
  FUNC_4("Unable to allocate struct t10_alua_lu_gp\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_7->lu_gp_node);
 FUNC_1(&VAR_7->lu_gp_mem_list);
 FUNC_5(&VAR_7->lu_gp_lock);
 FUNC_2(&VAR_7->lu_gp_ref_cnt, 0);

 if (VAR_6) {
  VAR_7->lu_gp_id = VAR_3++;
  VAR_7->lu_gp_valid_id = 1;
  VAR_2++;
 }

 return VAR_7;
}
