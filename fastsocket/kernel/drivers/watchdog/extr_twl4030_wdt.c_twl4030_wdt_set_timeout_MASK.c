
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct twl4030_wdt {int timer_margin; TYPE_1__ miscdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl4030_wdt*) ;

__attribute__((used)) static int FUNC_2(struct twl4030_wdt *VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 > 30) {
  FUNC_0(VAR_1->miscdev.parent,
   "Timeout can only be in the range [0-30] seconds");
  return -VAR_0;
 }
 VAR_1->timer_margin = VAR_2;
 return FUNC_1(VAR_1);
}
