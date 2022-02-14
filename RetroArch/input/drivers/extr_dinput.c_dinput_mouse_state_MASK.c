
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dinput_input {int mouse_rel_x; int mouse_rel_y; int mouse_l; int mouse_r; int mouse_wu; int mouse_wd; int mouse_hwu; int mouse_hwd; int mouse_m; int mouse_b4; int mouse_b5; } ;
struct TYPE_4__ {scalar_t__* input_mouse_index; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;
 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static int16_t FUNC_1(struct dinput_input *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   int16_t VAR_4 = 0;

 settings_t *VAR_5 = FUNC_0();

 if (VAR_2 >= VAR_0)
  return 0;


 if (VAR_5->uints.input_mouse_index[ VAR_2 ] != 0)
  return 0;

   switch (VAR_3)
   {
      case 129:
         return VAR_1->mouse_rel_x;
      case 128:
         return VAR_1->mouse_rel_y;
      case 134:
         return VAR_1->mouse_l;
      case 132:
         return VAR_1->mouse_r;
      case 130:
         if (VAR_1->mouse_wu)
            VAR_4 = 1;
         VAR_1->mouse_wu = 0;
         return VAR_4;
      case 131:
         if (VAR_1->mouse_wd)
            VAR_4 = 1;
         VAR_1->mouse_wd = 0;
         return VAR_4;
      case 135:
         if (VAR_1->mouse_hwu)
            VAR_4 = 1;
         VAR_1->mouse_hwu = 0;
         return VAR_4;
      case 136:
         if (VAR_1->mouse_hwd)
            VAR_4 = 1;
         VAR_1->mouse_hwd = 0;
         return VAR_4;
      case 133:
         return VAR_1->mouse_m;
      case 138:
         return VAR_1->mouse_b4;
      case 137:
         return VAR_1->mouse_b5;
   }

   return 0;
}
