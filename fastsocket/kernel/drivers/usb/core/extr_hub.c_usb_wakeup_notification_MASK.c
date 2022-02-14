
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int wakeup_bits; } ;
struct usb_device {int dummy; } ;


 struct usb_hub* FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_hub*) ;
 int FUNC_2 (unsigned int,int ) ;

void FUNC_3(struct usb_device *VAR_0,
  unsigned int VAR_1)
{
 struct usb_hub *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_1, VAR_2->wakeup_bits);
  FUNC_1(VAR_2);
 }
}
