
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero_addr ;
typedef int u8_t ;
struct usbdrv_private {int DeviceOpened; scalar_t__ adapterState; } ;
struct sockaddr {int * sa_data; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct net_device*,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_2,
  struct iw_request_info *VAR_3,
  struct sockaddr *VAR_4, char *VAR_5)
{
 struct usbdrv_private *VAR_6 = VAR_2->ml_priv;

 if (VAR_6->DeviceOpened != 1)
  return 0;

 if (FUNC_3(VAR_2) == VAR_0) {

  FUNC_2(VAR_2, &VAR_4->sa_data[0]);
 } else {

  if (VAR_6->adapterState == VAR_1) {
   FUNC_1(VAR_2, &VAR_4->sa_data[0]);
  } else {
   u8_t VAR_7[6] = { 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00 };
   FUNC_0(&VAR_4->sa_data[0], VAR_7,
       sizeof(VAR_7));
  }
 }

 return 0;
}
