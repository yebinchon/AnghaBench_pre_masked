
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_6__ {int debugfs_phy; } ;
struct ath9k_htc_priv {TYPE_3__ debug; TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int debugfsdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,int ,struct ath9k_htc_priv*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_3(struct ath_hw *VAR_14)
{
 struct ath_common *VAR_15 = FUNC_0(VAR_14);
 struct ath9k_htc_priv *VAR_16 = (struct ath9k_htc_priv *) VAR_15->priv;

 VAR_16->debug.debugfs_phy = FUNC_1(VAR_1,
          VAR_16->hw->wiphy->debugfsdir);
 if (!VAR_16->debug.debugfs_phy)
  return -VAR_0;

 FUNC_2("tgt_int_stats", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_10);
 FUNC_2("tgt_tx_stats", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_12);
 FUNC_2("tgt_rx_stats", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_11);
 FUNC_2("xmit", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_13);
 FUNC_2("recv", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_8);
 FUNC_2("slot", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_9);
 FUNC_2("queue", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_7);
 FUNC_2("debug", VAR_2 | VAR_3, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_5);
 FUNC_2("base_eeprom", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_4);
 FUNC_2("modal_eeprom", VAR_2, VAR_16->debug.debugfs_phy,
       VAR_16, &VAR_6);

 return 0;
}
