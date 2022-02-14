
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int debugfs_phy; } ;
struct TYPE_10__ {int * txq_max_pending; } ;
struct ath_softc {TYPE_7__ debug; TYPE_5__* sc_ah; int rfs_chan_spec_scan; TYPE_3__ tx; TYPE_2__* hw; } ;
struct TYPE_13__ {int cwm_ignore_extcca; } ;
struct ath_hw {TYPE_6__ config; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_11__ {int enable_paprd; } ;
struct TYPE_12__ {int gpio_val; int gpio_mask; TYPE_4__ config; } ;
struct TYPE_9__ {TYPE_1__* wiphy; } ;
struct TYPE_8__ {int debugfsdir; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_softc*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,int ,struct ath_softc*,int *) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (char*,int ,int,int,int *,int *) ;
 int VAR_32 ;

int FUNC_7(struct ath_hw *VAR_33)
{
 struct ath_common *VAR_34 = FUNC_1(VAR_33);
 struct ath_softc *VAR_35 = (struct ath_softc *) VAR_34->priv;

 VAR_35->debug.debugfs_phy = FUNC_3("ath9k",
         VAR_35->hw->wiphy->debugfsdir);
 if (!VAR_35->debug.debugfs_phy)
  return -VAR_0;






 FUNC_0(VAR_35);

 FUNC_4("dma", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_12);
 FUNC_4("interrupt", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_14);
 FUNC_4("xmit", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_31);
 FUNC_4("queues", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_17);
 FUNC_5("qlen_bk", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
      &VAR_35->tx.txq_max_pending[VAR_2]);
 FUNC_5("qlen_be", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
      &VAR_35->tx.txq_max_pending[VAR_1]);
 FUNC_5("qlen_vi", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
      &VAR_35->tx.txq_max_pending[VAR_3]);
 FUNC_5("qlen_vo", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
      &VAR_35->tx.txq_max_pending[VAR_4]);
 FUNC_4("misc", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_15);
 FUNC_4("reset", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_22);
 FUNC_4("recv", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_18);
 FUNC_4("rx_chainmask", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_23);
 FUNC_4("tx_chainmask", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_30);
 FUNC_4("disable_ani", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_11);
 FUNC_2("paprd", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
       &VAR_35->sc_ah->config.enable_paprd);
 FUNC_4("regidx", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
       VAR_35, &VAR_20);
 FUNC_4("regval", VAR_5 | VAR_6, VAR_35->debug.debugfs_phy,
       VAR_35, &VAR_21);
 FUNC_2("ignore_extcca", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy,
       &VAR_33->config.cwm_ignore_extcca);
 FUNC_4("regdump", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_19);
 FUNC_4("dump_nfcal", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_13);
 FUNC_4("base_eeprom", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_8);
 FUNC_4("modal_eeprom", VAR_5, VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_16);
 VAR_35->rfs_chan_spec_scan = FUNC_6("spectral_scan",
         VAR_35->debug.debugfs_phy,
         1024, 256, &VAR_32,
         ((void*)0));
 FUNC_4("spectral_scan_ctl", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_25);
 FUNC_4("spectral_short_repeat", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_29);
 FUNC_4("spectral_count", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_26);
 FUNC_4("spectral_period", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_28);
 FUNC_4("spectral_fft_period", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35,
       &VAR_27);





 FUNC_5("gpio_mask", VAR_5 | VAR_6,
      VAR_35->debug.debugfs_phy, &VAR_35->sc_ah->gpio_mask);
 FUNC_5("gpio_val", VAR_5 | VAR_6,
      VAR_35->debug.debugfs_phy, &VAR_35->sc_ah->gpio_val);
 FUNC_4("diversity", VAR_5 | VAR_6,
       VAR_35->debug.debugfs_phy, VAR_35, &VAR_7);




 return 0;
}
