
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; unsigned int x; unsigned int y; unsigned int width; unsigned int height; } ;
struct TYPE_4__ {scalar_t__ video_scale_integer; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;
 double FUNC_1 (float) ;
 float FUNC_2 () ;
 int FUNC_3 (struct video_viewport*,unsigned int,unsigned int,float,int) ;

__attribute__((used)) static void FUNC_4(bool VAR_0,
      struct video_viewport *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   settings_t *VAR_4 = FUNC_0();

   VAR_1->full_width = VAR_2;
   VAR_1->full_height = VAR_3;

   if (VAR_4->bools.video_scale_integer)
      FUNC_3(VAR_1, VAR_2, VAR_3,
            FUNC_2(), VAR_0);
   else if (!VAR_0)
   {
      VAR_1->x = 0;
      VAR_1->y = 0;
      VAR_1->width = VAR_2;
      VAR_1->height = VAR_3;
   }
   else
   {
      float VAR_5 = FUNC_2();
      float VAR_6 = (float)VAR_2 / VAR_3;





      if (FUNC_1(VAR_6 - VAR_5) < 0.0001)
      {
         VAR_1->x = 0;
         VAR_1->y = 0;
         VAR_1->width = VAR_2;
         VAR_1->height = VAR_3;
      }
      else if (VAR_6 > VAR_5)
      {
         float VAR_7 = (VAR_5 / VAR_6 - 1.0) / 2.0 + 0.5;
         VAR_1->x = VAR_2 * (0.5 - VAR_7);
         VAR_1->y = 0;
         VAR_1->width = 2.0 * VAR_2 * VAR_7;
         VAR_1->height = VAR_3;
      }
      else
      {
         float VAR_8 = (VAR_6 / VAR_5 - 1.0) / 2.0 + 0.5;
         VAR_1->x = 0;
         VAR_1->y = VAR_3 * (0.5 - VAR_8);
         VAR_1->width = VAR_2;
         VAR_1->height = 2.0 * VAR_3 * VAR_8;
      }
   }
}
