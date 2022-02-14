
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {int sem; struct usb_device* usbdev; } ;
struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int VAR_0 ;
 int FUNC_5 (struct usbduxsub*) ;
 int FUNC_6 (int *) ;
 struct usbduxsub* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct usbduxsub *VAR_2 = FUNC_7(VAR_1);
 struct usb_device *VAR_3 = FUNC_4(VAR_1);

 if (!VAR_2) {
  FUNC_2(&VAR_1->dev,
   "comedi_: disconnect called with null pointer.\n");
  return;
 }
 if (VAR_2->usbdev != VAR_3) {
  FUNC_2(&VAR_1->dev, "comedi_: BUG! called with wrong ptr!!!\n");
  return;
 }
 FUNC_0(VAR_3);
 FUNC_3(&VAR_0);
 FUNC_3(&VAR_2->sem);
 FUNC_5(VAR_2);
 FUNC_6(&VAR_2->sem);
 FUNC_6(&VAR_0);
 FUNC_1(&VAR_1->dev, "comedi_: disconnected from the usb\n");
}
