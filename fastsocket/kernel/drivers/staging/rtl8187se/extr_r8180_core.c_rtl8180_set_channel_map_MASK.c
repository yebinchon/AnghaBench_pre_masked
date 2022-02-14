
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {int MinPassiveChnlNum; int IbssStartChnl; int bGlobalDomain; } ;
struct TYPE_4__ {int Len; int* Channel; } ;
struct TYPE_3__ {int* channel_map; int bEnabled; } ;
 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct ieee80211_device*) ;
 TYPE_1__* FUNC_2 (struct ieee80211_device*) ;
 int VAR_1 ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(u8 VAR_2, struct ieee80211_device *VAR_3)
{
 int VAR_4;


 VAR_3->MinPassiveChnlNum=VAR_1+1;
 VAR_3->IbssStartChnl=0;

 switch (VAR_2)
 {
  case 137:
  case 134:
  case 138:
  case 130:
  case 136:
  case 132:
  case 131:
  case 133:
  case 129:
  {
   FUNC_0(VAR_3);
   VAR_3->bGlobalDomain = 0;
   if (VAR_0[VAR_2].Len != 0){

    FUNC_3(FUNC_2(VAR_3)->channel_map, 0, sizeof(FUNC_2(VAR_3)->channel_map));

    for (VAR_4=0;VAR_4<VAR_0[VAR_2].Len;VAR_4++)
    {
     if(VAR_0[VAR_2].Channel[VAR_4] <= 14)
      FUNC_2(VAR_3)->channel_map[VAR_0[VAR_2].Channel[VAR_4]] = 1;
    }
   }
   break;
  }
  case 135:
  {
   FUNC_2(VAR_3)->bEnabled = 0;
   FUNC_1(VAR_3);
   VAR_3->bGlobalDomain = 1;
   break;
  }
  case 128:
  {
  VAR_3->MinPassiveChnlNum=12;
  VAR_3->IbssStartChnl= 10;
  break;
  }
  default:
  {
   FUNC_0(VAR_3);
   VAR_3->bGlobalDomain = 0;
   FUNC_3(FUNC_2(VAR_3)->channel_map, 0, sizeof(FUNC_2(VAR_3)->channel_map));
   for (VAR_4=1;VAR_4<=14;VAR_4++)
   {
    FUNC_2(VAR_3)->channel_map[VAR_4] = 1;
   }
   break;
  }
 }
}
