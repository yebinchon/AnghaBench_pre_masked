
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_1, u8 VAR_2,
 u8 VAR_3, u8 VAR_4, u8 VAR_5, u16 VAR_6,
 u16 VAR_7, u16 VAR_8, u16 VAR_9)
{
 u8 VAR_10[10];
 VAR_10[0] = VAR_0;
 VAR_10[1] = (VAR_2 << 7) | (VAR_3 << 6) | (VAR_4 << 5) | (VAR_5 << 4);
 VAR_10[2] = (VAR_6 >> 8) & 0xff;
 VAR_10[3] = VAR_6 & 0xff;
 VAR_10[4] = (VAR_7 >> 8) & 0xff;
 VAR_10[5] = VAR_7 & 0xff;
 VAR_10[6] = (VAR_8 >> 8) & 0xff;
 VAR_10[7] = VAR_8 & 0xff;
 VAR_10[8] = (VAR_9 >> 8) & 0xff;
 VAR_10[9] = VAR_9 & 0xff;

 return FUNC_0(VAR_1, VAR_10, 10);
}
