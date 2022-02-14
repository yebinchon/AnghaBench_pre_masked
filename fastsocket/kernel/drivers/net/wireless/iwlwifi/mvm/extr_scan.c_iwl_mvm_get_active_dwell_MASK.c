
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(enum ieee80211_band VAR_1, int VAR_2)
{
 if (VAR_1 == VAR_0)
  return 30 + 3 * (VAR_2 + 1);
 return 20 + 2 * (VAR_2 + 1);
}
