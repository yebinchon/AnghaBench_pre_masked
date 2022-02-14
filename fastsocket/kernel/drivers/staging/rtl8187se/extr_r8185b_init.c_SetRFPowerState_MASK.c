
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ eRFPowerState; int rf_chip; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;




 int FUNC_0 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;

bool
FUNC_3(
 struct net_device *VAR_0,
 RT_RF_POWER_STATE VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_1(VAR_0);
 bool VAR_3 = 0;


 if(VAR_1 == VAR_2->eRFPowerState)
 {

  return VAR_3;
 }

 switch(VAR_2->rf_chip)
 {
  case 129:
  case 128:
    VAR_3 = FUNC_0(VAR_0, VAR_1);
   break;

  default:
   FUNC_2("SetRFPowerState8185(): unknown RFChipID: 0x%X!!!\n", VAR_2->rf_chip);
   break;;
}


 return VAR_3;
}
