
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_type; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;

ssize_t FUNC_1(
 struct t10_alua_tg_pt_gp *VAR_2,
 char *VAR_3)
{
 if ((VAR_2->tg_pt_gp_alua_access_type & VAR_0) &&
     (VAR_2->tg_pt_gp_alua_access_type & VAR_1))
  return FUNC_0(VAR_3, "Implict and Explict\n");
 else if (VAR_2->tg_pt_gp_alua_access_type & VAR_1)
  return FUNC_0(VAR_3, "Implict\n");
 else if (VAR_2->tg_pt_gp_alua_access_type & VAR_0)
  return FUNC_0(VAR_3, "Explict\n");
 else
  return FUNC_0(VAR_3, "None\n");
}
