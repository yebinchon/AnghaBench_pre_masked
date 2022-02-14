
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ftdi {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*,int ,void*) ;
 struct usb_ftdi* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0, u8 VAR_1,
        void *VAR_2)
{
        struct usb_ftdi *VAR_3 = FUNC_1(VAR_0);
        return FUNC_0(VAR_3, VAR_1, VAR_2);
}
