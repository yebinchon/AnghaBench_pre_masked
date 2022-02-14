
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
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

 if(VAR_0 < VAR_2)
 {
  FUNC_1("IsLegalChannel(): Invalid Channel\n");
  return 0;
 }
 if(VAR_3->channel_map[VAR_2] > 0)
  return 1;
 return 0;
}
