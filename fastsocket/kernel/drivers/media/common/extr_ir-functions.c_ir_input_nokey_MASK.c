
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_input_state {scalar_t__ keypressed; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,struct ir_input_state*) ;

void FUNC_1(struct input_dev *VAR_0, struct ir_input_state *VAR_1)
{
 if (VAR_1->keypressed) {
  VAR_1->keypressed = 0;
  FUNC_0(VAR_0,VAR_1);
 }
}
