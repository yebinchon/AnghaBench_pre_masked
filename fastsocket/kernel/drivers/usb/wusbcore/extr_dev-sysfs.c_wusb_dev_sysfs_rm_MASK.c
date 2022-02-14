
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusb_dev {struct usb_device* usb_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;

void FUNC_1(struct wusb_dev *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->usb_dev;
 if (VAR_2)
  FUNC_0(&VAR_2->dev.kobj, &VAR_0);
}
