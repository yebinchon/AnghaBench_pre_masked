
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bLength; } ;
struct TYPE_3__ {TYPE_2__ descr; } ;
struct wusbhc {int gtk_index; TYPE_1__ gtk; } ;
struct wusb_dev {struct usb_device* usb_dev; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct wusbhc *VAR_5, struct wusb_dev *VAR_6)
{
 struct usb_device *VAR_7 = VAR_6->usb_dev;

 return FUNC_0(
  VAR_7, FUNC_1(VAR_7, 0),
  VAR_3,
  VAR_0 | VAR_4 | VAR_2,
  VAR_1 << 8 | VAR_5->gtk_index, 0,
  &VAR_5->gtk.descr, VAR_5->gtk.descr.bLength,
  1000);
}
