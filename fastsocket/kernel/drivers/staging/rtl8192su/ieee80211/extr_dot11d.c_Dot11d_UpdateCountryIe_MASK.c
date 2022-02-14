
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_5__ {size_t FirstChnl; int NumChnls; int MaxTxPowerInDbm; } ;
struct TYPE_4__ {int* channel_map; int* MaxTxPwrDbmList; int State; int CountryIeBuf; int CountryIeLen; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;
typedef TYPE_2__* PCHNL_TXPOWER_TRIPLE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_device*,size_t*) ;
 int FUNC_2 (int ,size_t*,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(
 struct ieee80211_device *VAR_2,
 u8 * VAR_3,
 u16 VAR_4,
 u8 * VAR_5
 )
{
 PRT_DOT11D_INFO VAR_6 = FUNC_0(VAR_2);
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 PCHNL_TXPOWER_TRIPLE VAR_11;

 FUNC_3(VAR_6->channel_map, 0, VAR_1+1);
 FUNC_3(VAR_6->MaxTxPwrDbmList, 0xFF, VAR_1+1);
 VAR_10 = 0;
 VAR_9 = (VAR_4 - 3) / 3;
 VAR_11 = (PCHNL_TXPOWER_TRIPLE)(VAR_5 + 3);
 for(VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
 {
  if(VAR_10 >= VAR_11->FirstChnl)
  {
   FUNC_4("Dot11d_UpdateCountryIe(): Invalid country IE, skip it........1\n");
   return;
  }
  if(VAR_1 < (VAR_11->FirstChnl + VAR_11->NumChnls))
  {
   FUNC_4("Dot11d_UpdateCountryIe(): Invalid country IE, skip it........2\n");
   return;
  }

  for(VAR_8 = 0 ; VAR_8 < VAR_11->NumChnls; VAR_8++)
  {
   VAR_6->channel_map[VAR_11->FirstChnl + VAR_8] = 1;
   VAR_6->MaxTxPwrDbmList[VAR_11->FirstChnl + VAR_8] = VAR_11->MaxTxPowerInDbm;
   VAR_10 = VAR_11->FirstChnl + VAR_8;
  }

  VAR_11 = (PCHNL_TXPOWER_TRIPLE)((u8*)VAR_11 + 3);
 }


 FUNC_4("Channel List:");
 for(VAR_7=1; VAR_7<= VAR_1; VAR_7++)
  if(VAR_6->channel_map[VAR_7] > 0)
   FUNC_4(" %d", VAR_7);
 FUNC_4("\n");


 FUNC_1(VAR_2, VAR_3);

 VAR_6->CountryIeLen = VAR_4;
 FUNC_2(VAR_6->CountryIeBuf, VAR_5,VAR_4);
 VAR_6->State = VAR_0;
}
