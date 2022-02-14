
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_fabric_configfs {int tf_name; int tf_list; int tf_subsys; struct module* tf_module; int tf_access_cnt; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct target_fabric_configfs* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct target_fabric_configfs* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int * VAR_6 ;
 int FUNC_11 (struct target_fabric_configfs*) ;

struct target_fabric_configfs *FUNC_12(
 struct module *VAR_7,
 const char *VAR_8)
{
 struct target_fabric_configfs *VAR_9;

 if (!(VAR_8)) {
  FUNC_8("Unable to locate passed fabric name\n");
  return FUNC_0(-VAR_0);
 }
 if (FUNC_10(VAR_8) >= VAR_3) {
  FUNC_8("Passed name: %s exceeds TARGET_FABRIC"
   "_NAME_SIZE\n", VAR_8);
  return FUNC_0(-VAR_0);
 }

 VAR_9 = FUNC_3(sizeof(struct target_fabric_configfs), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_9->tf_list);
 FUNC_2(&VAR_9->tf_access_cnt, 0);




 VAR_9->tf_module = VAR_7;
 FUNC_11(VAR_9);

 VAR_9->tf_subsys = VAR_6[0];
 FUNC_9(VAR_9->tf_name, VAR_3, "%s", VAR_8);

 FUNC_5(&VAR_5);
 FUNC_4(&VAR_9->tf_list, &VAR_4);
 FUNC_6(&VAR_5);

 FUNC_7("<<<<<<<<<<<<<<<<<<<<<< BEGIN FABRIC API >>>>>>>>"
   ">>>>>>>>>>>>>>\n");
 FUNC_7("Initialized struct target_fabric_configfs: %p for"
   " %s\n", VAR_9, VAR_9->tf_name);
 return VAR_9;
}
