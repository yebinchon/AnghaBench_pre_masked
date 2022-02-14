
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct il_vif_priv {int dummy; } ;
struct il_station_priv {int dummy; } ;
struct il_priv {int mac80211_registered; struct ieee80211_hw* hw; TYPE_3__* bands; TYPE_1__* cfg; } ;
struct ieee80211_hw {char* rate_control_algorithm; int flags; int sta_data_size; int vif_data_size; int queues; TYPE_2__* wiphy; int max_listen_interval; } ;
struct TYPE_6__ {scalar_t__ n_channels; } ;
struct TYPE_5__ {int interface_modes; int flags; int max_scan_ie_len; TYPE_3__** bands; int max_scan_ssids; } ;
struct TYPE_4__ {int sku; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct il_priv*) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_19, u32 VAR_20)
{
 int VAR_21;
 struct ieee80211_hw *VAR_22 = VAR_19->hw;

 VAR_22->rate_control_algorithm = "iwl-4965-rs";


 VAR_22->flags =
     VAR_4 | VAR_2 |
     VAR_3 | VAR_5 |
     VAR_8 | VAR_6;
 if (VAR_19->cfg->sku & VAR_11)
  VAR_22->flags |=
      VAR_7 |
      VAR_9;

 VAR_22->sta_data_size = sizeof(struct il_station_priv);
 VAR_22->vif_data_size = sizeof(struct il_vif_priv);

 VAR_22->wiphy->interface_modes =
     FUNC_0(VAR_13) | FUNC_0(VAR_12);

 VAR_22->wiphy->flags |=
     VAR_15 | VAR_16 |
     VAR_17;





 VAR_22->wiphy->flags &= ~VAR_18;

 VAR_22->wiphy->max_scan_ssids = VAR_14;

 VAR_22->wiphy->max_scan_ie_len = VAR_20 - 24 - 2;


 VAR_22->queues = 4;

 VAR_22->max_listen_interval = VAR_10;

 if (VAR_19->bands[VAR_0].n_channels)
  VAR_19->hw->wiphy->bands[VAR_0] =
      &VAR_19->bands[VAR_0];
 if (VAR_19->bands[VAR_1].n_channels)
  VAR_19->hw->wiphy->bands[VAR_1] =
      &VAR_19->bands[VAR_1];

 FUNC_3(VAR_19);

 VAR_21 = FUNC_2(VAR_19->hw);
 if (VAR_21) {
  FUNC_1("Failed to register hw (error %d)\n", VAR_21);
  return VAR_21;
 }
 VAR_19->mac80211_registered = 1;

 return 0;
}
