
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_kp {int some_keys_pressed; int keys_pressed; TYPE_1__* keypad_info; } ;
struct TYPE_2__ {int noutputs; int ninputs; } ;


 int FUNC_0 (struct gpio_kp*,int,int) ;
 int FUNC_1 (struct gpio_kp*,int,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_kp *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 int VAR_4;

 if (VAR_0->some_keys_pressed < 3)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->keypad_info->noutputs; VAR_1++) {
  VAR_3 = -1;
  VAR_4 = VAR_1 * VAR_0->keypad_info->ninputs;
  for (VAR_2 = 0; VAR_2 < VAR_0->keypad_info->ninputs; VAR_2++, VAR_4++) {
   if (FUNC_2(VAR_4, VAR_0->keys_pressed)) {
    if (VAR_3 == -1) {
     VAR_3 = VAR_2;
     continue;
    }
    if (VAR_3 >= 0) {
     if (!FUNC_1(VAR_0, VAR_1 + 1,
         VAR_3))
      break;
     FUNC_0(VAR_0, VAR_1, VAR_3);
     VAR_3 = -2;
    }
    FUNC_1(VAR_0, VAR_1, VAR_2);
   }
  }
 }
}
