
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct stk_camera {struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

int FUNC_2(struct stk_camera *VAR_3, u16 VAR_4, int *VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->udev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, FUNC_1(VAR_6, 0),
   0x00,
   VAR_0 | VAR_2 | VAR_1,
   0x00,
   VAR_4,
   (u8 *) VAR_5,
   sizeof(u8),
   500);
 if (VAR_7 < 0)
  return VAR_7;
 else
  return 0;
}
