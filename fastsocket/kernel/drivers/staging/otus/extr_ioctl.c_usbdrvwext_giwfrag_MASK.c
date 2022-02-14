
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbdrv_private {int DeviceOpened; int cs_lock; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int disabled; int fixed; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1,
  struct iw_request_info *VAR_2,
  struct iw_param *VAR_3, char *VAR_4)
{
 struct usbdrv_private *VAR_5 = VAR_1->ml_priv;
 u16 VAR_6;
 unsigned long VAR_7;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_5->DeviceOpened != 1)
  return 0;

 FUNC_1(&VAR_5->cs_lock, VAR_7);

 VAR_6 = FUNC_3(VAR_1);

 VAR_3->value = VAR_6;

 VAR_3->disabled = (VAR_6 >= 2346);
 VAR_3->fixed = 1;

 FUNC_2(&VAR_5->cs_lock, VAR_7);

 return 0;
}
