
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;


 int FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_0,
  struct iw_request_info *VAR_1,
  struct iw_freq *VAR_2, char *VAR_3)
{
 struct usbdrv_private *VAR_4 = VAR_0->ml_priv;

 if (VAR_4->DeviceOpened != 1)
  return 0;

 VAR_2->m = FUNC_0(VAR_0);
 VAR_2->e = 3;

 return 0;
}
