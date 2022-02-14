
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; } ;
struct ath9k_htc_priv {struct ieee80211_hw* hw; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ath9k_htc_priv *VAR_0)
{
 struct ieee80211_hw *VAR_1 = VAR_0->hw;

 FUNC_5(VAR_1->wiphy);
 FUNC_0(VAR_0);
 FUNC_4(VAR_1);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
}
