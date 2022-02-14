
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct config_group {struct config_item cg_item; } ;
struct t10_alua_lu_gp {struct config_group lu_gp_group; } ;


 scalar_t__ FUNC_0 (struct t10_alua_lu_gp*) ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 int FUNC_2 (struct config_item*) ;
 struct t10_alua_lu_gp* FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct config_group *FUNC_5(
 struct config_group *VAR_1,
 const char *VAR_2)
{
 struct t10_alua_lu_gp *VAR_3;
 struct config_group *VAR_4 = ((void*)0);
 struct config_item *VAR_5 = ((void*)0);

 VAR_3 = FUNC_3(VAR_2, 0);
 if (FUNC_0(VAR_3))
  return ((void*)0);

 VAR_4 = &VAR_3->lu_gp_group;
 VAR_5 = &VAR_4->cg_item;

 FUNC_1(VAR_4, VAR_2,
   &VAR_0);

 FUNC_4("Target_Core_ConfigFS: Allocated ALUA Logical Unit"
  " Group: core/alua/lu_gps/%s\n",
  FUNC_2(VAR_5));

 return VAR_4;

}
