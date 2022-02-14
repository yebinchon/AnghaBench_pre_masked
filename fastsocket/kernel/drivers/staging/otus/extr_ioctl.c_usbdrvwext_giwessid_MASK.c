
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__*) ;

int FUNC_4(struct net_device *VAR_2,
  struct iw_request_info *VAR_3,
  struct iw_point *VAR_4, char *VAR_5)
{
 struct usbdrv_private *VAR_6 = VAR_2->ml_priv;
 u8_t VAR_7;
 char VAR_8[VAR_1 + 1];
 int VAR_9;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_6->DeviceOpened != 1)
  return 0;

 FUNC_3(VAR_2, &VAR_8[0], &VAR_7);


 VAR_9 = (int)VAR_7;


 if (VAR_9 > VAR_1)
  VAR_9 = VAR_1;

 VAR_8[VAR_9] = '\0';

 VAR_4->flags = 1;
 VAR_4->length = FUNC_2(VAR_8);

 FUNC_0(VAR_5, VAR_8, VAR_4->length);
 return 0;
}
