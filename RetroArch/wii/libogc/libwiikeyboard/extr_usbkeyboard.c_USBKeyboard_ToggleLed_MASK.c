
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
typedef int USBKeyboard_led ;
struct TYPE_2__ {int leds; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;

s32 FUNC_1(const USBKeyboard_led VAR_1)
{
 if (!VAR_0)
  return -1;

 VAR_0->leds = VAR_0->leds ^ (1 << VAR_1);

 if (FUNC_0() < 0)
  return -2;

 return 1;
}
