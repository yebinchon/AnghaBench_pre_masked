
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct ath5k_hw {int irq; int bhalq; struct ieee80211_hw* hw; } ;


 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (int ,struct ath5k_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;

void
FUNC_8(struct ath5k_hw *VAR_0)
{
 struct ieee80211_hw *VAR_1 = VAR_0->hw;
 FUNC_7(VAR_1);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0, VAR_0->bhalq);
 FUNC_5(VAR_0);

 FUNC_3(VAR_0);





 FUNC_1(VAR_0);
 FUNC_6(VAR_0->irq, VAR_0);
}
