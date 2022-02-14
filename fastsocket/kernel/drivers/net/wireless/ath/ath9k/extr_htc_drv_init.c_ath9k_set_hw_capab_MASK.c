
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_frame_hdr {int dummy; } ;
struct ieee80211_hw {int flags; int queues; int channel_change_time; int max_listen_interval; int vif_data_size; int sta_data_size; int extra_tx_headroom; TYPE_1__* wiphy; } ;
struct htc_frame_hdr {int dummy; } ;
struct ath_common {int macaddr; } ;
struct ath9k_htc_vif {int dummy; } ;
struct ath9k_htc_sta {int dummy; } ;
struct ath9k_htc_priv {TYPE_3__* sbands; TYPE_4__* ah; } ;
struct TYPE_6__ {int hw_caps; } ;
struct TYPE_8__ {TYPE_2__ caps; } ;
struct TYPE_7__ {int ht_cap; } ;
struct TYPE_5__ {int interface_modes; int n_iface_combinations; int flags; TYPE_3__** bands; int * iface_combinations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct ath_common* FUNC_2 (TYPE_4__*) ;
 int VAR_22 ;
 int FUNC_3 (struct ath9k_htc_priv*,int *) ;

__attribute__((used)) static void FUNC_4(struct ath9k_htc_priv *VAR_23,
          struct ieee80211_hw *VAR_24)
{
 struct ath_common *VAR_25 = FUNC_2(VAR_23->ah);

 VAR_24->flags = VAR_11 |
  VAR_5 |
  VAR_12 |
  VAR_6 |
  VAR_10 |
  VAR_13 |
  VAR_8 |
  VAR_9 |
  VAR_7;

 VAR_24->wiphy->interface_modes =
  FUNC_0(VAR_18) |
  FUNC_0(VAR_14) |
  FUNC_0(VAR_15) |
  FUNC_0(VAR_17) |
  FUNC_0(VAR_16);

 VAR_24->wiphy->iface_combinations = &VAR_22;
 VAR_24->wiphy->n_iface_combinations = 1;

 VAR_24->wiphy->flags &= ~VAR_21;

 VAR_24->wiphy->flags |= VAR_20 |
       VAR_19;

 VAR_24->queues = 4;
 VAR_24->channel_change_time = 5000;
 VAR_24->max_listen_interval = 1;

 VAR_24->vif_data_size = sizeof(struct ath9k_htc_vif);
 VAR_24->sta_data_size = sizeof(struct ath9k_htc_sta);


 VAR_24->extra_tx_headroom = sizeof(struct tx_frame_hdr) +
  sizeof(struct htc_frame_hdr) + 4;

 if (VAR_23->ah->caps.hw_caps & VAR_0)
  VAR_24->wiphy->bands[VAR_3] =
   &VAR_23->sbands[VAR_3];
 if (VAR_23->ah->caps.hw_caps & VAR_1)
  VAR_24->wiphy->bands[VAR_4] =
   &VAR_23->sbands[VAR_4];

 if (VAR_23->ah->caps.hw_caps & VAR_2) {
  if (VAR_23->ah->caps.hw_caps & VAR_0)
   FUNC_3(VAR_23,
         &VAR_23->sbands[VAR_3].ht_cap);
  if (VAR_23->ah->caps.hw_caps & VAR_1)
   FUNC_3(VAR_23,
         &VAR_23->sbands[VAR_4].ht_cap);
 }

 FUNC_1(VAR_24, VAR_25->macaddr);
}
