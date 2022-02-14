
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_kp {TYPE_1__* input_dev; int keys_pressed; struct gpio_event_matrix_info* keypad_info; } ;
struct gpio_event_matrix_info {unsigned short* keymap; int flags; int * input_gpios; int * output_gpios; } ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned short,int) ;
 int FUNC_1 (char*,unsigned short,int,int,int ,int,...) ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_kp *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct gpio_event_matrix_info *VAR_7 = VAR_3->keypad_info;
 int VAR_8 = FUNC_2(VAR_4, VAR_3->keys_pressed);
 unsigned short VAR_9 = VAR_7->keymap[VAR_4];
 if (VAR_8 != FUNC_2(VAR_9, VAR_3->input_dev->key)) {
  if (VAR_9 == VAR_2) {
   if (VAR_7->flags & VAR_1)
    FUNC_1("gpiomatrix: unmapped key, %d-%d "
     "(%d-%d) changed to %d\n",
     VAR_5, VAR_6, VAR_7->output_gpios[VAR_5],
     VAR_7->input_gpios[VAR_6], VAR_8);
  } else {
   if (VAR_7->flags & VAR_0)
    FUNC_1("gpiomatrix: key %x, %d-%d (%d-%d) "
     "changed to %d\n", VAR_9,
     VAR_5, VAR_6, VAR_7->output_gpios[VAR_5],
     VAR_7->input_gpios[VAR_6], VAR_8);
   FUNC_0(VAR_3->input_dev, VAR_9, VAR_8);
  }
 }
}
