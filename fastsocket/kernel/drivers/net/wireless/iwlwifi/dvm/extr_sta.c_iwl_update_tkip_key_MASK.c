
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct iwl_priv*) ;
 scalar_t__ FUNC_1 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_priv*,struct ieee80211_key_conf*,scalar_t__,int ,int *,int ) ;

void FUNC_3(struct iwl_priv *VAR_2,
    struct ieee80211_vif *VAR_3,
    struct ieee80211_key_conf *VAR_4,
    struct ieee80211_sta *VAR_5, u32 VAR_6, u16 *VAR_7)
{
 u8 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5);

 if (VAR_8 == VAR_1)
  return;

 if (FUNC_0(VAR_2)) {


  return;
 }

 FUNC_2(VAR_2, VAR_4, VAR_8,
       VAR_6, VAR_7, VAR_0);
}
