
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int *,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct dvb_usb_device *VAR_4, int VAR_5)
{
 u8 VAR_6[3];
 int VAR_7;
 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_0;
 VAR_6[2] = VAR_5 ? VAR_2 : VAR_1;
 VAR_7 = FUNC_0(VAR_4,VAR_6,3);
 FUNC_1(10);
 return VAR_7;
}
