
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,int const,int,int const,int const,int*,size_t,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3, const u8 *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_3, FUNC_1(VAR_3, 0),
    VAR_4[1] + (VAR_4[0] << 8),
    VAR_2 | VAR_1,
    VAR_4[2] + (VAR_4[3] << 8),
    VAR_4[4] + (VAR_4[5] << 8), VAR_5, VAR_6, 1000);
}
