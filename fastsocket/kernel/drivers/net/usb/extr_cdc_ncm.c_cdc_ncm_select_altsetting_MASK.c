
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int udev; } ;
struct usb_interface {int num_altsetting; TYPE_2__* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct usb_host_interface*) ;
 scalar_t__ VAR_3 ;
 struct usb_host_interface* FUNC_1 (struct usb_interface*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

u8 FUNC_3(struct usbnet *VAR_4, struct usb_interface *VAR_5)
{
 struct usb_host_interface *VAR_6;
 if (VAR_3 && VAR_5->num_altsetting == 2) {
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  if (VAR_6 && FUNC_0(VAR_6) &&
      !FUNC_2(VAR_4->udev,
           VAR_5->cur_altsetting->desc.bInterfaceNumber,
           VAR_0))
   return VAR_1;
 }
 return VAR_2;
}
