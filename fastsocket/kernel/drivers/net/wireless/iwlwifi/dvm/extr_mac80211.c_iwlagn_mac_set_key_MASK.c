
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_vif_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_rxon_context {int key_mapping_keys; } ;
struct iwl_priv {int mutex; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int cipher; int flags; scalar_t__ hw_key_idx; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {scalar_t__ sw_crypto; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_key_conf*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_key_conf*,struct ieee80211_sta*) ;
 int FUNC_5 (struct iwl_priv*,int) ;
 int FUNC_6 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_key_conf*) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_key_conf*,struct ieee80211_sta*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_11, enum set_key_cmd VAR_12,
         struct ieee80211_vif *VAR_13,
         struct ieee80211_sta *VAR_14,
         struct ieee80211_key_conf *VAR_15)
{
 struct iwl_priv *VAR_16 = FUNC_2(VAR_11);
 struct iwl_vif_priv *VAR_17 = (void *)VAR_13->drv_priv;
 struct iwl_rxon_context *VAR_18 = VAR_17->ctx;
 int VAR_19;
 bool VAR_20 = 0;

 FUNC_1(VAR_16, "enter\n");

 if (VAR_10.sw_crypto) {
  FUNC_1(VAR_16, "leave - hwcrypto disabled\n");
  return -VAR_1;
 }

 switch (VAR_15->cipher) {
 case 128:
  VAR_15->flags |= VAR_3;

 case 129:
  VAR_15->flags |= VAR_2;
  break;
 default:
  break;
 }
 if (VAR_13->type == VAR_6 &&
     !(VAR_15->flags & VAR_4)) {
  VAR_15->hw_key_idx = VAR_7;
  return 0;
 }


 if (VAR_12 == 131 && VAR_15->hw_key_idx == VAR_7)
  return 0;

 FUNC_8(&VAR_16->mutex);
 FUNC_5(VAR_16, 100);

 FUNC_0(VAR_7 == VAR_5);







 if ((VAR_15->cipher == VAR_9 ||
      VAR_15->cipher == VAR_8) && !VAR_14) {
  if (VAR_12 == 130)
   VAR_20 = !VAR_18->key_mapping_keys;
  else
   VAR_20 =
    VAR_15->hw_key_idx == VAR_5;
 }


 switch (VAR_12) {
 case 130:
  if (VAR_20) {
   VAR_19 = FUNC_6(VAR_16, VAR_17->ctx, VAR_15);
   break;
  }
  VAR_19 = FUNC_7(VAR_16, VAR_17->ctx, VAR_15, VAR_14);
  if (VAR_19) {




   VAR_19 = 0;
   VAR_15->hw_key_idx = VAR_7;
  }

  FUNC_1(VAR_16, "enable hwcrypto key\n");
  break;
 case 131:
  if (VAR_20)
   VAR_19 = FUNC_3(VAR_16, VAR_18, VAR_15);
  else
   VAR_19 = FUNC_4(VAR_16, VAR_18, VAR_15, VAR_14);

  FUNC_1(VAR_16, "disable hwcrypto key\n");
  break;
 default:
  VAR_19 = -VAR_0;
 }

 FUNC_9(&VAR_16->mutex);
 FUNC_1(VAR_16, "leave\n");

 return VAR_19;
}
