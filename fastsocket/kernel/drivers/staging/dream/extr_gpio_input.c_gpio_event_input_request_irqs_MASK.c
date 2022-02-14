
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_input_state {int * key_state; TYPE_2__* info; } ;
struct TYPE_4__ {int keymap_size; TYPE_1__* keymap; } ;
struct TYPE_3__ {int gpio; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int *) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (unsigned int,int ,unsigned long,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_input_state *VAR_3)
{
 int VAR_4;
 int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7 = VAR_1 | VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->info->keymap_size; VAR_4++) {
  VAR_5 = VAR_6 = FUNC_2(VAR_3->info->keymap[VAR_4].gpio);
  if (VAR_5 < 0)
   goto err_gpio_get_irq_num_failed;
  VAR_5 = FUNC_4(VAR_6, VAR_2,
      VAR_7, "gpio_keys", &VAR_3->key_state[VAR_4]);
  if (VAR_5) {
   FUNC_3("gpio_event_input_request_irqs: request_irq "
    "failed for input %d, irq %d\n",
    VAR_3->info->keymap[VAR_4].gpio, VAR_6);
   goto err_request_irq_failed;
  }
  FUNC_0(VAR_6);
 }
 return 0;

 for (VAR_4 = VAR_3->info->keymap_size - 1; VAR_4 >= 0; VAR_4--) {
  FUNC_1(FUNC_2(VAR_3->info->keymap[VAR_4].gpio),
    &VAR_3->key_state[VAR_4]);
err_request_irq_failed:
err_gpio_get_irq_num_failed:
  ;
 }
 return VAR_5;
}
