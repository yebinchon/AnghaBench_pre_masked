
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {scalar_t__ eRFPowerState; int eInactivePowerState; TYPE_1__* ieee80211; int bSwRfProcessing; scalar_t__ bInactivePs; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

void
FUNC_2(
 struct net_device *VAR_3
 )
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_1(VAR_3);
 RT_RF_POWER_STATE VAR_5;

 if (VAR_4->bInactivePs)
 {
  VAR_5 = VAR_4->eRFPowerState;
  if (VAR_5 == VAR_2 && !VAR_4->bSwRfProcessing
   && (VAR_4->ieee80211->state != VAR_0 ))
  {

   VAR_4->eInactivePowerState = VAR_1;
   FUNC_0(VAR_3);
  }
 }

}
