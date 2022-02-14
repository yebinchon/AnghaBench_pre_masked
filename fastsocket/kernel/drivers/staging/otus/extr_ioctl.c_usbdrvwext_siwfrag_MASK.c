
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ value; scalar_t__ disabled; } ;


 int FUNC_0 (struct net_device*,scalar_t__) ;

int FUNC_1(struct net_device *VAR_0,
  struct iw_request_info *VAR_1,
  struct iw_param *VAR_2, char *VAR_3)
{
 struct usbdrv_private *VAR_4 = VAR_0->ml_priv;
 u16_t VAR_5;

 if (VAR_4->DeviceOpened != 1)
  return 0;

 if (VAR_2->disabled)
  VAR_5 = 0;
 else
  VAR_5 = VAR_2->value;

 FUNC_0(VAR_0, VAR_5);

 return 0;
}
