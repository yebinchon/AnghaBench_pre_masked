
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {int* channel_map; int* MaxTxPwrDbmList; scalar_t__ CountryIeLen; int State; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int*,int,scalar_t__) ;

void
FUNC_3(struct ieee80211_device *VAR_2)
{
 u32 VAR_3;
 PRT_DOT11D_INFO VAR_4 = FUNC_0(VAR_2);


 FUNC_2(VAR_4->channel_map, 0, VAR_1+1);
 FUNC_2(VAR_4->MaxTxPwrDbmList, 0xFF, VAR_1+1);

 for (VAR_3=1; VAR_3<=11; VAR_3++) {
  (VAR_4->channel_map)[VAR_3] = 1;
 }
 for (VAR_3=12; VAR_3<=14; VAR_3++) {
  (VAR_4->channel_map)[VAR_3] = 2;
 }

 VAR_4->State = VAR_0;
 VAR_4->CountryIeLen = 0;
 FUNC_1(VAR_2);


}
