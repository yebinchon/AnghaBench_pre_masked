
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iwl_nvm_data {int sku_cap_11n_enable; int valid_rx_ant; int valid_tx_ant; } ;
struct iwl_cfg {TYPE_1__* ht_params; scalar_t__ rx_with_siso_diversity; } ;
struct TYPE_5__ {int* rx_mask; int tx_params; int rx_highest; } ;
struct ieee80211_sta_ht_cap {int ht_supported; TYPE_2__ mcs; int cap; int ampdu_density; int ampdu_factor; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_6__ {scalar_t__ amsdu_size_8K; } ;
struct TYPE_4__ {int ht40_bands; scalar_t__ ht_greenfield_support; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_14 ;

void FUNC_4(const struct iwl_cfg *VAR_15,
     struct iwl_nvm_data *VAR_16,
     struct ieee80211_sta_ht_cap *VAR_17,
     enum ieee80211_band VAR_18)
{
 int VAR_19 = 0;
 u8 VAR_20;
 u8 VAR_21;

 VAR_21 = FUNC_3(VAR_16->valid_tx_ant);
 if (VAR_15->rx_with_siso_diversity)
  VAR_20 = 1;
 else
  VAR_20 = FUNC_3(VAR_16->valid_rx_ant);

 if (!(VAR_16->sku_cap_11n_enable) || !VAR_15->ht_params) {
  VAR_17->ht_supported = 0;
  return;
 }

 VAR_17->ht_supported = 1;
 VAR_17->cap = VAR_0;

 if (VAR_14.amsdu_size_8K)
  VAR_17->cap |= VAR_2;

 VAR_17->ampdu_factor = VAR_6;
 VAR_17->ampdu_density = VAR_11;

 VAR_17->mcs.rx_mask[0] = 0xFF;
 if (VAR_20 >= 2)
  VAR_17->mcs.rx_mask[1] = 0xFF;
 if (VAR_20 >= 3)
  VAR_17->mcs.rx_mask[2] = 0xFF;

 if (VAR_15->ht_params->ht_greenfield_support)
  VAR_17->cap |= VAR_1;
 VAR_17->cap |= VAR_3;

 VAR_19 = VAR_12;

 if (VAR_15->ht_params->ht40_bands & FUNC_0(VAR_18)) {
  VAR_17->cap |= VAR_5;
  VAR_17->cap |= VAR_4;
  VAR_17->mcs.rx_mask[4] = 0x01;
  VAR_19 = VAR_13;
 }


 VAR_19 *= VAR_20;
 FUNC_1(VAR_19 & ~VAR_7);
 VAR_17->mcs.rx_highest = FUNC_2(VAR_19);


 VAR_17->mcs.tx_params = VAR_8;
 if (VAR_21 != VAR_20) {
  VAR_17->mcs.tx_params |= VAR_10;
  VAR_17->mcs.tx_params |= ((VAR_21 - 1) <<
    VAR_9);
 }
}
