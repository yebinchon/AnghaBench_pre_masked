
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double full_width; scalar_t__ width; } ;
typedef TYPE_1__ video_viewport_t ;
struct TYPE_6__ {scalar_t__ x_min; scalar_t__ x_max; double x_rel; } ;
typedef TYPE_2__ udev_input_mouse_t ;
typedef double int16_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int16_t FUNC_1(const udev_input_mouse_t *VAR_0)
{
   video_viewport_t VAR_1;
   double VAR_2;
   double VAR_3;

   if (!FUNC_0(&VAR_1))
      return 0;

   if (VAR_0->x_min < VAR_0->x_max)
      VAR_2 = VAR_0->x_max - VAR_0->x_min + 1;
   else
      VAR_2 = VAR_1.full_width;

   VAR_3 = (double)VAR_1.width / VAR_2 * VAR_0->x_rel;

   return VAR_3 + (VAR_3 < 0 ? -0.5 : 0.5);
}
