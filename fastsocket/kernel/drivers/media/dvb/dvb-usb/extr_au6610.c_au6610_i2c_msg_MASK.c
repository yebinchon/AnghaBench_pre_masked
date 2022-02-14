
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int,int,int*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_2, u8 VAR_3,
     u8 *VAR_4, u16 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 u8 VAR_8;
 u8 VAR_9 = (VAR_6 == ((void*)0) || VAR_7 == 0);

 if (VAR_9) {
  VAR_8 = VAR_1;
 } else {
  VAR_8 = VAR_0;
 }

 return FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
