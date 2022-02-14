
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {scalar_t__* channel_map; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;


 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2(
 struct ieee80211_device * VAR_1,
 u8 VAR_2
)
{
 PRT_DOT11D_INFO VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = 0;
 u32 VAR_5 = 0;

 for (VAR_5=1; VAR_5<= VAR_0; VAR_5++)
 {
  if(VAR_3->channel_map[VAR_5] > 0)
  {
   VAR_4 = VAR_5;
   break;
  }
 }

 if(VAR_0 < VAR_2)
 {
  FUNC_1("IsLegalChannel(): Invalid Channel\n");
  return VAR_4;
 }

 if(VAR_3->channel_map[VAR_2] > 0)
  return VAR_2;

 return VAR_4;
}
