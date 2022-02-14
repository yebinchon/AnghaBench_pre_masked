
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {scalar_t__ usb_mode; scalar_t__ asleep; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct twl4030_usb*,int) ;
 int FUNC_1 (struct twl4030_usb*,int) ;
 int FUNC_2 (struct twl4030_usb*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct twl4030_usb *VAR_1)
{
 if (!VAR_1->asleep)
  return;

 FUNC_1(VAR_1, 1);
 FUNC_0(VAR_1, 1);
 FUNC_2(VAR_1, VAR_1->usb_mode);
 if (VAR_1->usb_mode == VAR_0)
  FUNC_0(VAR_1, 0);
 VAR_1->asleep = 0;
}
