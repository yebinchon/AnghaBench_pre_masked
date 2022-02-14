
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct dvb_usb_device*,scalar_t__*,int *,int*) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,scalar_t__*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_3, u32 *VAR_4, int *VAR_5)
{
 u8 VAR_6[5];
 if (FUNC_2(VAR_3->udev,FUNC_3(VAR_3->udev,0),
    0x04, VAR_2 | VAR_1, 0, 0, VAR_6, 5,
    2000) != 5)
  return -VAR_0;


 FUNC_1(VAR_3,VAR_6,VAR_4,VAR_5);
 if (VAR_6[0] != 0)
  FUNC_0("key: %x %x %x %x %x\n",VAR_6[0],VAR_6[1],VAR_6[2],VAR_6[3],VAR_6[4]);
 return 0;
}
