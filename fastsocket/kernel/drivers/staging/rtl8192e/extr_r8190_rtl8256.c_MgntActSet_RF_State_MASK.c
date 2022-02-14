
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct r8192_priv {int RFChangeInProgress; int rf_ps_lock; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int eRFPowerState; int RfOffReason; } ;
typedef int RT_RF_POWER_STATE ;
typedef int RT_RF_CHANGE_SOURCE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct net_device*,int) ;
 int VAR_4 ;



 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;

bool
FUNC_7(
 struct net_device* VAR_5,
 RT_RF_POWER_STATE VAR_6,
 RT_RF_CHANGE_SOURCE VAR_7
 )
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_5);
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 RT_RF_POWER_STATE VAR_11;
 u16 VAR_12 = 0;
 unsigned long VAR_13;
 FUNC_1(VAR_1, "===>MgntActSet_RF_State(): StateToSet(%d)\n",VAR_6);






 while(1)
 {
  FUNC_4(&VAR_8->rf_ps_lock,VAR_13);
  if(VAR_8->RFChangeInProgress)
  {
   FUNC_5(&VAR_8->rf_ps_lock,VAR_13);
   FUNC_1(VAR_1, "MgntActSet_RF_State(): RF Change in progress! Wait to set..StateToSet(%d).\n", VAR_6);


   while(VAR_8->RFChangeInProgress)
   {
    VAR_12 ++;
    FUNC_1(VAR_1, "MgntActSet_RF_State(): Wait 1 ms (%d times)...\n", VAR_12);
    FUNC_6(1000);


    if(VAR_12 > 100)
    {
     FUNC_1(VAR_0, "MgntActSet_RF_State(): Wait too logn to set RF\n");

     return 0;
    }
   }
  }
  else
  {
   VAR_8->RFChangeInProgress = 1;
   FUNC_5(&VAR_8->rf_ps_lock,VAR_13);
   break;
  }
 }

 VAR_11 = VAR_8->ieee80211->eRFPowerState;

 switch(VAR_6)
 {
 case 129:





  VAR_8->ieee80211->RfOffReason &= (~VAR_7);

  if(! VAR_8->ieee80211->RfOffReason)
  {
   VAR_8->ieee80211->RfOffReason = 0;
   VAR_9 = 1;


   if(VAR_11 == 130 && VAR_7 >=VAR_2 )
   {
    VAR_10 = 1;
   }
  }
  else
   FUNC_1(VAR_1, "MgntActSet_RF_State - eRfon reject pMgntInfo->RfOffReason= 0x%x, ChangeSource=0x%X\n", VAR_8->ieee80211->RfOffReason, VAR_7);

  break;

 case 130:

   if (VAR_8->ieee80211->RfOffReason > VAR_3)
   {






    FUNC_0(VAR_5, VAR_4);




   }


  VAR_8->ieee80211->RfOffReason |= VAR_7;
  VAR_9 = 1;
  break;

 case 128:
  VAR_8->ieee80211->RfOffReason |= VAR_7;
  VAR_9 = 1;
  break;

 default:
  break;
 }

 if(VAR_9)
 {
  FUNC_1(VAR_1, "MgntActSet_RF_State(): Action is allowed.... StateToSet(%d), RfOffReason(%#X)\n", VAR_6, VAR_8->ieee80211->RfOffReason);

  FUNC_2(VAR_5, VAR_6);

  if(VAR_6 == 129)
  {

   if(VAR_10)
   {

   }
  }

  else if(VAR_6 == 130)
  {

  }
 }
 else
 {
  FUNC_1(VAR_1, "MgntActSet_RF_State(): Action is rejected.... StateToSet(%d), ChangeSource(%#X), RfOffReason(%#X)\n", VAR_6, VAR_7, VAR_8->ieee80211->RfOffReason);
 }


 FUNC_4(&VAR_8->rf_ps_lock,VAR_13);
 VAR_8->RFChangeInProgress = 0;
 FUNC_5(&VAR_8->rf_ps_lock,VAR_13);

 FUNC_1(VAR_1, "<===MgntActSet_RF_State()\n");
 return VAR_9;
}
