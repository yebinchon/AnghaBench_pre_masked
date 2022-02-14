
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dinput_input {int mouse_x; int mouse_y; } ;
struct TYPE_4__ {scalar_t__* input_mouse_index; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (struct dinput_input*,unsigned int,unsigned int) ;

__attribute__((used)) static int16_t FUNC_2(struct dinput_input *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 settings_t *VAR_4 = FUNC_0();

 if (VAR_2 >= VAR_0)
  return 0;


 if (VAR_4->uints.input_mouse_index[ VAR_2 ] != 0)
  return 0;

   switch (VAR_3)
   {
      case 129:
         return VAR_1->mouse_x;
      case 128:
         return VAR_1->mouse_y;
      default:
         break;
   }

   return FUNC_1(VAR_1, VAR_2, VAR_3);
}
