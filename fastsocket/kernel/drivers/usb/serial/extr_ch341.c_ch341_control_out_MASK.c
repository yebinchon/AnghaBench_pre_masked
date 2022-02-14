
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct usb_device*,int ,scalar_t__,int,scalar_t__,scalar_t__,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_4, u8 VAR_5,
        u16 VAR_6, u16 VAR_7)
{
 int VAR_8;
 FUNC_0("ch341_control_out(%02x,%02x,%04x,%04x)", VAR_1|0x40,
  (int)VAR_5, (int)VAR_6, (int)VAR_7);

 VAR_8 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0), VAR_5,
       VAR_3 | VAR_2 | VAR_1,
       VAR_6, VAR_7, ((void*)0), 0, VAR_0);

 return VAR_8;
}
