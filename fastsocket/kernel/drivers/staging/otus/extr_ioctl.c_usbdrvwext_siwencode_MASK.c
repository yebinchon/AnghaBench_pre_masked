
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zsKeyInfo {char* key; int keyIndex; int flag; int keyLength; } ;
struct usbdrv_private {int DeviceOpened; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int FUNC_6 (struct net_device*,struct zsKeyInfo) ;
 int FUNC_7 (struct net_device*,int) ;

int FUNC_8(struct net_device *VAR_7,
  struct iw_request_info *VAR_8,
  struct iw_point *VAR_9, char *VAR_10)
{
 struct zsKeyInfo VAR_11;
 int VAR_12;
 int VAR_13 = VAR_4;
 struct usbdrv_private *VAR_14 = VAR_7->ml_priv;

 if (!FUNC_0(VAR_7))
  return -VAR_0;

 if ((VAR_9->flags & VAR_2) == 0) {
  VAR_11.key = VAR_10;
  VAR_11.keyLength = VAR_9->length;
  VAR_11.keyIndex = (VAR_9->flags & VAR_3) - 1;
  if (VAR_11.keyIndex >= 4)
   VAR_11.keyIndex = 0;
  VAR_11.flag = VAR_6;

  FUNC_6(VAR_7, VAR_11);
  VAR_13 = VAR_5;
 } else {
  for (VAR_12 = 1; VAR_12 < 4; VAR_12++)
   FUNC_4(VAR_7, 0, VAR_12);
  VAR_13 = VAR_4;

 }

 if (VAR_14->DeviceOpened == 1) {
  FUNC_7(VAR_7, VAR_13);
  FUNC_5(VAR_7, FUNC_3(VAR_7), VAR_1);



  FUNC_1(VAR_7, 0);
  FUNC_2(VAR_7);


 }

 return 0;
}
