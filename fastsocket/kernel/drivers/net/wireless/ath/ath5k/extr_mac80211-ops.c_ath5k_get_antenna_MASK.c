
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int ah_ant_mode; } ;






__attribute__((used)) static int
FUNC_0(struct ieee80211_hw *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 struct ath5k_hw *VAR_3 = VAR_0->priv;

 switch (VAR_3->ah_ant_mode) {
 case 129:
  *VAR_1 = 1; *VAR_2 = 1; break;
 case 128:
  *VAR_1 = 2; *VAR_2 = 2; break;
 case 130:
  *VAR_1 = 3; *VAR_2 = 3; break;
 }
 return 0;
}
