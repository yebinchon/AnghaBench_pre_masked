
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mwl8k_priv {int radio_on; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_hw*,int,int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
       struct ieee80211_tx_control *VAR_1,
       struct sk_buff *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_0->priv;
 int VAR_4 = FUNC_2(VAR_2);

 if (!VAR_3->radio_on) {
  FUNC_3(VAR_0->wiphy,
       "dropped TX frame since radio disabled\n");
  FUNC_0(VAR_2);
  return;
 }

 FUNC_1(VAR_0, VAR_4, VAR_1->sta, VAR_2);
}
