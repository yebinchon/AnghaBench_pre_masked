
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int devnum; int wusb; } ;



__attribute__((used)) static void FUNC_0(struct usb_device *VAR_0, int VAR_1)
{

 if (!VAR_0->wusb)
  VAR_0->devnum = VAR_1;
}
