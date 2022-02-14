
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; } ;
struct usb_device {int autosuspend_disabled; int persist_enabled; TYPE_1__ descriptor; scalar_t__ quirks; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct usb_device_id* FUNC_1 (struct usb_device*) ;
 struct usb_device_id* VAR_1 ;

void FUNC_2(struct usb_device *VAR_2)
{
 const struct usb_device_id *VAR_3 = VAR_1;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  VAR_2->quirks = (u32)(VAR_3->driver_info);
 if (VAR_2->quirks)
  FUNC_0(&VAR_2->dev, "USB quirks for this device: %x\n",
    VAR_2->quirks);
 VAR_2->persist_enabled = 1;

}
