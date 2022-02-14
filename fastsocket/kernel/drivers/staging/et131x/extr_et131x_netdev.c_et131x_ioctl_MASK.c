
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,struct ifreq*,int) ;

int FUNC_1(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
