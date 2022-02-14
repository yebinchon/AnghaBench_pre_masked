
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int hw_scan; int hw; int mutex; scalar_t__ scan_chan_idx; struct ieee80211_vif* hw_scan_vif; struct cfg80211_scan_request* hw_scan_request; scalar_t__ tmp_chan; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct cfg80211_scan_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      struct cfg80211_scan_request *VAR_3)
{
 struct mac80211_hwsim_data *VAR_4 = VAR_1->priv;

 FUNC_2(&VAR_4->mutex);
 if (FUNC_0(VAR_4->tmp_chan || VAR_4->hw_scan_request)) {
  FUNC_3(&VAR_4->mutex);
  return -VAR_0;
 }
 VAR_4->hw_scan_request = VAR_3;
 VAR_4->hw_scan_vif = VAR_2;
 VAR_4->scan_chan_idx = 0;
 FUNC_3(&VAR_4->mutex);

 FUNC_4(VAR_1->wiphy, "hwsim hw_scan request\n");

 FUNC_1(VAR_4->hw, &VAR_4->hw_scan, 0);

 return 0;
}
