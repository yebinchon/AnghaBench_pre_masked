
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dev {int * usb_dev; } ;
struct usb_device {scalar_t__ wusb; int devnum; struct wusb_dev* wusb_dev; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct wusb_dev*) ;
 int FUNC_2 (struct wusb_dev*) ;
 int FUNC_3 (struct wusb_dev*) ;
 int FUNC_4 (struct wusb_dev*) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_0)
{
 struct wusb_dev *VAR_1 = VAR_0->wusb_dev;

 if (VAR_0->wusb == 0 || VAR_0->devnum == 1)
  return;

 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 VAR_1->usb_dev = ((void*)0);
 VAR_0->wusb_dev = ((void*)0);
 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
}
