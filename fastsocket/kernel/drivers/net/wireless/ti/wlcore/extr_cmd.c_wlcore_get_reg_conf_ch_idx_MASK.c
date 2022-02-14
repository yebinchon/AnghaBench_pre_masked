
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;




 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(enum ieee80211_band VAR_0, u16 VAR_1)
{
 int VAR_2 = -1;

 switch (VAR_0) {
 case 128:
  if (VAR_1 >= 8 && VAR_1 <= 16)
   VAR_2 = ((VAR_1-8)/4 + 18);
  else if (VAR_1 >= 34 && VAR_1 <= 64)
   VAR_2 = ((VAR_1-34)/2 + 3 + 18);
  else if (VAR_1 >= 100 && VAR_1 <= 140)
   VAR_2 = ((VAR_1-100)/4 + 15 + 18);
  else if (VAR_1 >= 149 && VAR_1 <= 165)
   VAR_2 = ((VAR_1-149)/4 + 26 + 18);
  else
   VAR_2 = -1;
  break;
 case 129:
  if (VAR_1 >= 1 && VAR_1 <= 14)
   VAR_2 = VAR_1 - 1;
  else
   VAR_2 = -1;
  break;
 default:
  FUNC_0("get reg conf ch idx - unknown band: %d",
        (int)VAR_0);
 }

 return VAR_2;
}
