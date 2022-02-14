
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; int cs_lock; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1,
  struct iw_request_info *VAR_2,
  struct iw_param *VAR_3, char *VAR_4)
{
 unsigned long VAR_5;
 struct usbdrv_private *VAR_6 = VAR_1->ml_priv;

 if (VAR_6->DeviceOpened != 1)
  return 0;

 FUNC_0(&VAR_6->cs_lock, VAR_5);

 if (FUNC_2(VAR_1) == VAR_0)
  VAR_3->disabled = 1;
 else
  VAR_3->disabled = 0;

 FUNC_1(&VAR_6->cs_lock, VAR_5);

 return 0;
}
