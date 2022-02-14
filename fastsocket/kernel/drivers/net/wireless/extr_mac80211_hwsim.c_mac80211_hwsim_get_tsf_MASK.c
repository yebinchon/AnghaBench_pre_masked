
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mac80211_hwsim_data {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;


 int FUNC_0 (struct mac80211_hwsim_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u64 FUNC_2(struct ieee80211_hw *VAR_0,
      struct ieee80211_vif *VAR_1)
{
 struct mac80211_hwsim_data *VAR_2 = VAR_0->priv;
 return FUNC_1(FUNC_0(VAR_2));
}
