
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {size_t* MaxTxPwrDbmList; scalar_t__* channel_map; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;


 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;

u8
FUNC_2(
 struct ieee80211_device *VAR_1,
 u8 VAR_2
 )
{
 PRT_DOT11D_INFO VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = 255;

 if(VAR_0 < VAR_2)
 {
  FUNC_1("DOT11D_GetMaxTxPwrInDbm(): Invalid Channel\n");
  return VAR_4;
 }
 if(VAR_3->channel_map[VAR_2])
 {
  VAR_4 = VAR_3->MaxTxPwrDbmList[VAR_2];
 }

 return VAR_4;
}
