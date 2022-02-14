
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int dummy; } ;
struct usb_device {int dummy; } ;


 struct usb_hub* FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_hub*) ;

void FUNC_2(struct usb_device *VAR_0)
{
 struct usb_hub *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_1);
}
