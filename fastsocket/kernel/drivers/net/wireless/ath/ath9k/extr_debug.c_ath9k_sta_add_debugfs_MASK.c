
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct dentry {int dummy; } ;
struct ath_node {int node_stat; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct dentry*,struct ath_node*,int *) ;
 int VAR_1 ;

void FUNC_1(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4,
      struct dentry *VAR_5)
{
 struct ath_node *VAR_6 = (struct ath_node *)VAR_4->drv_priv;
 VAR_6->node_stat = FUNC_0("node_stat", VAR_0,
         VAR_5, VAR_6, &VAR_1);
}
