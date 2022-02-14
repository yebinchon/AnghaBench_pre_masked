
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* joypad; } ;
typedef TYPE_2__ wiiu_input_t ;
typedef int int16_t ;
typedef int input_bits_t ;
struct TYPE_4__ {int (* axis ) (int ,int) ;int (* get_buttons ) (int ,int *) ;} ;


 int FUNC_0 (int ,int ) ;



 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int16_t FUNC_4(wiiu_input_t* VAR_1, unsigned VAR_2)
{
 switch (VAR_2)
 {
  case 130:
  {
   input_bits_t VAR_3;
   VAR_1->joypad->get_buttons(0, &VAR_3);
   return FUNC_0(VAR_3, VAR_0) ? 1 : 0;
  }
  case 129:
   return VAR_1->joypad->axis(0, 0xFFFF0004UL);
  case 128:
   return VAR_1->joypad->axis(0, 0xFFFF0005UL);
 }

 return 0;
}
