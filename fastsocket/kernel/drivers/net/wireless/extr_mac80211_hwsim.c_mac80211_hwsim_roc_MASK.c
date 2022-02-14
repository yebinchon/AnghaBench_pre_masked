
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int roc_done; int mutex; struct ieee80211_channel* tmp_chan; scalar_t__ hw_scan_request; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct ieee80211_channel {int center_freq; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2,
         struct ieee80211_channel *VAR_3,
         int VAR_4,
         enum ieee80211_roc_type VAR_5)
{
 struct mac80211_hwsim_data *VAR_6 = VAR_1->priv;

 FUNC_4(&VAR_6->mutex);
 if (FUNC_0(VAR_6->tmp_chan || VAR_6->hw_scan_request)) {
  FUNC_5(&VAR_6->mutex);
  return -VAR_0;
 }

 VAR_6->tmp_chan = VAR_3;
 FUNC_5(&VAR_6->mutex);

 FUNC_6(VAR_1->wiphy, "hwsim ROC (%d MHz, %d ms)\n",
      VAR_3->center_freq, VAR_4);

 FUNC_2(VAR_1);

 FUNC_1(VAR_1, &VAR_6->roc_done,
         FUNC_3(VAR_4));
 return 0;
}
