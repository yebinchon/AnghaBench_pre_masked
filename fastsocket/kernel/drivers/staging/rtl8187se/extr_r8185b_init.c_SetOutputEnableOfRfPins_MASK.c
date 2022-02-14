
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int rf_chip; } ;
struct net_device {int dummy; } ;



 int VAR_0 ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int) ;

void
FUNC_2(
 struct net_device *VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_0(VAR_1);

 switch(VAR_2->rf_chip)
 {
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_1, VAR_0, 0x1bff);

  break;
 }
}
