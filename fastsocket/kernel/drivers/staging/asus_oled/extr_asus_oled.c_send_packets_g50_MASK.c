
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct asus_oled_packet {int dummy; } ;


 int FUNC_0 (struct usb_device*,struct asus_oled_packet*,int,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct usb_device *VAR_0,
        struct asus_oled_packet *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, 0, 0x100, VAR_2,
      0x10, 0x00, 0x02, 0x01, 0x00, 0x01);
 FUNC_0(VAR_0, VAR_1, 0x100, 0x080, VAR_2,
      0x10, 0x00, 0x02, 0x02, 0x80, 0x00);

 FUNC_0(VAR_0, VAR_1, 0x180, 0x100, VAR_2,
      0x11, 0x00, 0x03, 0x01, 0x00, 0x01);
 FUNC_0(VAR_0, VAR_1, 0x280, 0x100, VAR_2,
      0x11, 0x00, 0x03, 0x02, 0x00, 0x01);
 FUNC_0(VAR_0, VAR_1, 0x380, 0x080, VAR_2,
      0x11, 0x00, 0x03, 0x03, 0x80, 0x00);
}
