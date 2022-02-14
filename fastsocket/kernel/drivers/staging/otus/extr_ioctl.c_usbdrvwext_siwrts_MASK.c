
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;

int FUNC_1(struct net_device *VAR_1,
  struct iw_request_info *VAR_2,
  struct iw_param *VAR_3, char *VAR_4)
{
 struct usbdrv_private *VAR_5 = VAR_1->ml_priv;
 int VAR_6 = VAR_3->value;

 if (VAR_5->DeviceOpened != 1)
  return 0;

 if (VAR_3->disabled)
  VAR_6 = 2347;

 if ((VAR_6 < 0) || (VAR_6 > 2347))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_6);

 return 0;
}
