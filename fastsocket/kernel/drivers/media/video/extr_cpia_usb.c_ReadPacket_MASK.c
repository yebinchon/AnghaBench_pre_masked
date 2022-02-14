
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int,int*,size_t,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4, u8 *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 if (!VAR_5 || VAR_7 <= 0)
  return -VAR_0;

 return FUNC_0(VAR_4, FUNC_1(VAR_4, 0),
    VAR_5[1] + (VAR_5[0] << 8),
    VAR_1 | VAR_3 | VAR_2,
    VAR_5[2] + (VAR_5[3] << 8),
    VAR_5[4] + (VAR_5[5] << 8), VAR_6, VAR_7, 1000);
}
