
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_priv {TYPE_2__* hw; scalar_t__ mac80211_registered; struct dentry* debugfs_dir; } ;
struct TYPE_6__ {char* name; } ;
struct dentry {TYPE_3__ d_name; struct dentry* d_parent; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ,struct dentry*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 int FUNC_3 (char*,struct dentry*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct iwl_priv*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

int FUNC_6(struct iwl_priv *VAR_38, struct dentry *VAR_39)
{
 struct dentry *VAR_40, *VAR_41, *VAR_42;

 VAR_38->debugfs_dir = VAR_39;

 VAR_40 = FUNC_2("data", VAR_39);
 if (!VAR_40)
  goto err;
 VAR_41 = FUNC_2("rf", VAR_39);
 if (!VAR_41)
  goto err;
 VAR_42 = FUNC_2("debug", VAR_39);
 if (!VAR_42)
  goto err;

 FUNC_0(VAR_14, VAR_40, VAR_1);
 FUNC_0(VAR_26, VAR_40, VAR_2 | VAR_1);
 FUNC_0(VAR_37, VAR_40, VAR_1);
 FUNC_0(VAR_27, VAR_40, VAR_1);
 FUNC_0(VAR_6, VAR_40, VAR_1);
 FUNC_0(VAR_28, VAR_40, VAR_1);
 FUNC_0(VAR_21, VAR_40, VAR_2 | VAR_1);
 FUNC_0(VAR_18, VAR_40, VAR_1);
 FUNC_0(VAR_25, VAR_40, VAR_2 | VAR_1);
 FUNC_0(VAR_8, VAR_40, VAR_1);
 FUNC_0(VAR_30, VAR_40, VAR_1);
 FUNC_0(VAR_9, VAR_40, VAR_2 | VAR_1);
 FUNC_0(VAR_29, VAR_40, VAR_1);

 FUNC_0(VAR_16, VAR_42, VAR_1);
 FUNC_0(VAR_7, VAR_42, VAR_2);
 FUNC_0(VAR_13, VAR_42, VAR_2);
 FUNC_0(VAR_15, VAR_42, VAR_2 | VAR_1);
 FUNC_0(VAR_20, VAR_42, VAR_2 | VAR_1);
 FUNC_0(VAR_34, VAR_42, VAR_1);
 FUNC_0(VAR_36, VAR_42, VAR_1);
 FUNC_0(VAR_33, VAR_42, VAR_1);
 FUNC_0(VAR_31, VAR_42, VAR_2);
 FUNC_0(VAR_17, VAR_42, VAR_2 | VAR_1);
 FUNC_0(VAR_24, VAR_42, VAR_1);
 FUNC_0(VAR_5, VAR_42, VAR_1);
 FUNC_0(VAR_35, VAR_42, VAR_2 | VAR_1);
 FUNC_0(VAR_32, VAR_42, VAR_1);
 FUNC_0(VAR_19, VAR_42, VAR_1);
 FUNC_0(VAR_23, VAR_42, VAR_2);
 FUNC_0(VAR_22, VAR_42, VAR_2);
 FUNC_0(VAR_10, VAR_42, VAR_2);
 FUNC_0(VAR_11, VAR_42, VAR_2);




 if (FUNC_4(VAR_38))
  FUNC_0(VAR_3, VAR_42, VAR_1);


 FUNC_0(VAR_4, VAR_41, VAR_2 | VAR_1);







 if (VAR_38->mac80211_registered) {
  char VAR_43[100];
  struct dentry *VAR_44, *VAR_45, *VAR_46;

  VAR_45 = VAR_39->d_parent;
  VAR_46 = VAR_45->d_parent;
  VAR_44 = VAR_38->hw->wiphy->debugfsdir;

  FUNC_5(VAR_43, 100, "../../%s/%s", VAR_46->d_name.name,
    VAR_45->d_name.name);

  if (!FUNC_3("iwlwifi", VAR_44, VAR_43))
   goto err;
 }

 return 0;

err:
 FUNC_1(VAR_38, "failed to create the dvm debugfs entries\n");
 return -VAR_0;
}
