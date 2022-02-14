
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int ,int*) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5, VAR_6 = 0x01;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 <<= VAR_2;
 if (VAR_3) {

  VAR_5 |= VAR_6;
 } else {

  VAR_6 ^= 0xff;
  VAR_5 &= VAR_6;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
