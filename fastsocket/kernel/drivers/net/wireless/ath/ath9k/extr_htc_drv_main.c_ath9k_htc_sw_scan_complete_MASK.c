
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int mutex; int beacon_lock; int op_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_1)
{
 struct ath9k_htc_priv *VAR_2 = VAR_1->priv;

 FUNC_4(&VAR_2->mutex);
 FUNC_6(&VAR_2->beacon_lock);
 FUNC_3(VAR_0, &VAR_2->op_flags);
 FUNC_7(&VAR_2->beacon_lock);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 FUNC_5(&VAR_2->mutex);
}
