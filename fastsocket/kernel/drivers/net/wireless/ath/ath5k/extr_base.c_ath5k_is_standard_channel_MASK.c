
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(short VAR_1, enum ieee80211_band VAR_2)
{
 if (VAR_2 == VAR_0 && VAR_1 <= 14)
  return 1;

 return
  (((VAR_1 & 3) == 0 && VAR_1 >= 36 && VAR_1 <= 64) ||

  ((VAR_1 & 3) == 0 && VAR_1 >= 100 && VAR_1 <= 140) ||

  ((VAR_1 & 3) == 1 && VAR_1 >= 149 && VAR_1 <= 165) ||

  (VAR_1 == 8 || VAR_1 == 12 || VAR_1 == 16) ||

  (VAR_1 == 184 || VAR_1 == 188 || VAR_1 == 192 || VAR_1 == 196));
}
