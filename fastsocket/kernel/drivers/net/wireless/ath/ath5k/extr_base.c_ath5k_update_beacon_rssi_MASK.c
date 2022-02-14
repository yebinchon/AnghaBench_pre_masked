
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_mgmt {int bssid; int frame_control; } ;
struct ath_common {int curbssid; } ;
struct ath5k_hw {int ah_beacon_rssi_avg; } ;


 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ath5k_hw *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct ieee80211_mgmt *VAR_3 = (struct ieee80211_mgmt *)VAR_1->data;
 struct ath_common *VAR_4 = FUNC_0(VAR_0);


 if (!FUNC_3(VAR_3->frame_control) ||
     !FUNC_1(VAR_3->bssid, VAR_4->curbssid))
  return;

 FUNC_2(&VAR_0->ah_beacon_rssi_avg, VAR_2);



}
