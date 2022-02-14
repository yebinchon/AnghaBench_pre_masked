
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int vin_reg2_preset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usb_usbvision*,int ) ;
 int FUNC_1 (struct usb_usbvision*,int ,int) ;

int FUNC_2(struct usb_usbvision *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_2,
         VAR_5 | VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_8, VAR_2,
         VAR_5 | VAR_3 |
         VAR_4);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_8, VAR_7,
         VAR_0 | VAR_1 |
      VAR_8->vin_reg2_preset);
 if (VAR_9 < 0)
  return VAR_9;


 while ((FUNC_0(VAR_8, VAR_6) & 0x01) != 1)
  ;

 return 0;
}
