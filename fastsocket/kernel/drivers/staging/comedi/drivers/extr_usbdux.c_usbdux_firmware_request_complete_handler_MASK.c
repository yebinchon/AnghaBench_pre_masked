
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {struct usb_device* usbdev; } ;
struct usb_device {int dev; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct usbduxsub*,int ,int ) ;
 int FUNC_3 (struct firmware const*) ;

__attribute__((used)) static void FUNC_4(const struct firmware *VAR_1,
           void *VAR_2)
{
 struct usbduxsub *VAR_3 = VAR_2;
 struct usb_device *VAR_4 = VAR_3->usbdev;
 int VAR_5;

 if (VAR_1 == ((void*)0)) {
  FUNC_1(&VAR_4->dev,
   "Firmware complete handler without firmware!\n");
  return;
 }





 VAR_5 = FUNC_2(VAR_3, VAR_1->data, VAR_1->size);

 if (VAR_5) {
  FUNC_1(&VAR_4->dev,
   "Could not upload firmware (err=%d)\n", VAR_5);
  goto out;
 }
 FUNC_0(VAR_4, VAR_0);
 out:
 FUNC_3(VAR_1);
}
