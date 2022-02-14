
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int mouse_x_delta; int mouse_y_delta; int mouse_m; int mouse_r; int mouse_l; } ;
typedef TYPE_1__ android_input_t ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int16_t FUNC_1(android_input_t *VAR_0, unsigned VAR_1)
{
   int VAR_2 = 0;
   switch (VAR_1)
   {
      case 129:
         VAR_2 = VAR_0->mouse_x_delta;
         VAR_0->mouse_x_delta = 0;
         break;
      case 128:
         VAR_2 = VAR_0->mouse_y_delta;
         VAR_0->mouse_y_delta = 0;
         break;
      case 131:
         VAR_2 = VAR_0->mouse_l || FUNC_0(VAR_0);
         break;
      case 134:
         VAR_2 = VAR_0->mouse_m;
         break;
      case 130:
         VAR_2 = VAR_0->mouse_r;
         break;
      case 132:
         VAR_2 = VAR_0->mouse_m && VAR_0->mouse_r;
         break;
      case 133:
         VAR_2 = VAR_0->mouse_m && VAR_0->mouse_l;
         break;
   }

   return VAR_2;
}
