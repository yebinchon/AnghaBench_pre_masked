
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
     struct ieee80211_tx_control *VAR_1,
     struct sk_buff *VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_3, VAR_1->sta, VAR_2))
  FUNC_1(VAR_0, VAR_2);
}
