
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_b5; int mouse_b4; int mouse_m; int mouse_y; int mouse_x; int mouse_wd; int mouse_wu; int mouse_r; int mouse_l; } ;
typedef TYPE_1__ sdl_input_t ;
typedef int int16_t ;
__attribute__((used)) static int16_t FUNC_0(sdl_input_t *VAR_0, unsigned VAR_1)
{
   switch (VAR_1)
   {
      case 134:
         return VAR_0->mouse_l;
      case 132:
         return VAR_0->mouse_r;
      case 130:
         return VAR_0->mouse_wu;
      case 131:
         return VAR_0->mouse_wd;
      case 129:
         return VAR_0->mouse_x;
      case 128:
         return VAR_0->mouse_y;
      case 133:
         return VAR_0->mouse_m;
      case 136:
         return VAR_0->mouse_b4;
      case 135:
         return VAR_0->mouse_b5;
   }

   return 0;
}
