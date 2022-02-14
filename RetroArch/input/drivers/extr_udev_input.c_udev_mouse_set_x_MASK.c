
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; scalar_t__ full_width; } ;
typedef TYPE_1__ video_viewport_t ;
struct TYPE_6__ {scalar_t__ x_abs; int x_rel; } ;
typedef TYPE_2__ udev_input_mouse_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(udev_input_mouse_t *VAR_0, int32_t VAR_1, bool VAR_2)
{
   video_viewport_t VAR_3;

   if (VAR_2)
   {
      VAR_0->x_rel += VAR_1 - VAR_0->x_abs;
      VAR_0->x_abs = VAR_1;
   }
   else
   {
      VAR_0->x_rel += VAR_1;
      if (FUNC_0(&VAR_3))
      {
         VAR_0->x_abs += VAR_1;

         if (VAR_0->x_abs < VAR_3.x)
            VAR_0->x_abs = VAR_3.x;
         else if (VAR_0->x_abs >= VAR_3.x + VAR_3.full_width)
            VAR_0->x_abs = VAR_3.x + VAR_3.full_width - 1;
      }
   }
}
