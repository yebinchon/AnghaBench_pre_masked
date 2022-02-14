
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {int x; int width; int y; int height; scalar_t__ full_height; scalar_t__ full_width; } ;
struct TYPE_2__ {int x; int y; } ;


 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 scalar_t__ FUNC_0 (struct video_viewport*) ;

__attribute__((used)) static void FUNC_1(void)
{
   struct video_viewport VAR_5;
   int VAR_6;
   int VAR_7;
   unsigned VAR_8;

   if (FUNC_0(&VAR_5))
   {
      VAR_6 = VAR_5.x + VAR_5.width / 2;
      VAR_7 = VAR_5.y + VAR_5.height / 2;

      for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
      {
         VAR_0[VAR_8].x = VAR_6;
         VAR_0[VAR_8].y = VAR_7;
      }

      VAR_3 = (double)VAR_5.full_width / 65535.0;
      VAR_4 = (double)VAR_5.full_height / 65535.0;

      VAR_2 = 1;
   }
}
