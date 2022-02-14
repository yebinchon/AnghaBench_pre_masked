
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dlt_y; int dlt_x; } ;
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
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   settings_t *VAR_6 = FUNC_0();
   winraw_mouse_t *VAR_7 = ((void*)0);

   if (VAR_3 >= VAR_0)
      return 0;

   for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
   {
      if (VAR_5 == VAR_6->uints.input_mouse_index[VAR_3])
      {
         VAR_7 = &VAR_2->mice[VAR_5];
         break;
      }
   }

   if (!VAR_7)
      return 0;

   switch (VAR_4)
   {
      case 129:
         return VAR_7->dlt_x;
      case 128:
         return VAR_7->dlt_y;
   }

   return 0;
}
