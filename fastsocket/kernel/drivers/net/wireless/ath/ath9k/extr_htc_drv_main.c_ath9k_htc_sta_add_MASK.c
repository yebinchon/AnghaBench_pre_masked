
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int mutex; } ;


 int FUNC_0 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ieee80211_sta*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_0->priv;
 int VAR_4;

 FUNC_4(&VAR_3->mutex);
 FUNC_3(VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->mutex);

 return VAR_4;
}
