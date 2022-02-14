
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2, u8 VAR_3,
     u8 *VAR_4, u16 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 u8 VAR_8[VAR_5+4];

 int VAR_9 = (VAR_6 == ((void*)0) || VAR_7 == 0),
  VAR_10 = 2 + VAR_5 + (VAR_9 ? 0 : 2);

 VAR_8[0] = VAR_9 ? VAR_1 : VAR_0;
 VAR_8[1] = (VAR_3 << 1) | (VAR_9 ? 0 : 1);

 FUNC_1(&VAR_8[2],VAR_4,VAR_5);

 if (!VAR_9) {
  VAR_8[VAR_5+2] = (VAR_7 >> 8) & 0xff;
  VAR_8[VAR_5+3] = VAR_7 & 0xff;
 }

 return FUNC_0(VAR_2,VAR_8,VAR_10,VAR_6,VAR_7,0);
}
