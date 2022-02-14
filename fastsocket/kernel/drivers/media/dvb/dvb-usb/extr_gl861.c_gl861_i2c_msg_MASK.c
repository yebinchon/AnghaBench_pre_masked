
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,int,int,int*,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_5, u8 VAR_6,
    u8 *VAR_7, u16 VAR_8, u8 *VAR_9, u16 VAR_10)
{
 u16 VAR_11;
 u16 VAR_12 = VAR_6 << (8 + 1);
 int VAR_13 = (VAR_9 == ((void*)0) || VAR_10 == 0);
 u8 VAR_14, VAR_15;

 if (VAR_13) {
  VAR_14 = VAR_3;
  VAR_15 = VAR_4;
 } else {
  VAR_14 = VAR_2;
  VAR_15 = VAR_1;
 }

 switch (VAR_8) {
 case 1:
  VAR_11 = VAR_7[0];
  break;
 case 2:
  VAR_11 = VAR_7[0];
  VAR_12 = VAR_12 + VAR_7[1];
  break;
 default:
  FUNC_3("wlen = %x, aborting.", VAR_8);
  return -VAR_0;
 }

 FUNC_0(1);

 return FUNC_1(VAR_5->udev, FUNC_2(VAR_5->udev, 0), VAR_14, VAR_15,
          VAR_12, VAR_11, VAR_9, VAR_10, 2000);
}
