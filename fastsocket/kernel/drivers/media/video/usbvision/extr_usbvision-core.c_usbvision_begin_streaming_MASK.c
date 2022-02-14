
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ isoc_mode; int vin_reg2_preset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_usbvision*) ;
 int FUNC_1 (struct usb_usbvision*,int ,int) ;

int FUNC_2(struct usb_usbvision *VAR_3)
{
 if (VAR_3->isoc_mode == VAR_0)
  FUNC_0(VAR_3);
 return FUNC_1(VAR_3, VAR_2,
  VAR_1 | VAR_3->vin_reg2_preset);
}
