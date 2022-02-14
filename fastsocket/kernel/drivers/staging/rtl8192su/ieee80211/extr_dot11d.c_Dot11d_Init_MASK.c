
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {int MaxTxPwrDbmList; int channel_map; scalar_t__ CountryIeLen; int State; scalar_t__ bEnabled; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct ieee80211_device *VAR_2)
{
 PRT_DOT11D_INFO VAR_3 = FUNC_0(VAR_2);

 VAR_3->bEnabled = 0;

 VAR_3->State = VAR_0;
 VAR_3->CountryIeLen = 0;
 FUNC_2(VAR_3->channel_map, 0, VAR_1+1);
 FUNC_2(VAR_3->MaxTxPwrDbmList, 0xFF, VAR_1+1);
 FUNC_1(VAR_2);

 FUNC_3("Dot11d_Init()\n");
}
