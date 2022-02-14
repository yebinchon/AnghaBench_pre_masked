
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union at76_hwcfg {int dummy; } at76_hwcfg ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int ,union at76_hwcfg*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_4,
      union at76_hwcfg *VAR_5, int VAR_6)
{
 return FUNC_0(VAR_4, FUNC_1(VAR_4, 0), 0x33,
          VAR_3 | VAR_1 |
          VAR_2, 0x0a02, 0,
          VAR_5, VAR_6, VAR_0);
}
