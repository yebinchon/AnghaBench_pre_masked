
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int bt_enable_pspoll; int mutex; TYPE_2__* cfg; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_rssi_event { ____Placeholder_ieee80211_rssi_event } ieee80211_rssi_event ;
struct TYPE_4__ {TYPE_1__* bt_params; } ;
struct TYPE_3__ {scalar_t__ advanced_bt_coexist; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3,
         enum ieee80211_rssi_event VAR_4)
{
 struct iwl_priv *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5, "enter\n");
 FUNC_3(&VAR_5->mutex);

 if (VAR_5->cfg->bt_params &&
   VAR_5->cfg->bt_params->advanced_bt_coexist) {
  if (VAR_4 == VAR_1)
   VAR_5->bt_enable_pspoll = 1;
  else if (VAR_4 == VAR_0)
   VAR_5->bt_enable_pspoll = 0;

  FUNC_2(VAR_5);
 } else {
  FUNC_0(VAR_5, "Advanced BT coex disabled,"
    "ignoring RSSI callback\n");
 }

 FUNC_4(&VAR_5->mutex);
 FUNC_0(VAR_5, "leave\n");
}
