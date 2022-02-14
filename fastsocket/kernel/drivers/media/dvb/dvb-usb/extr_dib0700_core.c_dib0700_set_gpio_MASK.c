
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
typedef enum dib07x0_gpios { ____Placeholder_dib07x0_gpios } dib07x0_gpios ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;

int FUNC_1(struct dvb_usb_device *VAR_1, enum dib07x0_gpios VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5[3] = { VAR_0, VAR_2, ((VAR_3 & 0x01) << 7) | ((VAR_4 & 0x01) << 6) };
 return FUNC_0(VAR_1, VAR_5, sizeof(VAR_5));
}
