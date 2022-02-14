
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_bss_conf {int bssid; int aid; scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct ath_common {int curbssid; int curaid; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct ath9k_htc_priv *VAR_5 = (struct ath9k_htc_priv *)VAR_2;
 struct ath_common *VAR_6 = FUNC_0(VAR_5->ah);
 struct ieee80211_bss_conf *VAR_7 = &VAR_4->bss_conf;

 if ((VAR_4->type == VAR_1) && VAR_7->assoc) {
  VAR_6->curaid = VAR_7->aid;
  FUNC_1(VAR_6->curbssid, VAR_7->bssid, VAR_0);
 }
}
