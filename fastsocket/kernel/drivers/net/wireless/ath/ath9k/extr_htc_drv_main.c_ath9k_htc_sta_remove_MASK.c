
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_sta {int index; } ;
struct ath9k_htc_priv {int mutex; int htc; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_0,
    struct ieee80211_vif *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_0->priv;
 struct ath9k_htc_sta *VAR_4;
 int VAR_5;

 FUNC_4(&VAR_3->mutex);
 FUNC_1(VAR_3);
 VAR_4 = (struct ath9k_htc_sta *) VAR_2->drv_priv;
 FUNC_3(VAR_3->htc, VAR_4->index);
 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->mutex);

 return VAR_5;
}
