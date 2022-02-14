
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct config_item {int dummy; } ;
struct config_group {struct config_group** default_groups; struct config_item cg_item; } ;
struct t10_alua_tg_pt_gp {struct config_group tg_pt_gp_group; } ;
struct se_subsystem_api {int dummy; } ;
struct se_hba {int hba_access_mutex; struct se_subsystem_api* transport; } ;
struct TYPE_8__ {struct config_group stat_group; } ;
struct TYPE_7__ {struct config_group alua_tg_pt_gps_group; struct t10_alua_tg_pt_gp* default_tg_pt_gp; } ;
struct TYPE_6__ {struct config_group t10_wwn_group; } ;
struct TYPE_5__ {struct config_group da_group; } ;
struct se_device {TYPE_4__ dev_stat_grps; TYPE_3__ t10_alua; TYPE_2__ t10_wwn; struct config_group dev_pr_group; TYPE_1__ dev_attrib; struct config_group dev_group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 struct t10_alua_tg_pt_gp* FUNC_2 (struct se_device*,char*,int) ;
 int FUNC_3 (struct t10_alua_tg_pt_gp*) ;
 struct se_hba* FUNC_4 (struct config_item*) ;
 int FUNC_5 (struct config_group**) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 struct se_device* FUNC_10 (struct se_hba*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct se_device*) ;
 int FUNC_12 (struct se_device*) ;

__attribute__((used)) static struct config_group *FUNC_13(
 struct config_group *VAR_9,
 const char *VAR_10)
{
 struct t10_alua_tg_pt_gp *VAR_11;
 struct se_subsystem_api *VAR_12;
 struct config_item *VAR_13 = &VAR_9->cg_item;
 struct se_hba *VAR_14 = FUNC_4(VAR_13);
 struct se_device *VAR_15;
 struct config_group *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 struct config_group *VAR_18 = ((void*)0);
 int VAR_19 = -VAR_0, VAR_20;

 VAR_20 = FUNC_7(&VAR_14->hba_access_mutex);
 if (VAR_20)
  return FUNC_0(VAR_20);



 VAR_12 = VAR_14->transport;

 VAR_15 = FUNC_10(VAR_14, VAR_10);
 if (!VAR_15)
  goto out_unlock;

 VAR_16 = &VAR_15->dev_group;

 VAR_16->default_groups = FUNC_6(sizeof(struct config_group *) * 6,
   VAR_1);
 if (!VAR_16->default_groups)
  goto out_free_device;

 FUNC_1(VAR_16, VAR_10, &VAR_5);
 FUNC_1(&VAR_15->dev_attrib.da_group, "attrib",
   &VAR_4);
 FUNC_1(&VAR_15->dev_pr_group, "pr",
   &VAR_6);
 FUNC_1(&VAR_15->t10_wwn.t10_wwn_group, "wwn",
   &VAR_7);
 FUNC_1(&VAR_15->t10_alua.alua_tg_pt_gps_group,
   "alua", &VAR_3);
 FUNC_1(&VAR_15->dev_stat_grps.stat_group,
   "statistics", &VAR_8);

 VAR_16->default_groups[0] = &VAR_15->dev_attrib.da_group;
 VAR_16->default_groups[1] = &VAR_15->dev_pr_group;
 VAR_16->default_groups[2] = &VAR_15->t10_wwn.t10_wwn_group;
 VAR_16->default_groups[3] = &VAR_15->t10_alua.alua_tg_pt_gps_group;
 VAR_16->default_groups[4] = &VAR_15->dev_stat_grps.stat_group;
 VAR_16->default_groups[5] = ((void*)0);



 VAR_11 = FUNC_2(VAR_15, "default_tg_pt_gp", 1);
 if (!VAR_11)
  goto out_free_dev_cg_default_groups;
 VAR_15->t10_alua.default_tg_pt_gp = VAR_11;

 VAR_17 = &VAR_15->t10_alua.alua_tg_pt_gps_group;
 VAR_17->default_groups = FUNC_6(sizeof(struct config_group *) * 2,
    VAR_1);
 if (!VAR_17->default_groups) {
  FUNC_9("Unable to allocate tg_pt_gp_cg->"
    "default_groups\n");
  goto out_free_tg_pt_gp;
 }

 FUNC_1(&VAR_11->tg_pt_gp_group,
   "default_tg_pt_gp", &VAR_2);
 VAR_17->default_groups[0] = &VAR_11->tg_pt_gp_group;
 VAR_17->default_groups[1] = ((void*)0);



 VAR_18 = &VAR_15->dev_stat_grps.stat_group;
 VAR_18->default_groups = FUNC_6(sizeof(struct config_group *) * 4,
    VAR_1);
 if (!VAR_18->default_groups) {
  FUNC_9("Unable to allocate dev_stat_grp->default_groups\n");
  goto out_free_tg_pt_gp_cg_default_groups;
 }
 FUNC_12(VAR_15);

 FUNC_8(&VAR_14->hba_access_mutex);
 return VAR_16;

out_free_tg_pt_gp_cg_default_groups:
 FUNC_5(VAR_17->default_groups);
out_free_tg_pt_gp:
 FUNC_3(VAR_11);
out_free_dev_cg_default_groups:
 FUNC_5(VAR_16->default_groups);
out_free_device:
 FUNC_11(VAR_15);
out_unlock:
 FUNC_8(&VAR_14->hba_access_mutex);
 return FUNC_0(VAR_19);
}
