
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2,
  u8 VAR_3, int VAR_4)
{
 u8 VAR_5[2] = {VAR_3, VAR_4};
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_5, 2, &VAR_6, 1);

 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_6 == 0x01)
  return 0;
 else {
  FUNC_1("gpio_write failed.\n");
  return -VAR_1;
 }
}
