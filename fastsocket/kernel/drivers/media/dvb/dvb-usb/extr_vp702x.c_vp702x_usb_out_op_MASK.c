
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
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,int,int (*) (char*,int ,int ,int )) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_3, u8 VAR_4, u16 VAR_5,
        u16 VAR_6, u8 *VAR_7, int VAR_8)
{
 int VAR_9;
 FUNC_0("out: req. %02x, val: %04x, ind: %04x, buffer: ",VAR_4,VAR_5,VAR_6);
 FUNC_1(VAR_7,VAR_8,FUNC_0);

 if ((VAR_9 = FUNC_2(VAR_3->udev,
   FUNC_3(VAR_3->udev,0),
   VAR_4,
   VAR_2 | VAR_1,
   VAR_5,VAR_6,VAR_7,VAR_8,
   2000)) != VAR_8) {
  FUNC_4("usb out operation failed. (%d)",VAR_9);
  return -VAR_0;
 } else
  return 0;
}
