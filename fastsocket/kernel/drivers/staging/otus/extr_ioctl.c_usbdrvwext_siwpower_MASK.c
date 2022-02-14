
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;

int FUNC_1(struct net_device *VAR_2,
  struct iw_request_info *VAR_3,
  struct iw_param *VAR_4, char *VAR_5)
{
 struct usbdrv_private *VAR_6 = VAR_2->ml_priv;
 u8_t VAR_7;

 if (VAR_6->DeviceOpened != 1)
  return 0;

 if (VAR_4->disabled)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 FUNC_0(VAR_2, VAR_7);

 return 0;
}
