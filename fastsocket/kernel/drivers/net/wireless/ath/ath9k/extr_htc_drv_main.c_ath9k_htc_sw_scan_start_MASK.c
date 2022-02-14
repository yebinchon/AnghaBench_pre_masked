
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int mutex; int ps_work; int beacon_lock; int op_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1)
{
 struct ath9k_htc_priv *VAR_2 = VAR_1->priv;

 FUNC_2(&VAR_2->mutex);
 FUNC_5(&VAR_2->beacon_lock);
 FUNC_4(VAR_0, &VAR_2->op_flags);
 FUNC_6(&VAR_2->beacon_lock);
 FUNC_1(&VAR_2->ps_work);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->mutex);
}
