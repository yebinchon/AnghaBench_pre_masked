
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct r8180_priv {scalar_t__ eRFPowerState; TYPE_1__ SwAntennaDiversityTimer; scalar_t__ up; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_3 ;

void
FUNC_4(
 struct net_device *VAR_4
 )
{
 struct r8180_priv *VAR_5 = (struct r8180_priv *)FUNC_3(VAR_4);
 RT_RF_POWER_STATE VAR_6;







 VAR_6 = VAR_5->eRFPowerState;
 do{
  if (VAR_6 == VAR_1)
  {

   break;
  }
  else if (VAR_6 == VAR_2)
  {


   break;
  }
  FUNC_1(VAR_4);

 }while(0);

 if(VAR_5->up)
 {
  VAR_5->SwAntennaDiversityTimer.expires = VAR_3 + FUNC_0(VAR_0);
  FUNC_2(&VAR_5->SwAntennaDiversityTimer);
 }


}
