
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct usbdrv_private {int DeviceOpened; } ;
struct sockaddr {int * sa_data; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (struct net_device*,int *) ;

int FUNC_6(struct net_device *VAR_2, struct iw_request_info *VAR_3,
  struct sockaddr *VAR_4, char *VAR_5)
{
 struct usbdrv_private *VAR_6 = VAR_2->ml_priv;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 if (FUNC_3(VAR_2) == VAR_1) {

  FUNC_5(VAR_2, (u16_t *)&VAR_4->sa_data[0]);
 } else {

  FUNC_4(VAR_2, &VAR_4->sa_data[0]);
 }

 if (VAR_6->DeviceOpened == 1) {


  FUNC_1(VAR_2, 0);
  FUNC_2(VAR_2);


 }

 return 0;
}
