
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int rf_chip; } ;
struct net_device {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

u8
FUNC_1(
 struct net_device *VAR_2
)
{
 u8 VAR_3 = 0;
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_0(VAR_2);

 switch(VAR_4->rf_chip)
 {
 case 129:
 case 128:
  VAR_3 = (VAR_0 | VAR_1);
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }

 return VAR_3;
}
