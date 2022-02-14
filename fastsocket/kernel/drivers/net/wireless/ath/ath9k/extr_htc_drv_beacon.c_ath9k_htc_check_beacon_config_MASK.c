
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_bss_conf {scalar_t__ beacon_int; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct htc_beacon_config {scalar_t__ beacon_interval; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int num_ap_vif; int num_sta_vif; int hw; TYPE_1__* ah; struct htc_beacon_config cur_beacon_conf; } ;
struct TYPE_2__ {scalar_t__ opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ath_common* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct ath9k_htc_priv *VAR_5,
       struct ieee80211_vif *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_0(VAR_5->ah);
 struct htc_beacon_config *VAR_8 = &VAR_5->cur_beacon_conf;
 struct ieee80211_bss_conf *VAR_9 = &VAR_6->bss_conf;
 bool VAR_10;






 if ((VAR_5->ah->opmode == VAR_2) &&
     (VAR_5->num_ap_vif > 1) &&
     (VAR_6->type == VAR_2) &&
     (VAR_8->beacon_interval != VAR_9->beacon_int)) {
  FUNC_1(VAR_7, VAR_0,
   "Changing beacon interval of multiple AP interfaces !\n");
  return 0;
 }





 if (VAR_5->num_ap_vif &&
     (VAR_6->type != VAR_2)) {
  FUNC_1(VAR_7, VAR_0,
   "HW in AP mode, cannot set STA beacon parameters\n");
  return 0;
 }





 if ((VAR_5->ah->opmode == VAR_3) &&
     (VAR_5->num_sta_vif > 1) &&
     (VAR_6->type == VAR_3)) {
  VAR_10 = 0;
  FUNC_2(
   VAR_5->hw, VAR_1,
   VAR_4, &VAR_10);

  if (VAR_10) {
   FUNC_1(VAR_7, VAR_0,
    "Beacon already configured for a station interface\n");
   return 0;
  }
 }

 return 1;
}
