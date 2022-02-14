
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ eRFPowerState; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;

bool FUNC_3(struct net_device* VAR_2, RT_RF_POWER_STATE VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_2);
 bool VAR_5 = VAR_1;

 FUNC_0(VAR_0, "---------> PHY_SetRFPowerState(): eRFPowerState(%d)\n", VAR_3);

 if(VAR_3 == VAR_4->ieee80211->eRFPowerState)
 {
  FUNC_0(VAR_0, "<--------- PHY_SetRFPowerState(): discard the request for eRFPowerState(%d) is the same.\n", VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3);

 FUNC_0(VAR_0, "<--------- PHY_SetRFPowerState(): bResult(%d)\n", VAR_5);

 return VAR_5;
}
