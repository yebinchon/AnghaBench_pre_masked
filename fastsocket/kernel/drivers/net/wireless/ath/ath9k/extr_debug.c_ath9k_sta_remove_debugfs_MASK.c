
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct dentry {int dummy; } ;
struct ath_node {int node_stat; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct ieee80211_sta *VAR_2,
         struct dentry *VAR_3)
{
 struct ath_node *VAR_4 = (struct ath_node *)VAR_2->drv_priv;
 FUNC_0(VAR_4->node_stat);
}
