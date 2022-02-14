
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {int AdTickCount; int AdCheckPeriod; int AdRxSignalStrength; int AdRxSsThreshold; int bAdSwitchedChecking; scalar_t__ AdRxOkCnt; int AdRxSsBeforeSwitched; int AdMaxRxSsThreshold; int AdMaxCheckPeriod; int AdMinCheckPeriod; scalar_t__ AdMainAntennaRxOkCnt; scalar_t__ AdAuxAntennaRxOkCnt; int CurrAntennaIndex; int bHWAdSwitched; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int,int) ;

void
FUNC_3(
 struct net_device *VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_1(VAR_1);
 bool VAR_3=0;



 if(VAR_3)
 {
  VAR_2->AdTickCount++;

  FUNC_2("(1) AdTickCount: %d, AdCheckPeriod: %d\n",
   VAR_2->AdTickCount, VAR_2->AdCheckPeriod);
  FUNC_2("(2) AdRxSignalStrength: %ld, AdRxSsThreshold: %ld\n",
   VAR_2->AdRxSignalStrength, VAR_2->AdRxSsThreshold);
 }



 if(VAR_2->ieee80211->state != VAR_0)
 {


  VAR_2->bAdSwitchedChecking = 0;

  FUNC_0(VAR_1);
 }

 else if(VAR_2->AdRxOkCnt == 0)
 {


  VAR_2->bAdSwitchedChecking = 0;
  FUNC_0(VAR_1);
 }

 else if(VAR_2->bAdSwitchedChecking == 1)
 {


  VAR_2->bAdSwitchedChecking = 0;


  VAR_2->AdRxSsThreshold = (VAR_2->AdRxSignalStrength + VAR_2->AdRxSsBeforeSwitched) / 2;

  VAR_2->AdRxSsThreshold = (VAR_2->AdRxSsThreshold > VAR_2->AdMaxRxSsThreshold) ?
     VAR_2->AdMaxRxSsThreshold: VAR_2->AdRxSsThreshold;
  if(VAR_2->AdRxSignalStrength < VAR_2->AdRxSsBeforeSwitched)
  {




   VAR_2->AdCheckPeriod *= 2;


   if(VAR_2->AdCheckPeriod > VAR_2->AdMaxCheckPeriod)
    VAR_2->AdCheckPeriod = VAR_2->AdMaxCheckPeriod;


   FUNC_0(VAR_1);
  }
  else
  {




   VAR_2->AdCheckPeriod = VAR_2->AdMinCheckPeriod;
  }



 }


 else
 {


  VAR_2->AdTickCount = 0;
  if((VAR_2->AdMainAntennaRxOkCnt < VAR_2->AdAuxAntennaRxOkCnt)
   && (VAR_2->CurrAntennaIndex == 0))
  {





   FUNC_0(VAR_1);
   VAR_2->bHWAdSwitched = 1;
  }
  else if((VAR_2->AdAuxAntennaRxOkCnt < VAR_2->AdMainAntennaRxOkCnt)
   && (VAR_2->CurrAntennaIndex == 1))
  {





   FUNC_0(VAR_1);
   VAR_2->bHWAdSwitched = 1;
  }
  else
  {





   VAR_2->bHWAdSwitched = 0;
  }
  if( (!VAR_2->bHWAdSwitched) && (VAR_3))
  {


  if(VAR_2->AdRxSignalStrength < VAR_2->AdRxSsThreshold)
  {



   VAR_2->AdRxSsBeforeSwitched = VAR_2->AdRxSignalStrength;
   VAR_2->bAdSwitchedChecking = 1;

   FUNC_0(VAR_1);
  }
  else
  {



   VAR_2->bAdSwitchedChecking = 0;

   if( (VAR_2->AdRxSignalStrength > (VAR_2->AdRxSsThreshold + 10)) &&
    VAR_2->AdRxSsThreshold <= VAR_2->AdMaxRxSsThreshold)
   {
    VAR_2->AdRxSsThreshold = (VAR_2->AdRxSsThreshold + VAR_2->AdRxSignalStrength) / 2;
    VAR_2->AdRxSsThreshold = (VAR_2->AdRxSsThreshold > VAR_2->AdMaxRxSsThreshold) ?
            VAR_2->AdMaxRxSsThreshold: VAR_2->AdRxSsThreshold;
   }


   if( VAR_2->AdCheckPeriod > VAR_2->AdMinCheckPeriod )
   {
    VAR_2->AdCheckPeriod /= 2;
   }
  }
  }
 }


 VAR_2->AdRxOkCnt = 0;
 VAR_2->AdMainAntennaRxOkCnt = 0;
 VAR_2->AdAuxAntennaRxOkCnt = 0;





}
