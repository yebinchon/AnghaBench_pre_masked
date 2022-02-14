
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_vif_priv {int dummy; } ;
struct il_priv {int mac80211_registered; struct ieee80211_hw* hw; TYPE_2__* bands; } ;
struct il3945_sta_priv {int dummy; } ;
struct ieee80211_hw {char* rate_control_algorithm; int sta_data_size; int vif_data_size; int flags; int queues; TYPE_1__* wiphy; } ;
struct TYPE_4__ {scalar_t__ n_channels; } ;
struct TYPE_3__ {int interface_modes; int flags; int max_scan_ie_len; TYPE_2__** bands; int max_scan_ssids; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct il_priv*) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_14)
{
 int VAR_15;
 struct ieee80211_hw *VAR_16 = VAR_14->hw;

 VAR_16->rate_control_algorithm = "iwl-3945-rs";
 VAR_16->sta_data_size = sizeof(struct il3945_sta_priv);
 VAR_16->vif_data_size = sizeof(struct il_vif_priv);


 VAR_16->flags = VAR_2 | VAR_3 |
      VAR_5 | VAR_4;

 VAR_16->wiphy->interface_modes =
     FUNC_0(VAR_8) | FUNC_0(VAR_7);

 VAR_16->wiphy->flags |=
     VAR_10 | VAR_11 |
     VAR_12;

 VAR_16->wiphy->flags &= ~VAR_13;

 VAR_16->wiphy->max_scan_ssids = VAR_9;

 VAR_16->wiphy->max_scan_ie_len = VAR_6 - 24 - 2;


 VAR_16->queues = 4;

 if (VAR_14->bands[VAR_0].n_channels)
  VAR_14->hw->wiphy->bands[VAR_0] =
      &VAR_14->bands[VAR_0];

 if (VAR_14->bands[VAR_1].n_channels)
  VAR_14->hw->wiphy->bands[VAR_1] =
      &VAR_14->bands[VAR_1];

 FUNC_3(VAR_14);

 VAR_15 = FUNC_2(VAR_14->hw);
 if (VAR_15) {
  FUNC_1("Failed to register hw (error %d)\n", VAR_15);
  return VAR_15;
 }
 VAR_14->mac80211_registered = 1;

 return 0;
}
