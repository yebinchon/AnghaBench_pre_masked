
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ftdi {scalar_t__ initialized; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ftdi*,int,int ,int *) ;
 struct usb_ftdi* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_1, int VAR_2,
        u8 VAR_3, u32 *VAR_4)
{
        struct usb_ftdi *VAR_5 = FUNC_1(VAR_1);
        if (VAR_5->initialized == 0) {
                return -VAR_0;
        } else
                return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
