
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*) ;

int FUNC_4(struct iwl_mvm *VAR_2,
        struct ieee80211_vif *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->type != VAR_1);

 VAR_4 = FUNC_2(VAR_2->hw, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_4);
 return VAR_5;
}
