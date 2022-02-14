
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ eRFPowerState; scalar_t__ RfOffReason; int eInactivePowerState; int bSwRfProcessing; scalar_t__ bInactivePs; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

void
FUNC_2(
 struct net_device *VAR_4
 )
{
 struct r8180_priv *VAR_5 = (struct r8180_priv *)FUNC_1(VAR_4);
 RT_RF_POWER_STATE VAR_6;

 if (VAR_5->bInactivePs)
 {
  VAR_6 = VAR_5->eRFPowerState;
  if ((VAR_6 == VAR_1 || VAR_6 == VAR_3) && (!VAR_5->bSwRfProcessing) && VAR_5->RfOffReason <= VAR_0)
  {

   VAR_5->eInactivePowerState = VAR_2;
   FUNC_0(VAR_4);
  }
 }

}
