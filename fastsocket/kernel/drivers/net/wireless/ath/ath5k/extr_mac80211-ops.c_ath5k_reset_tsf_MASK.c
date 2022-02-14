
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {scalar_t__ opmode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct ath5k_hw *VAR_3 = VAR_1->priv;





 if (VAR_3->opmode == VAR_0)
  FUNC_0(VAR_3, 0);
 else
  FUNC_1(VAR_3);
}
