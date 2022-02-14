
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_bss_conf {int bssid; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_target_rate {int capflags; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,struct ath9k_htc_target_rate*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ieee80211_sta*,struct ath9k_htc_target_rate*) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct ieee80211_sta* FUNC_5 (struct ieee80211_vif*,int ) ;
 int FUNC_6 (struct ath9k_htc_target_rate*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ath9k_htc_priv *VAR_1,
      struct ieee80211_vif *VAR_2,
      struct ieee80211_bss_conf *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_2(VAR_1->ah);
 struct ath9k_htc_target_rate VAR_5;
 struct ieee80211_sta *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_5, 0, sizeof(struct ath9k_htc_target_rate));

 FUNC_7();
 VAR_6 = FUNC_5(VAR_2, VAR_3->bssid);
 if (!VAR_6) {
  FUNC_8();
  return;
 }
 FUNC_1(VAR_1, VAR_6, &VAR_5);
 FUNC_8();

 VAR_7 = FUNC_0(VAR_1, &VAR_5);
 if (!VAR_7)
  FUNC_3(VAR_4, VAR_0,
   "Updated target sta: %pM, rate caps: 0x%X\n",
   VAR_3->bssid, FUNC_4(VAR_5.capflags));
}
