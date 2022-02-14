
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {int flags; int extra_tx_headroom; int channel_change_time; int max_rates; int vif_data_size; int max_rate_tries; TYPE_1__* wiphy; } ;
struct ath_common {int clockrate; int cachelsz; int cc_lock; struct ath5k_hw* priv; struct ieee80211_hw* hw; struct ath5k_hw* ah; struct ath_bus_ops const* bus_ops; int * ops; } ;
struct ath_bus_ops {int dummy; } ;
struct ath5k_vif {int dummy; } ;
struct TYPE_4__ {int cap_mode; scalar_t__ cap_has_mrr_support; } ;
struct ath5k_hw {int bintval; int irq; int status; scalar_t__ ah_radio_2ghz_revision; scalar_t__ ah_radio_5ghz_revision; TYPE_2__ ah_capabilities; int ah_single_chip; int ah_phy_revision; scalar_t__ ah_mac_srev; int irqlock; int block; int txbuflock; int rxbuflock; int lock; int opmode; int dev; struct ieee80211_hw* hw; } ;
struct TYPE_3__ {int interface_modes; int n_iface_combinations; int available_antennas_tx; int available_antennas_rx; int flags; int * iface_combinations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,char*) ;
 int FUNC_1 (struct ath5k_hw*,char*,int ,scalar_t__,...) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int VAR_17 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int VAR_18 ;
 int FUNC_7 (struct ath5k_hw*) ;
 struct ath_common* FUNC_8 (struct ath5k_hw*) ;
 int FUNC_9 (struct ath5k_hw*) ;
 int FUNC_10 (struct ath5k_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int VAR_19 ;
 int FUNC_12 (struct ath_common*,int*) ;
 int FUNC_13 (int ,struct ath5k_hw*) ;
 int VAR_20 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int ,char*,struct ath5k_hw*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;

int
FUNC_19(struct ath5k_hw *VAR_21, const struct ath_bus_ops *VAR_22)
{
 struct ieee80211_hw *VAR_23 = VAR_21->hw;
 struct ath_common *VAR_24;
 int VAR_25;
 int VAR_26;


 FUNC_3(VAR_23, VAR_21->dev);
 VAR_23->flags = VAR_10 |
   VAR_7 |
   VAR_11 |
   VAR_8 |
   VAR_9;

 VAR_23->wiphy->interface_modes =
  FUNC_2(VAR_14) |
  FUNC_2(VAR_16) |
  FUNC_2(VAR_13) |
  FUNC_2(VAR_15);

 VAR_23->wiphy->iface_combinations = &VAR_20;
 VAR_23->wiphy->n_iface_combinations = 1;


 VAR_23->wiphy->flags |= VAR_17;


 VAR_23->wiphy->available_antennas_tx = 0x3;
 VAR_23->wiphy->available_antennas_rx = 0x3;

 VAR_23->extra_tx_headroom = 2;
 VAR_23->channel_change_time = 5000;





 FUNC_5(VAR_6, VAR_21->status);

 VAR_21->opmode = VAR_16;
 VAR_21->bintval = 1000;
 FUNC_15(&VAR_21->lock);
 FUNC_17(&VAR_21->rxbuflock);
 FUNC_17(&VAR_21->txbuflock);
 FUNC_17(&VAR_21->block);
 FUNC_17(&VAR_21->irqlock);


 VAR_25 = FUNC_16(VAR_21->irq, VAR_19, VAR_12, "ath", VAR_21);
 if (VAR_25) {
  FUNC_0(VAR_21, "request_irq failed\n");
  goto err;
 }

 VAR_24 = FUNC_8(VAR_21);
 VAR_24->ops = &VAR_18;
 VAR_24->bus_ops = VAR_22;
 VAR_24->ah = VAR_21;
 VAR_24->hw = VAR_23;
 VAR_24->priv = VAR_21;
 VAR_24->clockrate = 40;





 FUNC_12(VAR_24, &VAR_26);
 VAR_24->cachelsz = VAR_26 << 2;

 FUNC_17(&VAR_24->cc_lock);


 VAR_25 = FUNC_10(VAR_21);
 if (VAR_25)
  goto err_irq;


 if (VAR_21->ah_capabilities.cap_has_mrr_support) {
  VAR_23->max_rates = 4;
  VAR_23->max_rate_tries = FUNC_14(VAR_1,
      VAR_0);
 }

 VAR_23->vif_data_size = sizeof(struct ath5k_vif);


 VAR_25 = FUNC_11(VAR_23);
 if (VAR_25)
  goto err_ah;

 FUNC_1(VAR_21, "Atheros AR%s chip found (MAC: 0x%x, PHY: 0x%x)\n",
   FUNC_6(VAR_4, VAR_21->ah_mac_srev),
     VAR_21->ah_mac_srev,
     VAR_21->ah_phy_revision);

 if (!VAR_21->ah_single_chip) {

  if (VAR_21->ah_radio_5ghz_revision &&
   !VAR_21->ah_radio_2ghz_revision) {

   if (!FUNC_18(VAR_2,
    VAR_21->ah_capabilities.cap_mode)) {
    FUNC_1(VAR_21, "RF%s 2GHz radio found (0x%x)\n",
     FUNC_6(VAR_5,
      VAR_21->ah_radio_5ghz_revision),
      VAR_21->ah_radio_5ghz_revision);


   } else if (!FUNC_18(VAR_3,
    VAR_21->ah_capabilities.cap_mode)) {
    FUNC_1(VAR_21, "RF%s 5GHz radio found (0x%x)\n",
     FUNC_6(VAR_5,
      VAR_21->ah_radio_5ghz_revision),
      VAR_21->ah_radio_5ghz_revision);

   } else {
    FUNC_1(VAR_21, "RF%s multiband radio found"
     " (0x%x)\n",
     FUNC_6(VAR_5,
      VAR_21->ah_radio_5ghz_revision),
      VAR_21->ah_radio_5ghz_revision);
   }
  }


  else if (VAR_21->ah_radio_5ghz_revision &&
    VAR_21->ah_radio_2ghz_revision) {
   FUNC_1(VAR_21, "RF%s 5GHz radio found (0x%x)\n",
    FUNC_6(VAR_5,
     VAR_21->ah_radio_5ghz_revision),
     VAR_21->ah_radio_5ghz_revision);
   FUNC_1(VAR_21, "RF%s 2GHz radio found (0x%x)\n",
    FUNC_6(VAR_5,
     VAR_21->ah_radio_2ghz_revision),
     VAR_21->ah_radio_2ghz_revision);
  }
 }

 FUNC_7(VAR_21);


 FUNC_4(VAR_6, VAR_21->status);

 return 0;
err_ah:
 FUNC_9(VAR_21);
err_irq:
 FUNC_13(VAR_21->irq, VAR_21);
err:
 return VAR_25;
}
