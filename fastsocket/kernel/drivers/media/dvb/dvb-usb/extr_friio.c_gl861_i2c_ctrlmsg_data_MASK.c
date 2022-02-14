
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int,scalar_t__,scalar_t__,int*,scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_3, u8 VAR_4,
      u8 *VAR_5, u16 VAR_6, u8 *VAR_7, u16 VAR_8)
{
 u16 VAR_9 = VAR_5[0];
 u16 VAR_10 = VAR_4 << (8 + 1);
 int VAR_11 = (VAR_7 == ((void*)0) || VAR_8 == 0);
 u8 VAR_12, VAR_13;

 FUNC_0("write to PLL:0x%02x via FE reg:0x%02x, len:%d\n",
   VAR_5[1], VAR_5[0], VAR_6 - 1);

 if (VAR_11 && VAR_6 >= 2) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_2;
  FUNC_1(20);
  return FUNC_2(VAR_3->udev, FUNC_3(VAR_3->udev, 0),
           VAR_12, VAR_13, VAR_10, VAR_9,
           &VAR_5[1], VAR_6 - 1, 2000);
 }

 FUNC_0("not supported ctrl-msg, aborting.");
 return -VAR_0;
}
