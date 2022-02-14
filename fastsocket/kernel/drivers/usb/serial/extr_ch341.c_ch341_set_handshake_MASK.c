
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*,int,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0, u8 VAR_1)
{
 FUNC_1("ch341_set_handshake(0x%02x)", VAR_1);
 return FUNC_0(VAR_0, 0xa4, ~VAR_1, 0);
}
