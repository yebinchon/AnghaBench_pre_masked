
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {int SwChnlInProgress; int chan; int CurrentChannel; scalar_t__ up; scalar_t__ SwChnlStep; scalar_t__ SwChnlStage; TYPE_1__* ieee80211; scalar_t__ SetBWModeInProgress; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;





 scalar_t__ VAR_3 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int VAR_4 ;

u8 FUNC_3(struct net_device* VAR_5, u8 VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_2(VAR_5);



        if(!VAR_7->up)
  return 0;

 if(VAR_7->SwChnlInProgress)
  return 0;

 if(VAR_7->SetBWModeInProgress)
  return 0;


 switch(VAR_7->ieee80211->mode)
 {
 case 132:
 case 128:
  if (VAR_6<=14){
   FUNC_0(VAR_0, "WIRELESS_MODE_A but channel<=14");
   return 0;
  }
  break;

 case 131:
  if (VAR_6>14){
   FUNC_0(VAR_0, "WIRELESS_MODE_B but channel>14");
   return 0;
  }
  break;

 case 130:
 case 129:
  if (VAR_6>14){
   FUNC_0(VAR_0, "WIRELESS_MODE_G but channel>14");
   return 0;
  }
  break;

 default:
   ;
  break;
 }


 VAR_7->SwChnlInProgress = VAR_2;
 if( VAR_6 == 0)
  VAR_6 = 1;

 VAR_7->chan=VAR_6;

 VAR_7->SwChnlStage=0;
 VAR_7->SwChnlStep=0;

 if((VAR_7->up))
 {
 FUNC_1(VAR_5);
 }
 else
 {
  FUNC_0(VAR_1, "PHY_SwChnl8192S SwChnlInProgress FALSE driver sleep or unload\n");
  VAR_7->SwChnlInProgress = 0;

 }
        return 1;
}
