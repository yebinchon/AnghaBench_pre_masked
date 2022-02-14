
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_hub_descriptor {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct u132 {int going; int sw_lock; TYPE_1__* platform_dev; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int *,char*,...) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct u132*) ;
 int FUNC_5 (struct u132*,int,int) ;
 int FUNC_6 (struct u132*,struct usb_hub_descriptor*) ;
 int FUNC_7 (struct u132*,int *,int) ;
 int FUNC_8 (struct u132*,int,int) ;
 int FUNC_9 (struct u132*,int *) ;

__attribute__((used)) static int FUNC_10(struct usb_hcd *VAR_3, u16 VAR_4, u16 VAR_5,
 u16 VAR_6, char *VAR_7, u16 VAR_8)
{
 struct u132 *VAR_9 = FUNC_1(VAR_3);
 if (VAR_9->going > 1) {
  FUNC_0(&VAR_9->platform_dev->dev, "device has been removed %d\n"
   , VAR_9->going);
  return -VAR_0;
 } else if (VAR_9->going > 0) {
  FUNC_0(&VAR_9->platform_dev->dev, "device is being removed\n");
  return -VAR_2;
 } else {
  int VAR_10 = 0;
  FUNC_2(&VAR_9->sw_lock);
  switch (VAR_4) {
  case 134:
   switch (VAR_5) {
   case 135:
   case 136:
    break;
   default:
    goto stall;
   }
   break;
  case 129:
   switch (VAR_5) {
   case 135:
   case 136:
    break;
   default:
    goto stall;
   }
   break;
  case 133:{
    VAR_10 = FUNC_5(VAR_9,
     VAR_5, VAR_6);
    if (VAR_10)
     goto error;
    break;
   }
  case 132:{
    VAR_10 = FUNC_6(VAR_9,
     (struct usb_hub_descriptor *)VAR_7);
    if (VAR_10)
     goto error;
    break;
   }
  case 131:{
    VAR_10 = FUNC_9(VAR_9,
     (__le32 *) VAR_7);
    if (VAR_10)
     goto error;
    break;
   }
  case 130:{
    VAR_10 = FUNC_7(VAR_9,
     (__le32 *) VAR_7, VAR_6);
    if (VAR_10)
     goto error;
    break;
   }
  case 128:{
    VAR_10 = FUNC_8(VAR_9,
     VAR_5, VAR_6);
    if (VAR_10)
     goto error;
    break;
   }
  default:
   goto stall;
  error:
   FUNC_4(VAR_9);
   VAR_9->going = 1;
   break;
  stall:
   VAR_10 = -VAR_1;
   break;
  }
  FUNC_3(&VAR_9->sw_lock);
  return VAR_10;
 }
}
