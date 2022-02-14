
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct usb_device_id {int match_flags; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct TYPE_3__ {scalar_t__ bDeviceClass; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,struct usb_device_id const*) ;

int FUNC_2(struct usb_interface *VAR_5,
       const struct usb_device_id *VAR_6)
{
 struct usb_host_interface *VAR_7;
 struct usb_device *VAR_8;


 if (VAR_6 == ((void*)0))
  return 0;

 VAR_7 = VAR_5->cur_altsetting;
 VAR_8 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_8, VAR_6))
  return 0;




 if (VAR_8->descriptor.bDeviceClass == VAR_0 &&
   !(VAR_6->match_flags & VAR_4) &&
   (VAR_6->match_flags & (VAR_1 |
    VAR_3 |
    VAR_2)))
  return 0;

 if ((VAR_6->match_flags & VAR_1) &&
     (VAR_6->bInterfaceClass != VAR_7->desc.bInterfaceClass))
  return 0;

 if ((VAR_6->match_flags & VAR_3) &&
     (VAR_6->bInterfaceSubClass != VAR_7->desc.bInterfaceSubClass))
  return 0;

 if ((VAR_6->match_flags & VAR_2) &&
     (VAR_6->bInterfaceProtocol != VAR_7->desc.bInterfaceProtocol))
  return 0;

 return 1;
}
