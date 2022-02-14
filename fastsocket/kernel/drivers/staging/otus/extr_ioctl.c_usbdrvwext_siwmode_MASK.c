
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
typedef int u8_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;

int FUNC_4(struct net_device *VAR_4,
  struct iw_request_info *VAR_5,
  union iwreq_data *VAR_6, char *VAR_7)
{
 struct usbdrv_private *VAR_8 = VAR_4->ml_priv;
 u8_t VAR_9;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_8->DeviceOpened != 1)
  return 0;

 switch (VAR_6->mode) {
 case 128:
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 default:
  VAR_9 = VAR_2;
  break;
 }

 FUNC_3(VAR_4, VAR_9);
 FUNC_1(VAR_4, 1);
 FUNC_2(VAR_4);

 return 0;
}
