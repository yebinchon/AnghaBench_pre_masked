
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_device*,int*,int,int) ;
 int FUNC_2 (struct usb_device*,int*,int,int) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_0)
{
 int VAR_1 = 0, VAR_2;
 u8 VAR_3[512] = {0};

 VAR_3[0] = 0x0a;
 VAR_2 = 1;
 FUNC_0("FRM Firmware Cold Reset");
 VAR_1 |= FUNC_2(VAR_0, VAR_3 , VAR_2, 1);
 VAR_1 |= FUNC_1(VAR_0, VAR_3, VAR_2, 1);

 return;
}
