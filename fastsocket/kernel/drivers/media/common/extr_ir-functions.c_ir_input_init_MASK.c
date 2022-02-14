
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ir_scancode_table {int size; TYPE_1__* scan; } ;
struct ir_input_state {int ir_type; int * ir_codes; } ;
struct input_dev {int keycodesize; int keycodemax; int evbit; int keybit; int * keycode; } ;
struct TYPE_2__ {int scancode; int keycode; } ;
typedef int IR_KEYTAB_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct input_dev *VAR_4, struct ir_input_state *VAR_5,
     int VAR_6, struct ir_scancode_table *VAR_7)
{
 int VAR_8;

 VAR_5->ir_type = VAR_6;

 FUNC_1(VAR_5->ir_codes, 0, sizeof(VAR_5->ir_codes));







 if (VAR_7)
  for (VAR_8 = 0; VAR_8 < VAR_7->size; VAR_8++)
   if (VAR_7->scan[VAR_8].scancode < VAR_2)
    VAR_5->ir_codes[VAR_7->scan[VAR_8].scancode] = VAR_7->scan[VAR_8].keycode;

 VAR_4->keycode = VAR_5->ir_codes;
 VAR_4->keycodesize = sizeof(IR_KEYTAB_TYPE);
 VAR_4->keycodemax = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_2(VAR_5->ir_codes[VAR_8], VAR_4->keybit);
 FUNC_0(0, VAR_4->keybit);

 FUNC_2(VAR_0, VAR_4->evbit);
 if (VAR_3)
  FUNC_2(VAR_1, VAR_4->evbit);
}
