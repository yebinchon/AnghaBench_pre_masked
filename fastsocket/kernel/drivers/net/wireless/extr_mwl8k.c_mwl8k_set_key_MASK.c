
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwl8k_vif {int is_hw_crypto_enabled; } ;
struct mwl8k_priv {int ap_fw; } ;
struct ieee80211_vif {scalar_t__ type; int * addr; } ;
struct ieee80211_sta {int * addr; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,int *,struct ieee80211_key_conf*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*,int *,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_7,
    enum set_key_cmd VAR_8,
    struct ieee80211_vif *VAR_9,
    struct ieee80211_sta *VAR_10,
    struct ieee80211_key_conf *VAR_11)
{
 int VAR_12 = 0;
 u8 VAR_13;
 u8 *VAR_14;
 struct mwl8k_vif *VAR_15 = FUNC_0(VAR_9);
 struct mwl8k_priv *VAR_16 = VAR_7->priv;

 if (VAR_9->type == VAR_3 && !VAR_16->ap_fw)
  return -VAR_0;

 if (VAR_10 == ((void*)0))
  VAR_14 = VAR_9->addr;
 else
  VAR_14 = VAR_10->addr;

 if (VAR_8 == VAR_4) {
  VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_14, VAR_11);
  if (VAR_12)
   goto out;

  if ((VAR_11->cipher == VAR_6)
    || (VAR_11->cipher == VAR_5))
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_1;

  VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_14,
        VAR_13);
  if (VAR_12)
   goto out;

  VAR_15->is_hw_crypto_enabled = 1;

 } else {
  VAR_12 = FUNC_1(VAR_7, VAR_9, VAR_14, VAR_11);

  if (VAR_12)
   goto out;
 }
out:
 return VAR_12;
}
