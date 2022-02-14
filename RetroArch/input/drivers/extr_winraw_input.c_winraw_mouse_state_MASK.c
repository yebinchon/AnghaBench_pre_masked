
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int dlt_x; int y; int dlt_y; int btn_b5; int btn_b4; int btn_m; int whl_d; int whl_u; int btn_r; int btn_l; } ;
typedef TYPE_2__ winraw_mouse_t ;
struct TYPE_9__ {TYPE_2__* mice; } ;
typedef TYPE_3__ winraw_input_t ;
struct TYPE_7__ {unsigned int* input_mouse_index; } ;
struct TYPE_10__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 unsigned int VAR_1 ;

__attribute__((used)) static int16_t FUNC_1(winraw_input_t *VAR_2,
      unsigned VAR_3, bool VAR_4, unsigned VAR_5)
{
   unsigned VAR_6;
   settings_t *VAR_7 = FUNC_0();
   winraw_mouse_t *VAR_8 = ((void*)0);

   if (VAR_3 >= VAR_0)
      return 0;

   for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
   {
      if (VAR_6 == VAR_7->uints.input_mouse_index[VAR_3])
      {
         VAR_8 = &VAR_2->mice[VAR_6];
         break;
      }
   }

   if (!VAR_8)
      return 0;

   switch (VAR_5)
   {
      case 129:
         return VAR_4 ? VAR_8->x : VAR_8->dlt_x;
      case 128:
         return VAR_4 ? VAR_8->y : VAR_8->dlt_y;
      case 134:
         return VAR_8->btn_l ? 1 : 0;
      case 132:
         return VAR_8->btn_r ? 1 : 0;
      case 130:
         return VAR_8->whl_u ? 1 : 0;
      case 131:
         return VAR_8->whl_d ? 1 : 0;
      case 133:
         return VAR_8->btn_m ? 1 : 0;
      case 136:
         return VAR_8->btn_b4 ? 1 : 0;
      case 135:
         return VAR_8->btn_b5 ? 1 : 0;
   }

   return 0;
}
