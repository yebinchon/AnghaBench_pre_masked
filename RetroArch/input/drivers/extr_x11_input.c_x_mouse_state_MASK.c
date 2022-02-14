
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mouse_m; scalar_t__ mouse_r; scalar_t__ mouse_l; scalar_t__ mouse_last_y; scalar_t__ mouse_y; scalar_t__ mouse_last_x; scalar_t__ mouse_x; } ;
typedef TYPE_1__ x11_input_t ;
typedef scalar_t__ int16_t ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static int16_t FUNC_1(x11_input_t *VAR_0, unsigned VAR_1)
{
   switch (VAR_1)
   {
      case 129:
         return VAR_0->mouse_x - VAR_0->mouse_last_x;
      case 128:
         return VAR_0->mouse_y - VAR_0->mouse_last_y;
      case 134:
         return VAR_0->mouse_l;
      case 132:
         return VAR_0->mouse_r;
      case 130:
      case 131:
      case 135:
      case 136:
         return FUNC_0(VAR_1);
      case 133:
         return VAR_0->mouse_m;
   }

   return 0;
}
