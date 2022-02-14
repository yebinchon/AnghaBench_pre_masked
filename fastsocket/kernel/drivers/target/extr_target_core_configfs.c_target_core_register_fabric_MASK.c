
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* ci_name; } ;
struct config_group {TYPE_2__ cg_item; struct config_group** default_groups; } ;
struct TYPE_4__ {int tf_subsys; } ;
struct target_fabric_configfs {char const* tf_name; struct config_group tf_group; TYPE_2__* tf_fabric; int tf_subsys; TYPE_1__ tf_ops; struct config_group tf_disc_group; struct config_group** tf_default_groups; } ;
struct TYPE_6__ {char const tfc_wwn_cit; char const tfc_discovery_cit; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct target_fabric_configfs*) ;
 int FUNC_2 (struct config_group*,char const*,char const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int) ;
 struct target_fabric_configfs* FUNC_7 (char const*) ;

__attribute__((used)) static struct config_group *FUNC_8(
 struct config_group *VAR_1,
 const char *VAR_2)
{
 struct target_fabric_configfs *VAR_3;
 int VAR_4;

 FUNC_3("Target_Core_ConfigFS: REGISTER -> group: %p name:"
   " %s\n", VAR_1, VAR_2);
 if (!FUNC_6(VAR_2, "iscsi", 5)) {






  VAR_4 = FUNC_5("iscsi_target_mod");
  if (VAR_4 < 0) {
   FUNC_4("request_module() failed for"
    " iscsi_target_mod.ko: %d\n", VAR_4);
   return FUNC_0(-VAR_0);
  }
 } else if (!FUNC_6(VAR_2, "loopback", 8)) {






  VAR_4 = FUNC_5("tcm_loop");
  if (VAR_4 < 0) {
   FUNC_4("request_module() failed for"
    " tcm_loop.ko: %d\n", VAR_4);
   return FUNC_0(-VAR_0);
  }
 }

 VAR_3 = FUNC_7(VAR_2);
 if (!VAR_3) {
  FUNC_4("target_core_get_fabric() failed for %s\n",
   VAR_2);
  return FUNC_0(-VAR_0);
 }
 FUNC_3("Target_Core_ConfigFS: REGISTER -> Located fabric:"
   " %s\n", VAR_3->tf_name);




 FUNC_3("Target_Core_ConfigFS: REGISTER tfc_wwn_cit -> %p\n",
   &FUNC_1(VAR_3)->tfc_wwn_cit);

 VAR_3->tf_group.default_groups = VAR_3->tf_default_groups;
 VAR_3->tf_group.default_groups[0] = &VAR_3->tf_disc_group;
 VAR_3->tf_group.default_groups[1] = ((void*)0);

 FUNC_2(&VAR_3->tf_group, VAR_2,
   &FUNC_1(VAR_3)->tfc_wwn_cit);
 FUNC_2(&VAR_3->tf_disc_group, "discovery_auth",
   &FUNC_1(VAR_3)->tfc_discovery_cit);

 FUNC_3("Target_Core_ConfigFS: REGISTER -> Allocated Fabric:"
   " %s\n", VAR_3->tf_group.cg_item.ci_name);



 VAR_3->tf_ops.tf_subsys = VAR_3->tf_subsys;
 VAR_3->tf_fabric = &VAR_3->tf_group.cg_item;
 FUNC_3("Target_Core_ConfigFS: REGISTER -> Set tf->tf_fabric"
   " for %s\n", VAR_2);

 return &VAR_3->tf_group;
}
