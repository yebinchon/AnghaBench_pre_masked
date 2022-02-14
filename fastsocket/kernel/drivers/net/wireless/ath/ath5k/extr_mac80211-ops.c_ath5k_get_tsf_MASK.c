
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int dummy; } ;


 int FUNC_0 (struct ath5k_hw*) ;

__attribute__((used)) static u64
FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct ath5k_hw *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_2);
}
