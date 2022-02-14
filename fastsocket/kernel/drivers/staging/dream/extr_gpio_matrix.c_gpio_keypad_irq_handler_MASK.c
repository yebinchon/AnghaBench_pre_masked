
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_kp {int timer; int wake_lock; int use_irq; struct gpio_event_matrix_info* keypad_info; } ;
struct gpio_event_matrix_info {unsigned int flags; int ninputs; int noutputs; int * output_gpios; int * input_gpios; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct gpio_kp *VAR_7 = VAR_5;
 struct gpio_event_matrix_info *VAR_8 = VAR_7->keypad_info;
 unsigned VAR_9 = VAR_8->flags;

 if (!VAR_7->use_irq)
  return VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_8->ninputs; VAR_6++)
  FUNC_0(FUNC_3(VAR_8->input_gpios[VAR_6]));
 for (VAR_6 = 0; VAR_6 < VAR_8->noutputs; VAR_6++) {
  if (VAR_9 & VAR_1)
   FUNC_2(VAR_8->output_gpios[VAR_6],
    !(VAR_9 & VAR_0));
  else
   FUNC_1(VAR_8->output_gpios[VAR_6]);
 }
 FUNC_6(&VAR_7->wake_lock);
 FUNC_4(&VAR_7->timer, FUNC_5(0, 0), VAR_2);
 return VAR_3;
}
