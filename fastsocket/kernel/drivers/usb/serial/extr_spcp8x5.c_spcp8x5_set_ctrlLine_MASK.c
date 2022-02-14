
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u8 ;
struct usb_device {int dev; } ;
typedef enum spcp8x5_type { ____Placeholder_spcp8x5_type } spcp8x5_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,unsigned short,int,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_4, u8 VAR_5,
    enum spcp8x5_type VAR_6)
{
 int VAR_7;
 u8 VAR_8 = 0 ;

 if (VAR_6 == VAR_3)
  return -VAR_0;

 VAR_8 = (unsigned short)VAR_5;
 VAR_7 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0),
     VAR_2, VAR_1,
     VAR_8, 0x04, ((void*)0), 0, 100);
 if (VAR_7 != 0)
  FUNC_0(&VAR_4->dev, "usb_control_msg return %#x\n", VAR_7);
 return VAR_7;
}
