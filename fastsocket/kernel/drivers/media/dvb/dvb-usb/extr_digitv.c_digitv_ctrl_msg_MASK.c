
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_0,
  u8 VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_5 == ((void*)0) || VAR_6 == 0);
 u8 VAR_8[7],VAR_9[7];
 FUNC_3(VAR_8,0,7); FUNC_3(VAR_9,0,7);

 VAR_8[0] = VAR_1;
 VAR_8[1] = VAR_2;
 VAR_8[2] = VAR_7 ? VAR_4 : VAR_6;

 if (VAR_7) {
  FUNC_2(&VAR_8[3],VAR_3,VAR_4);
  FUNC_1(VAR_0,VAR_8,7);
 } else {
  FUNC_0(VAR_0,VAR_8,7,VAR_9,7,10);
  FUNC_2(VAR_5,&VAR_9[3],VAR_6);
 }
 return 0;
}
