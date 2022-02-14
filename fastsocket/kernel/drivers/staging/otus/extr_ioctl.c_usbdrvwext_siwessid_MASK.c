
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; int pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*,int ,int ) ;
 int FUNC_9 (struct net_device*,char*,int ) ;

int FUNC_10(struct net_device *VAR_5,
  struct iw_request_info *VAR_6,
  struct iw_point *VAR_7, char *VAR_8)
{
 char VAR_9[VAR_4 + 1];
 struct usbdrv_private *VAR_10 = VAR_5->ml_priv;

 if (!FUNC_1(VAR_5))
  return -VAR_2;

 if (VAR_7->flags == 1) {
  if (VAR_7->length > (VAR_4 + 1))
   return -VAR_0;

  if (FUNC_0(&VAR_9, VAR_7->pointer, VAR_7->length))
   return -VAR_1;

  VAR_9[VAR_7->length] = '\0';



  if (VAR_10->DeviceOpened == 1) {
   FUNC_9(VAR_5, VAR_9, FUNC_2(VAR_9));
   FUNC_8(VAR_5, FUNC_6(VAR_5),
      VAR_3);
   FUNC_7(VAR_5, FUNC_5(VAR_5));


   FUNC_3(VAR_5, 0);
   FUNC_4(VAR_5);


  }
 }

 return 0;
}
