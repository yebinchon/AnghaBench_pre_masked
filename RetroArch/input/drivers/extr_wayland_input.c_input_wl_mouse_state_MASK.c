
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int middle; int right; int left; int delta_y; int y; int delta_x; int x; } ;
struct TYPE_5__ {TYPE_1__ mouse; } ;
typedef TYPE_2__ input_ctx_wayland_data_t ;
__attribute__((used)) static int16_t FUNC_0(input_ctx_wayland_data_t *VAR_0, unsigned VAR_1, bool VAR_2)
{
   switch (VAR_1)
   {
      case 129:
         return VAR_2 ? VAR_0->mouse.x : VAR_0->mouse.delta_x;
      case 128:
         return VAR_2 ? VAR_0->mouse.y : VAR_0->mouse.delta_y;
      case 132:
         return VAR_0->mouse.left;
      case 130:
         return VAR_0->mouse.right;
      case 131:
         return VAR_0->mouse.middle;


   }

   return 0;
}
