
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int *,int) ;

int FUNC_1(struct dvb_usb_device *VAR_3, int VAR_4)
{
 if (VAR_4) {
  u8 VAR_5[3] = { VAR_2, VAR_0, VAR_1 };
  return FUNC_0(VAR_3,VAR_5,3);
 } else
  return 0;
}
