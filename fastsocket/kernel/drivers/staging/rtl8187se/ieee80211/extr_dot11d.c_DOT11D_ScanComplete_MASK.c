
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {int State; } ;
typedef TYPE_1__* PRT_DOT11D_INFO ;





 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct ieee80211_device*) ;
 TYPE_1__* FUNC_2 (struct ieee80211_device*) ;

void
FUNC_3(
 struct ieee80211_device * VAR_0
 )
{
 PRT_DOT11D_INFO VAR_1 = FUNC_2(VAR_0);

 switch(VAR_1->State)
 {
 case 129:
  VAR_1->State = 130;
  break;

 case 130:
  if( FUNC_1(VAR_0) == 0 )
  {
   FUNC_0(VAR_0);
  }
  break;
 case 128:
  break;
 }
}
