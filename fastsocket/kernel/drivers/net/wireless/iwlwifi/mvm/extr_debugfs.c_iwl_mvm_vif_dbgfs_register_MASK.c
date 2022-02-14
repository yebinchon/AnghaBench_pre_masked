
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct iwl_mvm_vif {int dbgfs_slink; TYPE_7__* dbgfs_dir; struct iwl_mvm* dbgfs_data; } ;
struct iwl_mvm {int debugfs_dir; } ;
struct ieee80211_vif {struct dentry* debugfs_dir; } ;
struct TYPE_14__ {char* name; } ;
struct dentry {TYPE_6__ d_name; TYPE_4__* d_parent; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_15__ {TYPE_5__ d_name; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_12__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_10__ {TYPE_1__ d_name; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (int ,TYPE_7__*,int ) ;
 int VAR_0 ;
 TYPE_7__* FUNC_2 (char*,struct dentry*) ;
 int FUNC_3 (char*,int ,char*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int VAR_1 ;
 int FUNC_5 (char*,int,char*,char*,char*,char*,char*) ;

void FUNC_6(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->debugfs_dir;
 struct iwl_mvm_vif *VAR_5 = FUNC_4(VAR_3);
 char VAR_6[100];

 if (!VAR_4)
  return;

 VAR_5->dbgfs_dir = FUNC_2("iwlmvm", VAR_4);
 VAR_5->dbgfs_data = VAR_2;

 if (!VAR_5->dbgfs_dir) {
  FUNC_0(VAR_2, "Failed to create debugfs directory under %s\n",
   VAR_4->d_name.name);
  return;
 }

 FUNC_1(VAR_1, VAR_5->dbgfs_dir,
     VAR_0);
 FUNC_5(VAR_6, 100, "../../../%s/%s/%s/%s",
   VAR_4->d_parent->d_parent->d_name.name,
   VAR_4->d_parent->d_name.name,
   VAR_4->d_name.name,
   VAR_5->dbgfs_dir->d_name.name);

 VAR_5->dbgfs_slink = FUNC_3(VAR_4->d_name.name,
           VAR_2->debugfs_dir, VAR_6);
 if (!VAR_5->dbgfs_slink)
  FUNC_0(VAR_2, "Can't create debugfs symbolic link under %s\n",
   VAR_4->d_name.name);
 return;
err:
 FUNC_0(VAR_2, "Can't create debugfs entity\n");
}
