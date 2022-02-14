
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 >= 0x8000)
  return -VAR_0;

 VAR_5 |= 0x8000;

 if ((VAR_6 = FUNC_0(VAR_2->udev, VAR_1, VAR_5, (VAR_3 << 8) | (VAR_4 * 4) )) != 0)
  return VAR_6;

 if ((VAR_6 = FUNC_0(VAR_2->udev, VAR_1, 0, (VAR_3 << 8) | (VAR_4 * 4) )) != 0)
  return VAR_6;

 return VAR_6;
}
