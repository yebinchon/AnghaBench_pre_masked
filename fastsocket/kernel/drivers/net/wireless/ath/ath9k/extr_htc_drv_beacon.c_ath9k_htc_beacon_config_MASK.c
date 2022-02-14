
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int beacon_int; int dtim_period; } ;
struct ieee80211_vif {int type; scalar_t__ drv_priv; struct ieee80211_bss_conf bss_conf; } ;
struct htc_beacon_config {int beacon_interval; int bmiss_timeout; int dtim_period; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int beacon_configured; } ;
struct ath9k_htc_priv {struct htc_beacon_config cur_beacon_conf; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ath9k_htc_priv*,struct htc_beacon_config*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct htc_beacon_config*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct htc_beacon_config*) ;
 int FUNC_3 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 struct ath_common* FUNC_4 (int ) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

void FUNC_6(struct ath9k_htc_priv *VAR_2,
        struct ieee80211_vif *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_4(VAR_2->ah);
 struct htc_beacon_config *VAR_5 = &VAR_2->cur_beacon_conf;
 struct ieee80211_bss_conf *VAR_6 = &VAR_3->bss_conf;
 struct ath9k_htc_vif *VAR_7 = (struct ath9k_htc_vif *) VAR_3->drv_priv;

 if (!FUNC_3(VAR_2, VAR_3))
  return;

 VAR_5->beacon_interval = VAR_6->beacon_int;
 if (VAR_5->beacon_interval == 0)
  VAR_5->beacon_interval = 100;

 VAR_5->dtim_period = VAR_6->dtim_period;
 VAR_5->bmiss_timeout =
  VAR_0 * VAR_5->beacon_interval;

 switch (VAR_3->type) {
 case 128:
  FUNC_2(VAR_2, VAR_5);
  VAR_7->beacon_configured = 1;
  break;
 case 130:
  FUNC_0(VAR_2, VAR_5);
  break;
 case 129:
  FUNC_1(VAR_2, VAR_5);
  break;
 default:
  FUNC_5(VAR_4, VAR_1, "Unsupported beaconing mode\n");
  return;
 }
}
