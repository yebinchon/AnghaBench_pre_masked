
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int,int ) ;

int FUNC_5(struct net_device *VAR_1,
  struct iw_request_info *VAR_2,
  struct iw_freq *VAR_3, char *VAR_4)
{
 u32_t VAR_5;
 struct usbdrv_private *VAR_6 = VAR_1->ml_priv;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_3->e > 1)
  return -VAR_0;

 if (VAR_3->e == 1) {
  VAR_5 = (VAR_3->m / 100000);

  if (VAR_5 > 4000000) {
   if (VAR_5 > 5825000)
    VAR_5 = 5825000;
   else if (VAR_5 < 4920000)
    VAR_5 = 4920000;
   else if (VAR_5 < 5000000)
    VAR_5 = (((VAR_5 - 4000000) / 5000) * 5000)
      + 4000000;
   else
    VAR_5 = (((VAR_5 - 5000000) / 5000) * 5000)
      + 5000000;
  } else {
   if (VAR_5 > 2484000)
    VAR_5 = 2484000;
   else if (VAR_5 < 2412000)
    VAR_5 = 2412000;
   else
    VAR_5 = (((VAR_5 - 2412000) / 5000) * 5000)
      + 2412000;
  }
 } else {
  VAR_5 = FUNC_1(VAR_3->m);

  if (VAR_5 != -1)
   VAR_5 *= 1000;
  else
   VAR_5 = 2412000;
 }




 if (VAR_6->DeviceOpened == 1) {
  FUNC_4(VAR_1, VAR_5, 0);


  FUNC_2(VAR_1, 0);
  FUNC_3(VAR_1);


 }

 return 0;
}
