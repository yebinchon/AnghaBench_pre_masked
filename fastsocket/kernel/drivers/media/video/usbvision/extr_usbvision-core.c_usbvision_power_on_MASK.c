
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int power; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_usbvision*,int ,int) ;

int FUNC_2(struct usb_usbvision *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_0, "");

 FUNC_1(VAR_5, VAR_1, VAR_4);
 FUNC_1(VAR_5, VAR_1,
   VAR_4 | VAR_3);

 FUNC_1(VAR_5, VAR_1,
   VAR_4 | VAR_2);
 VAR_6 = FUNC_1(VAR_5, VAR_1,
   VAR_4 | VAR_2 | VAR_3);
 if (VAR_6 == 1)
  VAR_5->power = 1;
 FUNC_0(VAR_0, "%s: err_code %d", (VAR_6 < 0) ? "ERROR" : "power is on", VAR_6);
 return VAR_6;
}
