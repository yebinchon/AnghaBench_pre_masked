
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1, u16 VAR_2,
    u16 VAR_3, u8 VAR_4, u8 VAR_5, u16 * VAR_6)
{
 int VAR_7;
 u8 VAR_8, VAR_9;

 if ((VAR_7 = FUNC_0(VAR_1, VAR_3, &VAR_8)))
  return VAR_7;
 if ((VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_9)))
  return VAR_7;
 switch (VAR_4) {
 case 0:
  *VAR_6 = ((u16) (VAR_9 & 0x03) << 8) + (u16) VAR_8;
  break;
 case 2:
  *VAR_6 = ((u16) (VAR_9 & 0x0C) << 6) + (u16) VAR_8;
  break;
 case 4:
  *VAR_6 = ((u16) (VAR_9 & 0x30) << 4) + (u16) VAR_8;
  break;
 case 6:
  *VAR_6 = ((u16) (VAR_9 & 0xC0) << 2) + (u16) VAR_8;
  break;
 default:
  FUNC_1("invalid pos in read word agc");
  return -VAR_0;
 }
 return 0;

}
