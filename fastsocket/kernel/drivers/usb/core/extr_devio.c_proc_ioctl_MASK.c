
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbdevfs_ioctl {int ioctl_code; int data; int ifno; } ;
struct TYPE_5__ {int driver; } ;
struct usb_interface {TYPE_2__ dev; } ;
struct usb_driver {int (* ioctl ) (struct usb_interface*,int,void*) ;} ;
struct dev_state {TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (struct dev_state*) ;
 scalar_t__ FUNC_3 (void*,int ,int) ;
 scalar_t__ FUNC_4 (int ,void*,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (void*,int ,int) ;
 int FUNC_10 (struct usb_interface*,int,void*) ;
 struct usb_driver* FUNC_11 (int ) ;
 int FUNC_12 (struct usb_driver*,struct usb_interface*) ;
 struct usb_interface* FUNC_13 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_14(struct dev_state *VAR_13, struct usbdevfs_ioctl *VAR_14)
{
 int VAR_15;
 void *VAR_16 = ((void*)0);
 int VAR_17 = 0;
 struct usb_interface *VAR_18 = ((void*)0);
 struct usb_driver *VAR_19 = ((void*)0);


 if ((VAR_15 = FUNC_1(VAR_14->ioctl_code)) > 0) {
  if ((VAR_16 = FUNC_8(VAR_15, VAR_9)) == ((void*)0))
   return -VAR_7;
  if ((FUNC_0(VAR_14->ioctl_code) & VAR_12)) {
   if (FUNC_3(VAR_16, VAR_14->data, VAR_15)) {
    FUNC_7(VAR_16);
    return -VAR_1;
   }
  } else {
   FUNC_9(VAR_16, 0, VAR_15);
  }
 }

 if (!FUNC_2(VAR_13)) {
  FUNC_7(VAR_16);
  return -VAR_5;
 }

 if (VAR_13->dev->state != VAR_10)
  VAR_17 = -VAR_2;
 else if (!(VAR_18 = FUNC_13(VAR_13->dev, VAR_14->ifno)))
  VAR_17 = -VAR_3;
 else switch (VAR_14->ioctl_code) {


 case 128:
  if (VAR_18->dev.driver) {
   VAR_19 = FUNC_11(VAR_18->dev.driver);
   FUNC_5(&VAR_18->dev, "disconnect by usbfs\n");
   FUNC_12(VAR_19, VAR_18);
  } else
   VAR_17 = -VAR_4;
  break;


 case 129:
  if (!VAR_18->dev.driver)
   VAR_17 = FUNC_6(&VAR_18->dev);
  else
   VAR_17 = -VAR_0;
  break;


 default:
  if (VAR_18->dev.driver)
   VAR_19 = FUNC_11(VAR_18->dev.driver);
  if (VAR_19 == ((void*)0) || VAR_19->ioctl == ((void*)0)) {
   VAR_17 = -VAR_8;
  } else {
   VAR_17 = VAR_19->ioctl(VAR_18, VAR_14->ioctl_code, VAR_16);
   if (VAR_17 == -VAR_6)
    VAR_17 = -VAR_8;
  }
 }


 if (VAR_17 >= 0
   && (FUNC_0(VAR_14->ioctl_code) & VAR_11) != 0
   && VAR_15 > 0
   && FUNC_4(VAR_14->data, VAR_16, VAR_15) != 0)
  VAR_17 = -VAR_1;

 FUNC_7(VAR_16);
 return VAR_17;
}
