
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
typedef int WIRELESS_MODE ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static u8 FUNC_0(
 struct net_device* VAR_1,
 WIRELESS_MODE VAR_2,
 long VAR_3
 )
{

 u8 VAR_4 = 0;
 long VAR_5 = 0;
 switch(VAR_2)
 {
 case 130:
  VAR_5 = -7;
  break;

 case 129:
 case 128:
  VAR_5 = -8;
  break;
 default:
  break;
 }

 if((VAR_3 - VAR_5) > 0)
 {
  VAR_4 = (u8)((VAR_3 - VAR_5) * 2);
 }
 else
 {
  VAR_4 = 0;
 }


 if(VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 return VAR_4;
}
