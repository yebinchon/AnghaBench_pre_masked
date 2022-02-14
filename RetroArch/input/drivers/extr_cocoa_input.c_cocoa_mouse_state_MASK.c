
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int mouse_rel_x; int mouse_x_last; int mouse_rel_y; int mouse_y_last; int mouse_buttons; int mouse_wu; int mouse_wd; int mouse_wl; int mouse_wr; } ;
typedef TYPE_1__ cocoa_input_data_t ;
__attribute__((used)) static int16_t FUNC_0(cocoa_input_data_t *VAR_0,
      unsigned VAR_1)
{
   switch (VAR_1)
   {
      case 129:
           return VAR_0->mouse_rel_x - VAR_0->mouse_x_last;
      case 128:
         return VAR_0->mouse_rel_y - VAR_0->mouse_y_last;
      case 133:
         return VAR_0->mouse_buttons & 1;
      case 132:
         return VAR_0->mouse_buttons & 2;
       case 130:
           return VAR_0->mouse_wu;
       case 131:
           return VAR_0->mouse_wd;
       case 134:
           return VAR_0->mouse_wl;
       case 135:
           return VAR_0->mouse_wr;
   }

   return 0;
}
