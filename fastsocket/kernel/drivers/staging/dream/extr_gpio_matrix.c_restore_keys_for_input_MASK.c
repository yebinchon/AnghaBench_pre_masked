
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_kp {TYPE_1__* keypad_info; int keys_pressed; } ;
struct TYPE_2__ {int ninputs; int noutputs; } ;


 int FUNC_0 (struct gpio_kp*,int,int) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_kp *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 VAR_4 = VAR_1 * VAR_0->keypad_info->ninputs + VAR_2;
 while (VAR_1 < VAR_0->keypad_info->noutputs) {
  if (FUNC_1(VAR_4, VAR_0->keys_pressed)) {
   VAR_3 = 1;
   FUNC_0(VAR_0, VAR_1, VAR_2);
  }
  VAR_4 += VAR_0->keypad_info->ninputs;
  VAR_1++;
 }
 return VAR_3;
}
