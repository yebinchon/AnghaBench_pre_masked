
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; scalar_t__ fixed; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1,
  struct iw_request_info *VAR_2,
  struct iw_param *VAR_3, char *VAR_4)
{
 struct usbdrv_private *VAR_5 = VAR_1->ml_priv;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_5->DeviceOpened != 1)
  return 0;

 VAR_3->fixed = 0;
 VAR_3->disabled = 0;
 VAR_3->value = FUNC_1(VAR_1) * 1000;

 return 0;
}
