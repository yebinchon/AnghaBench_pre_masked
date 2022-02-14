
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_vif {TYPE_1__* bbuf; } ;
struct ath5k_hw {int dummy; } ;
struct TYPE_3__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath5k_hw*,TYPE_1__*) ;
 int FUNC_2 (struct ath5k_hw*,TYPE_1__*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*) ;

int
FUNC_4(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3)
{
 int VAR_4;
 struct ath5k_hw *VAR_5 = VAR_2->priv;
 struct ath5k_vif *VAR_6;
 struct sk_buff *VAR_7;

 if (FUNC_0(!VAR_3)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_3);

 if (!VAR_7) {
  VAR_4 = -VAR_1;
  goto out;
 }

 VAR_6 = (void *)VAR_3->drv_priv;
 FUNC_2(VAR_5, VAR_6->bbuf);
 VAR_6->bbuf->skb = VAR_7;
 VAR_4 = FUNC_1(VAR_5, VAR_6->bbuf);
out:
 return VAR_4;
}
