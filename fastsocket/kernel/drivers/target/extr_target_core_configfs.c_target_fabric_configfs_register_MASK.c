
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_fabric_configfs {int tf_subsys; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct target_fabric_configfs*) ;

int FUNC_3(
 struct target_fabric_configfs *VAR_1)
{
 int VAR_2;

 if (!VAR_1) {
  FUNC_1("Unable to locate target_fabric_configfs"
   " pointer\n");
  return -VAR_0;
 }
 if (!VAR_1->tf_subsys) {
  FUNC_1("Unable to target struct config_subsystem"
   " pointer\n");
  return -VAR_0;
 }
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0("<<<<<<<<<<<<<<<<<<<<<< END FABRIC API >>>>>>>>>>>>"
  ">>>>>>>>>>\n");
 return 0;
}
