
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_adapter*,int) ;
 int FUNC_1 (int ,int*,int) ;

int FUNC_2(struct dvb_usb_adapter *VAR_4, int VAR_5)
{
 u8 VAR_6[3] = { 0 };
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_4,VAR_5)) < 0)
  return VAR_7;

 if (VAR_5) {
  VAR_6[0] = VAR_3;
  VAR_6[1] = 0x00;
  if ((VAR_7 = FUNC_1(VAR_4->dev,VAR_6,2)) < 0)
   return VAR_7;
 }

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_5 ? VAR_1 : VAR_0;
 return FUNC_1(VAR_4->dev,VAR_6,3);
}
