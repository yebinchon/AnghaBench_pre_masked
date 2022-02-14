
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct net_device*,char*,size_t*) ;

int FUNC_3(struct net_device *VAR_1,
   struct iw_request_info *VAR_2,
   struct iw_point *VAR_3, char *VAR_4)
{
 struct usbdrv_private *VAR_5 = VAR_1->ml_priv;
 u8_t VAR_6;
 char VAR_7[VAR_0 + 1];

 if (VAR_5->DeviceOpened != 1)
  return 0;

 FUNC_2(VAR_1, &VAR_7[0], &VAR_6);
 VAR_7[VAR_6] = 0;

 VAR_3->flags = 1;
 VAR_3->length = FUNC_1(VAR_7);

 FUNC_0(VAR_4, VAR_7, VAR_3->length);

 return 0;
}
