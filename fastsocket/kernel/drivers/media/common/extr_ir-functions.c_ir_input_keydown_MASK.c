
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ir_input_state {int keypressed; scalar_t__ keycode; scalar_t__ ir_raw; scalar_t__ ir_key; int ir_codes; } ;
struct input_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct input_dev*,struct ir_input_state*) ;

void FUNC_2(struct input_dev *VAR_0, struct ir_input_state *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1->ir_codes, VAR_2);

 if (VAR_1->keypressed && VAR_1->keycode != VAR_4) {
  VAR_1->keypressed = 0;
  FUNC_1(VAR_0,VAR_1);
 }
 if (!VAR_1->keypressed) {
  VAR_1->ir_key = VAR_2;
  VAR_1->ir_raw = VAR_3;
  VAR_1->keycode = VAR_4;
  VAR_1->keypressed = 1;
  FUNC_1(VAR_0,VAR_1);
 }
}
