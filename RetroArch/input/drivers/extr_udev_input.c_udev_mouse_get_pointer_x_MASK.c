
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double x; double full_width; double width; } ;
typedef TYPE_1__ video_viewport_t ;
struct TYPE_6__ {int x_min; int x_max; double x_abs; } ;
typedef TYPE_2__ udev_input_mouse_t ;
typedef double int32_t ;
typedef double int16_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int16_t FUNC_1(const udev_input_mouse_t *VAR_0, bool VAR_1)
{
   video_viewport_t VAR_2;
   double VAR_3;
   double VAR_4;
   int32_t VAR_5;

   if (!FUNC_0(&VAR_2))
      return 0;

   if (VAR_0->x_min < VAR_0->x_max)
   {
      VAR_3 = VAR_0->x_min;
      VAR_4 = VAR_0->x_max - VAR_0->x_min + 1;
   }
   else
   {
      VAR_3 = VAR_2.x;
      if (VAR_1)
         VAR_4 = VAR_2.full_width;
      else
         VAR_4 = VAR_2.width;
   }

   VAR_5 = -32767.0 + 65535.0 / VAR_4 * (VAR_0->x_abs - VAR_3);
   VAR_5 += (VAR_5 < 0 ? -0.5 : 0.5);

   if (VAR_5 < -0x7fff)
      VAR_5 = -0x7fff;
   else if(VAR_5 > 0x7fff)
      VAR_5 = 0x7fff;

   return VAR_5;
}
