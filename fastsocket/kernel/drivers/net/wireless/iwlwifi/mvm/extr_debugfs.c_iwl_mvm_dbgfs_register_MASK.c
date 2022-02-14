
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iwl_mvm {TYPE_6__* hw; struct dentry* debugfs_dir; } ;
struct dentry {TYPE_4__* d_parent; } ;
struct TYPE_12__ {TYPE_5__* wiphy; } ;
struct TYPE_11__ {int debugfsdir; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_10__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (int ,struct dentry*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_4(struct iwl_mvm *VAR_11, struct dentry *VAR_12)
{
 char VAR_13[100];

 VAR_11->debugfs_dir = VAR_12;

 FUNC_1(VAR_10, VAR_11->debugfs_dir, VAR_2);
 FUNC_1(VAR_8, VAR_11->debugfs_dir, VAR_2);
 FUNC_1(VAR_7, VAR_11->debugfs_dir, VAR_2 | VAR_1);
 FUNC_1(VAR_9, VAR_12, VAR_1);
 FUNC_1(VAR_3, VAR_12, VAR_1);
 FUNC_1(VAR_5, VAR_11->debugfs_dir, VAR_2);
 FUNC_1(VAR_6, VAR_11->debugfs_dir, VAR_2);
 FUNC_1(VAR_4, VAR_11->debugfs_dir, VAR_2);





 FUNC_3(VAR_13, 100, "../../%s/%s",
   VAR_12->d_parent->d_parent->d_name.name,
   VAR_12->d_parent->d_name.name);
 if (!FUNC_2("iwlwifi", VAR_11->hw->wiphy->debugfsdir, VAR_13))
  goto err;

 return 0;
err:
 FUNC_0(VAR_11, "Can't create the mvm debugfs directory\n");
 return -VAR_0;
}
