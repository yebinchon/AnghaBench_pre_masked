
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_buf ;
typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int udev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_4, u8 VAR_5, u8 VAR_6,
     u8 *VAR_7, u16 VAR_8, u8 *VAR_9, u16 VAR_10)
{
 int VAR_11;
 u16 VAR_12;
 u8 VAR_13[6];

 switch (VAR_8) {
 case 1:
  VAR_12 = VAR_7[0] << 8;
  break;
 case 2:
  VAR_12 = VAR_7[0] << 8;
  VAR_12 += VAR_7[1];
  break;
 default:
  FUNC_2("wlen = %x, aborting.", VAR_8);
  return -VAR_1;
 }

 VAR_11 = FUNC_0(VAR_4->udev, FUNC_1(VAR_4->udev, 0), VAR_5,
         VAR_3|VAR_2, VAR_6 << 1, VAR_12,
         VAR_13, sizeof(VAR_13), VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_5) {
 case 129:
 case 128:

  VAR_9[0] = VAR_13[4];
 }

 return VAR_11;
}
