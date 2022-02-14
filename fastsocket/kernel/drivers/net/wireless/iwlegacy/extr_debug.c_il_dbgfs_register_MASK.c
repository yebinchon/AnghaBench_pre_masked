
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_priv {int disable_tx_power_cal; int disable_chain_noise_cal; TYPE_3__* cfg; int disable_sens_cal; struct dentry* debugfs_dir; TYPE_2__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {scalar_t__ chain_noise_calib_by_driver; scalar_t__ sensitivity_calib_by_driver; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ,struct dentry*,int *) ;
 int FUNC_1 (int ,struct dentry*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_3 (char const*,struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct il_priv*) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

int
FUNC_5(struct il_priv *VAR_32, const char *VAR_33)
{
 struct dentry *VAR_34 = VAR_32->hw->wiphy->debugfsdir;
 struct dentry *VAR_35, *VAR_36, *VAR_37, *VAR_38;

 VAR_35 = FUNC_3(VAR_33, VAR_34);
 if (!VAR_35)
  return -VAR_0;

 VAR_32->debugfs_dir = VAR_35;

 VAR_36 = FUNC_3("data", VAR_35);
 if (!VAR_36)
  goto err;
 VAR_37 = FUNC_3("rf", VAR_35);
 if (!VAR_37)
  goto err;
 VAR_38 = FUNC_3("debug", VAR_35);
 if (!VAR_38)
  goto err;

 FUNC_1(VAR_15, VAR_36, VAR_1);
 FUNC_1(VAR_23, VAR_36, VAR_2 | VAR_1);
 FUNC_1(VAR_24, VAR_36, VAR_1);
 FUNC_1(VAR_4, VAR_36, VAR_1);
 FUNC_1(VAR_25, VAR_36, VAR_1);
 FUNC_1(VAR_13, VAR_36, VAR_2 | VAR_1);
 FUNC_1(VAR_17, VAR_36, VAR_1);
 FUNC_1(VAR_8, VAR_36, VAR_2 | VAR_1);
 FUNC_1(VAR_19, VAR_38, VAR_1);
 FUNC_1(VAR_27, VAR_38, VAR_1);
 FUNC_1(VAR_18, VAR_38, VAR_1);
 FUNC_1(VAR_26, VAR_38, VAR_1);
 FUNC_1(VAR_16, VAR_38, VAR_1);
 FUNC_1(VAR_6, VAR_38, VAR_2);
 FUNC_1(VAR_5, VAR_38, VAR_2);
 FUNC_1(VAR_11, VAR_38, VAR_1);
 FUNC_1(VAR_14, VAR_38, VAR_2);
 FUNC_1(VAR_12, VAR_38, VAR_2 | VAR_1);
 FUNC_1(VAR_29, VAR_38, VAR_1);
 FUNC_1(VAR_30, VAR_38, VAR_1);
 FUNC_1(VAR_28, VAR_38, VAR_1);

 if (VAR_32->cfg->sensitivity_calib_by_driver)
  FUNC_1(VAR_22, VAR_38, VAR_1);
 if (VAR_32->cfg->chain_noise_calib_by_driver)
  FUNC_1(VAR_3, VAR_38, VAR_1);
 FUNC_1(VAR_21, VAR_38, VAR_2);
 FUNC_1(VAR_20, VAR_38, VAR_2);
 FUNC_1(VAR_31, VAR_38, VAR_2);
 if (VAR_32->cfg->sensitivity_calib_by_driver)
  FUNC_0(VAR_9, VAR_37,
     &VAR_32->disable_sens_cal);
 if (VAR_32->cfg->chain_noise_calib_by_driver)
  FUNC_0(VAR_7, VAR_37,
     &VAR_32->disable_chain_noise_cal);
 FUNC_0(VAR_10, VAR_37, &VAR_32->disable_tx_power_cal);
 return 0;

err:
 FUNC_2("Can't create the debugfs directory\n");
 FUNC_4(VAR_32);
 return -VAR_0;
}
