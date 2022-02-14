
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8 FUNC_0(struct net_device* VAR_4, u8 VAR_5)
{
 u8 VAR_6 = VAR_1;

 switch(VAR_5)
 {
  case 0:
   VAR_6 = VAR_0;
   break;
  case 1:
   VAR_6 = VAR_1;
   break;
  case 2:
   VAR_6 = VAR_2;
   break;
  case 3:
   VAR_6 = VAR_3;
   break;
  default:
   break;
 }

 return VAR_6;
}
