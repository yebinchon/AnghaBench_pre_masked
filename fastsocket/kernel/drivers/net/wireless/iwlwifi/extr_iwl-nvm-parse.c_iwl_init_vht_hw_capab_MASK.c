
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_nvm_data {int valid_rx_ant; } ;
struct iwl_cfg {scalar_t__ rx_with_siso_diversity; } ;
struct TYPE_3__ {int rx_mcs_map; int tx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int cap; TYPE_1__ vht_mcs; } ;
struct TYPE_4__ {scalar_t__ amsdu_size_8K; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static void FUNC_1(const struct iwl_cfg *VAR_10,
      struct iwl_nvm_data *VAR_11,
      struct ieee80211_sta_vht_cap *VAR_12)
{


 VAR_12->vht_supported = 1;

 VAR_12->cap = VAR_4 |
         VAR_2 |
         VAR_5 |
         7 << VAR_0;

 if (VAR_9.amsdu_size_8K)
  VAR_12->cap |= VAR_1;

 VAR_12->vht_mcs.rx_mcs_map =
  FUNC_0(VAR_8 << 0 |
       VAR_8 << 2 |
       VAR_7 << 4 |
       VAR_7 << 6 |
       VAR_7 << 8 |
       VAR_7 << 10 |
       VAR_7 << 12 |
       VAR_7 << 14);

 if (VAR_11->valid_rx_ant == 1 || VAR_10->rx_with_siso_diversity) {
  VAR_12->cap |= VAR_3 |
    VAR_6;

  VAR_12->vht_mcs.rx_mcs_map |=
   FUNC_0(VAR_7 << 2);
 }

 VAR_12->vht_mcs.tx_mcs_map = VAR_12->vht_mcs.rx_mcs_map;
}
