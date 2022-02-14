
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_bss_conf {scalar_t__ assoc; scalar_t__ enable_beacon; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct ath9k_htc_priv {int reconfig_beacon; int rearm_ani; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath9k_htc_priv *VAR_4 = VAR_1;
 struct ieee80211_bss_conf *VAR_5 = &VAR_3->bss_conf;

 if ((VAR_3->type == VAR_0) && VAR_5->enable_beacon)
  VAR_4->reconfig_beacon = 1;

 if (VAR_5->assoc) {
  VAR_4->rearm_ani = 1;
  VAR_4->reconfig_beacon = 1;
 }
}
