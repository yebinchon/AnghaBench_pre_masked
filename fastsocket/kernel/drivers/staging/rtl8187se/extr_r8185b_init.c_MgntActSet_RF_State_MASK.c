
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8180_priv {int RFChangeInProgress; int eRFPowerState; int rf_ps_lock; int RfOffReason; int bInHctTest; } ;
struct net_device {int dummy; } ;
typedef int RT_RF_POWER_STATE ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct net_device*,int) ;
 int VAR_2 ;



 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

bool
FUNC_9(
 struct net_device *VAR_3,
 RT_RF_POWER_STATE VAR_4,
 u32 VAR_5
 )
{
 struct r8180_priv *VAR_6 = (struct r8180_priv *)FUNC_4(VAR_3);
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 RT_RF_POWER_STATE VAR_9;
 u16 VAR_10 = 0;
 unsigned long VAR_11;






 while(1)
 {

  FUNC_6(&VAR_6->rf_ps_lock,VAR_11);
  if(VAR_6->RFChangeInProgress)
  {



   FUNC_7(&VAR_6->rf_ps_lock,VAR_11);

   while(VAR_6->RFChangeInProgress)
   {
    VAR_10 ++;

    FUNC_8(1000);


    if(VAR_10 > 1000)
    {

     FUNC_5("MgntActSet_RF_State(): Wait too long to set RF\n");

     return 0;
    }
   }
  }
  else
  {

   VAR_6->RFChangeInProgress = 1;

   FUNC_7(&VAR_6->rf_ps_lock,VAR_11);
   break;
  }
 }

 VAR_9 = VAR_6->eRFPowerState;


 switch(VAR_4)
 {
 case 129:




  VAR_6->RfOffReason &= (~VAR_5);

  if(! VAR_6->RfOffReason)
  {
   VAR_6->RfOffReason = 0;
   VAR_7 = 1;

   if(VAR_9 == 130 && VAR_5 >=VAR_0 && !VAR_6->bInHctTest)
   {
    VAR_8 = 1;
   }
  }
  else

   ;
  break;

 case 130:


   if (VAR_6->RfOffReason > VAR_1)
   {
    FUNC_2( VAR_3, VAR_2 );







   }



  VAR_6->RfOffReason |= VAR_5;
  VAR_7 = 1;
  break;

 case 128:
  VAR_6->RfOffReason |= VAR_5;
  VAR_7 = 1;
  break;

 default:
  break;
 }

 if(VAR_7)
 {



  FUNC_3(VAR_3, VAR_4);


  if(VAR_4 == 129)
  {
   FUNC_1(VAR_3);
   if(VAR_8)
   {


   }
  }

  else if(VAR_4 == 130)
  {
   FUNC_0(VAR_3);
  }
 }
 else
 {

 }



 FUNC_6(&VAR_6->rf_ps_lock,VAR_11);
 VAR_6->RFChangeInProgress = 0;

 FUNC_7(&VAR_6->rf_ps_lock,VAR_11);

 return VAR_7;
}
