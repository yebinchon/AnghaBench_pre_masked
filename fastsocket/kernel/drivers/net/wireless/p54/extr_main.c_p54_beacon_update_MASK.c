
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_common {scalar_t__ tsf_low32; scalar_t__ tsf_high32; int hw; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,struct ieee80211_vif*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct ieee80211_tx_control*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct p54_common *VAR_1,
   struct ieee80211_vif *VAR_2)
{
 struct ieee80211_tx_control VAR_3 = { };
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1->hw, VAR_2);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_2(VAR_1->hw, &VAR_3, VAR_4);
 VAR_1->tsf_high32 = 0;
 VAR_1->tsf_low32 = 0;

 return 0;
}
