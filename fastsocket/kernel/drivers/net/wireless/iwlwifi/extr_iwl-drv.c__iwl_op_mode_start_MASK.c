
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwlwifi_opmode_table {int name; struct iwl_op_mode_ops* ops; } ;
struct iwl_op_mode_ops {struct iwl_op_mode* (* start ) (int ,int ,int *,struct dentry*) ;} ;
struct iwl_op_mode {int dummy; } ;
struct iwl_drv {struct dentry* dbgfs_op_mode; int fw; int cfg; int trans; int dbgfs_drv; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct iwl_drv*,char*) ;
 struct dentry* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dentry*) ;
 struct iwl_op_mode* FUNC_3 (int ,int ,int *,struct dentry*) ;

__attribute__((used)) static struct iwl_op_mode *
FUNC_4(struct iwl_drv *VAR_0, struct iwlwifi_opmode_table *VAR_1)
{
 const struct iwl_op_mode_ops *VAR_2 = VAR_1->ops;
 struct dentry *VAR_3 = ((void*)0);
 struct iwl_op_mode *VAR_4 = ((void*)0);
 VAR_4 = VAR_2->start(VAR_0->trans, VAR_0->cfg, &VAR_0->fw, VAR_3);
 return VAR_4;
}
