
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
typedef int WIRELESS_MODE ;






__attribute__((used)) static long FUNC_0(
 struct net_device* VAR_0,
 WIRELESS_MODE VAR_1,
 u8 VAR_2
 )
{

 long VAR_3 = 0;
 long VAR_4 = 0;
 switch(VAR_1)
 {
 case 130:
  VAR_3 = -7;
  break;

 case 129:
 case 128:
  VAR_3 = -8;
  break;
 default:
  break;
 }

 VAR_4 = VAR_2 / 2 + VAR_3;

 return VAR_4;
}
