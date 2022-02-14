
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int,int*,int,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3[10] = {0};

 VAR_2 |= FUNC_1(VAR_1, FUNC_2(VAR_1, 0),
   0x06, 0x80, 0x0302, 0x00, VAR_3, 0x0006, 200);
 FUNC_0("Firmware Status: %x (%x)", VAR_2 , VAR_3[2]);

 return (VAR_2 < 0) ? -VAR_0 : VAR_3[2];
}
