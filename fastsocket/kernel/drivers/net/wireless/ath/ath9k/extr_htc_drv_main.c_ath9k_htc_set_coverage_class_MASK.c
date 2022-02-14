
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int mutex; TYPE_1__* ah; } ;
struct TYPE_2__ {int coverage_class; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
      u8 VAR_1)
{
 struct ath9k_htc_priv *VAR_2 = VAR_0->priv;

 FUNC_3(&VAR_2->mutex);
 FUNC_1(VAR_2);
 VAR_2->ah->coverage_class = VAR_1;
 FUNC_2(VAR_2->ah);
 FUNC_0(VAR_2);
 FUNC_4(&VAR_2->mutex);
}
