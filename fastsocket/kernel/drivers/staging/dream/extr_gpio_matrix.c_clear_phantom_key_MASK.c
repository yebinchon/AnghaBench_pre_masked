
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_kp {int keys_pressed; TYPE_1__* input_dev; struct gpio_event_matrix_info* keypad_info; } ;
struct gpio_event_matrix_info {int ninputs; unsigned short* keymap; int flags; int * input_gpios; int * output_gpios; } ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,unsigned short,int,int,int ,int ) ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_kp *VAR_1, int VAR_2, int VAR_3)
{
 struct gpio_event_matrix_info *VAR_4 = VAR_1->keypad_info;
 int VAR_5 = VAR_2 * VAR_4->ninputs + VAR_3;
 unsigned short VAR_6 = VAR_4->keymap[VAR_5];;

 if (!FUNC_2(VAR_6, VAR_1->input_dev->key)) {
  if (VAR_4->flags & VAR_0)
   FUNC_1("gpiomatrix: phantom key %x, %d-%d (%d-%d) "
    "cleared\n", VAR_6, VAR_2, VAR_3,
    VAR_4->output_gpios[VAR_2], VAR_4->input_gpios[VAR_3]);
  FUNC_0(VAR_5, VAR_1->keys_pressed);
 } else {
  if (VAR_4->flags & VAR_0)
   FUNC_1("gpiomatrix: phantom key %x, %d-%d (%d-%d) "
    "not cleared\n", VAR_6, VAR_2, VAR_3,
    VAR_4->output_gpios[VAR_2], VAR_4->input_gpios[VAR_3]);
 }
}
