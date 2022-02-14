
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ CurrAntennaIndex; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

bool
FUNC_2(
 struct net_device *VAR_0
 )
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_1(VAR_0);

 bool VAR_2;

 if(VAR_1->CurrAntennaIndex == 0)
 {
   VAR_2 = FUNC_0(VAR_0, 1);



 }
 else
 {
   VAR_2 = FUNC_0(VAR_0, 0);



 }

 return VAR_2;
}
