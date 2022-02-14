
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; int* offset; int aspect; } ;
struct wiimote_t {TYPE_1__ ir; } ;
typedef enum ir_position_t { ____Placeholder_ir_position_t } ir_position_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct wiimote_t* VAR_4, enum ir_position_t VAR_5) {
 if (!VAR_4) return;

 VAR_4->ir.pos = VAR_5;

 switch (VAR_5) {

  case 129:
   VAR_4->ir.offset[0] = 0;

   if (VAR_4->ir.aspect == VAR_0)
    VAR_4->ir.offset[1] = VAR_2/2 - 70;
   else if (VAR_4->ir.aspect == VAR_1)
    VAR_4->ir.offset[1] = VAR_3/2 - 100;

   return;

  case 128:
   VAR_4->ir.offset[0] = 0;

   if (VAR_4->ir.aspect == VAR_0)
    VAR_4->ir.offset[1] = -VAR_2/2 + 70;
   else if (VAR_4->ir.aspect == VAR_1)
    VAR_4->ir.offset[1] = -VAR_3/2 + 100;

   return;

  default:
   return;
 };
}
