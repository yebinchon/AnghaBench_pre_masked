
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_hub {int tt; struct usb_device* hdev; } ;
struct usb_hcd {TYPE_2__* driver; } ;
struct usb_device_descriptor {int bMaxPacketSize0; int bDescriptorType; } ;
struct TYPE_8__ {int bMaxPacketSize0; void* bcdUSB; } ;
struct TYPE_10__ {void* wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_3__ desc; } ;
struct usb_device {int speed; int devnum; int ttport; scalar_t__ wusb; int lpm_capable; TYPE_1__ descriptor; int dev; TYPE_4__ ep0; TYPE_7__* bus; scalar_t__ config; int * tt; int parent; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_14__ {int otg_port; TYPE_6__* controller; scalar_t__ b_hnp_enable; } ;
struct TYPE_13__ {TYPE_5__* driver; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_9__ {int flags; int (* update_device ) (struct usb_hcd*,struct usb_device*) ;} ;
typedef int DEFINE_MUTEX ;


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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int VAR_19 ;

 scalar_t__ FUNC_0 (int) ;
 struct usb_hcd* FUNC_1 (TYPE_7__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,char*,...) ;
 int FUNC_6 (struct usb_hub*,int,int ) ;
 int FUNC_7 (struct usb_hub*,int,struct usb_device*,unsigned int,int) ;
 int FUNC_8 (struct usb_device*,int) ;
 int VAR_20 ;
 int FUNC_9 (struct usb_device_descriptor*) ;
 struct usb_device_descriptor* FUNC_10 (int ,int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct usb_hcd*,struct usb_device*) ;
 int FUNC_16 (struct usb_device*,int) ;
 int FUNC_17 (struct usb_device*,int ,int ,int ,int,int ,struct usb_device_descriptor*,int ,int ) ;
 int FUNC_18 (struct usb_device*) ;
 int FUNC_19 (struct usb_device*) ;
 int FUNC_20 (struct usb_device*) ;
 int FUNC_21 (struct usb_device*,int) ;
 int FUNC_22 () ;
 int FUNC_23 (struct usb_device*) ;

__attribute__((used)) static int
FUNC_24 (struct usb_hub *VAR_21, struct usb_device *VAR_22, int VAR_23,
  int VAR_24)
{
 static DEFINE_MUTEX(VAR_25);

 struct usb_device *VAR_26 = VAR_21->hdev;
 struct usb_hcd *VAR_27 = FUNC_1(VAR_26->bus);
 int VAR_28, VAR_29, VAR_30;
 unsigned VAR_31 = VAR_13;
 enum usb_device_speed VAR_32 = VAR_22->speed;
 char *VAR_33, *VAR_34;
 int VAR_35 = VAR_22->devnum;




 if (!VAR_26->parent) {
  VAR_31 = VAR_12;
  if (VAR_23 == VAR_26->bus->otg_port)
   VAR_26->bus->b_hnp_enable = 0;
 }



 if (VAR_32 == 130)
  VAR_31 = VAR_11;

 FUNC_13(&VAR_25);



 VAR_30 = FUNC_7(VAR_21, VAR_23, VAR_22, VAR_31, 0);
 if (VAR_30 < 0)
  goto fail;


 VAR_30 = -VAR_2;

 if (VAR_32 != VAR_19 && VAR_32 != VAR_22->speed) {
  FUNC_3(&VAR_22->dev, "device reset changed speed!\n");
  goto fail;
 }
 VAR_32 = VAR_22->speed;






 switch (VAR_22->speed) {
 case 129:
 case 128:
  VAR_22->ep0.desc.wMaxPacketSize = FUNC_2(512);
  break;
 case 131:
  VAR_22->ep0.desc.wMaxPacketSize = FUNC_2(64);
  break;
 case 132:




  VAR_22->ep0.desc.wMaxPacketSize = FUNC_2(64);
  break;
 case 130:
  VAR_22->ep0.desc.wMaxPacketSize = FUNC_2(8);
  break;
 default:
  goto fail;
 }

 VAR_34 = "";
 switch (VAR_22->speed) {
 case 130: VAR_33 = "low"; break;
 case 132: VAR_33 = "full"; break;
 case 131: VAR_33 = "high"; break;
 case 129:
    VAR_33 = "super";
    break;
 case 128:
    VAR_33 = "variable";
    VAR_34 = "Wireless ";
    break;
 default: VAR_33 = "?"; break;
 }
 if (VAR_22->speed != 129)
  FUNC_5(&VAR_22->dev,
    "%s %s speed %sUSB device number %d using %s\n",
    (VAR_22->config) ? "reset" : "new", VAR_33, VAR_34,
    VAR_35, VAR_22->bus->controller->driver->name);


 if (VAR_26->tt) {
  VAR_22->tt = VAR_26->tt;
  VAR_22->ttport = VAR_26->ttport;
 } else if (VAR_22->speed != 131
   && VAR_26->speed == 131) {
  VAR_22->tt = &VAR_21->tt;
  VAR_22->ttport = VAR_23;
 }
 for (VAR_28 = 0; VAR_28 < VAR_7; (++VAR_28, FUNC_12(100))) {
  if (FUNC_0(VAR_24) && !(VAR_27->driver->flags & VAR_9)) {
   struct usb_device_descriptor *VAR_36;
   int VAR_37 = 0;


   VAR_36 = FUNC_10(64, VAR_8);
   if (!VAR_36) {
    VAR_30 = -VAR_3;
    continue;
   }





   for (VAR_29 = 0; VAR_29 < 3; ++VAR_29) {
    VAR_36->bMaxPacketSize0 = 0;
    VAR_37 = FUNC_17(VAR_22, FUNC_22(),
     VAR_18, VAR_15,
     VAR_16 << 8, 0,
     VAR_36, 64,
     VAR_20);
    switch (VAR_36->bMaxPacketSize0) {
    case 8: case 16: case 32: case 64: case 255:
     if (VAR_36->bDescriptorType ==
       VAR_16) {
      VAR_37 = 0;
      break;
     }

    default:
     if (VAR_37 == 0)
      VAR_37 = -VAR_5;
     break;
    }
    if (VAR_37 == 0)
     break;
   }
   VAR_22->descriptor.bMaxPacketSize0 =
     VAR_36->bMaxPacketSize0;
   FUNC_9(VAR_36);

   VAR_30 = FUNC_7(VAR_21, VAR_23, VAR_22, VAR_31, 0);
   if (VAR_30 < 0)
    goto fail;
   if (VAR_32 != VAR_22->speed) {
    FUNC_3(&VAR_22->dev,
     "device reset changed speed!\n");
    VAR_30 = -VAR_2;
    goto fail;
   }
   if (VAR_37) {
    FUNC_4(&VAR_22->dev,
     "device descriptor read/64, error %d\n",
     VAR_37);
    VAR_30 = -VAR_1;
    continue;
   }

  }






  if (VAR_22->wusb == 0) {
   for (VAR_29 = 0; VAR_29 < VAR_14; ++VAR_29) {
    VAR_30 = FUNC_8(VAR_22, VAR_35);
    if (VAR_30 >= 0)
     break;
    FUNC_12(200);
   }
   if (VAR_30 < 0) {
    FUNC_4(&VAR_22->dev,
     "device not accepting address %d, error %d\n",
     VAR_35, VAR_30);
    goto fail;
   }
   if (VAR_22->speed == 129) {
    VAR_35 = VAR_22->devnum;
    FUNC_5(&VAR_22->dev,
      "%s SuperSpeed USB device number %d using %s\n",
      (VAR_22->config) ? "reset" : "new",
      VAR_35, VAR_22->bus->controller->driver->name);
   }





   FUNC_12(10);
   if (FUNC_0(VAR_24) && !(VAR_27->driver->flags & VAR_9))
    break;
    }

  VAR_30 = FUNC_21(VAR_22, 8);
  if (VAR_30 < 8) {
   FUNC_4(&VAR_22->dev,
     "device descriptor read/8, error %d\n",
     VAR_30);
   if (VAR_30 >= 0)
    VAR_30 = -VAR_1;
  } else {
   VAR_30 = 0;
   break;
  }
 }
 if (VAR_30)
  goto fail;







 if ((VAR_22->speed == 129) &&
   (FUNC_11(VAR_22->descriptor.bcdUSB) < 0x0300)) {
  FUNC_4(&VAR_22->dev, "got a wrong device descriptor, "
    "warm reset device\n");
  FUNC_7(VAR_21, VAR_23, VAR_22,
    VAR_10, 1);
  VAR_30 = -VAR_0;
  goto fail;
 }

 if (VAR_22->descriptor.bMaxPacketSize0 == 0xff ||
   VAR_22->speed == 129)
  VAR_28 = 512;
 else
  VAR_28 = VAR_22->descriptor.bMaxPacketSize0;
 if (FUNC_11(VAR_22->ep0.desc.wMaxPacketSize) != VAR_28) {
  if (VAR_22->speed != 132 ||
    !(VAR_28 == 8 || VAR_28 == 16 || VAR_28 == 32 || VAR_28 == 64)) {
   FUNC_4(&VAR_22->dev, "ep0 maxpacket = %d\n", VAR_28);
   VAR_30 = -VAR_1;
   goto fail;
  }
  FUNC_3(&VAR_22->dev, "ep0 maxpacket = %d\n", VAR_28);
  VAR_22->ep0.desc.wMaxPacketSize = FUNC_2(VAR_28);
  FUNC_19(VAR_22);
 }

 VAR_30 = FUNC_21(VAR_22, VAR_17);
 if (VAR_30 < (signed)sizeof(VAR_22->descriptor)) {
  FUNC_4(&VAR_22->dev, "device descriptor read/all, error %d\n",
   VAR_30);
  if (VAR_30 >= 0)
   VAR_30 = -VAR_4;
  goto fail;
 }

 if (VAR_22->wusb == 0 && FUNC_11(VAR_22->descriptor.bcdUSB) >= 0x0201) {
  VAR_30 = FUNC_20(VAR_22);
  if (!VAR_30) {
   VAR_22->lpm_capable = FUNC_18(VAR_22);
   FUNC_23(VAR_22);
  }
 }

 VAR_30 = 0;

 if (VAR_27->driver->update_device)
  VAR_27->driver->update_device(VAR_27, VAR_22);
fail:
 if (VAR_30) {
  FUNC_6(VAR_21, VAR_23, 0);
  FUNC_16(VAR_22, VAR_35);
 }
 FUNC_14(&VAR_25);
 return VAR_30;
}
