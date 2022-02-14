
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_fabric_configfs {struct configfs_subsystem* tf_subsys; int * tf_module; int tf_name; int tf_list; int tf_access_cnt; } ;
struct configfs_subsystem {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct target_fabric_configfs*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(
 struct target_fabric_configfs *VAR_1)
{
 struct configfs_subsystem *VAR_2;

 if (!VAR_1) {
  FUNC_7("Unable to locate passed target_fabric_"
   "configfs\n");
  return;
 }
 VAR_2 = VAR_1->tf_subsys;
 if (!VAR_2) {
  FUNC_7("Unable to locate passed tf->tf_subsys"
   " pointer\n");
  return;
 }
 FUNC_6("<<<<<<<<<<<<<<<<<<<<<< BEGIN FABRIC API >>>>>>>>>>"
   ">>>>>>>>>>>>\n");
 FUNC_4(&VAR_0);
 if (FUNC_1(&VAR_1->tf_access_cnt)) {
  FUNC_5(&VAR_0);
  FUNC_7("Non zero tf->tf_access_cnt for fabric %s\n",
   VAR_1->tf_name);
  FUNC_0();
 }
 FUNC_3(&VAR_1->tf_list);
 FUNC_5(&VAR_0);

 FUNC_6("Target_Core_ConfigFS: DEREGISTER -> Releasing tf:"
   " %s\n", VAR_1->tf_name);
 VAR_1->tf_module = ((void*)0);
 VAR_1->tf_subsys = ((void*)0);
 FUNC_2(VAR_1);

 FUNC_6("<<<<<<<<<<<<<<<<<<<<<< END FABRIC API >>>>>>>>>>>>>>>>>"
   ">>>>>\n");
}
