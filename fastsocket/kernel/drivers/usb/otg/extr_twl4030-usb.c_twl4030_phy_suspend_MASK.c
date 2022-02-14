
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int asleep; } ;


 int FUNC_0 (struct twl4030_usb*,int ) ;

__attribute__((used)) static void FUNC_1(struct twl4030_usb *VAR_0, int VAR_1)
{
 if (VAR_0->asleep)
  return;

 FUNC_0(VAR_0, 0);
 VAR_0->asleep = 1;
}
