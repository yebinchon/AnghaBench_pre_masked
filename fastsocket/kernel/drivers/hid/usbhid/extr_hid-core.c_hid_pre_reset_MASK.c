
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int restart_work; int lock; int iofl; } ;
struct usb_interface {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usbhid_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hid_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_1)
{
 struct hid_device *VAR_2 = FUNC_5(VAR_1);
 struct usbhid_device *VAR_3 = VAR_2->driver_data;

 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_0, &VAR_3->iofl);
 FUNC_4(&VAR_3->lock);
 FUNC_0(&VAR_3->restart_work);
 FUNC_1(VAR_3);

 return 0;
}
