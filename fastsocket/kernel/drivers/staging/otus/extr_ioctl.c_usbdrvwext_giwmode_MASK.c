
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; int cs_lock; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_4,
 struct iw_request_info *VAR_5,
 __u32 *VAR_6, char *VAR_7)
{
 unsigned long VAR_8;
 struct usbdrv_private *VAR_9 = VAR_4->ml_priv;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_9->DeviceOpened != 1)
  return 0;

 FUNC_1(&VAR_9->cs_lock, VAR_8);

 switch (FUNC_3(VAR_4)) {
 case 130:
  *VAR_6 = VAR_3;
  break;
 case 128:
  *VAR_6 = VAR_2;
  break;
 case 129:
  *VAR_6 = VAR_1;
  break;
 default:
  *VAR_6 = VAR_1;
  break;
 }

 FUNC_2(&VAR_9->cs_lock, VAR_8);

 return 0;
}
