
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; int height; int width; int y; int x; } ;
struct TYPE_4__ {int Height; int Width; int Y; int X; } ;
struct TYPE_5__ {TYPE_1__ final_viewport; } ;
typedef TYPE_2__ d3d8_video_t ;


 int FUNC_0 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(
      d3d8_video_t *VAR_0,
      struct video_viewport *VAR_1)
{
   unsigned VAR_2, VAR_3;

   if (!VAR_0 || !VAR_1)
      return;

   FUNC_0(&VAR_2, &VAR_3);

   VAR_1->x = VAR_0->final_viewport.X;
   VAR_1->y = VAR_0->final_viewport.Y;
   VAR_1->width = VAR_0->final_viewport.Width;
   VAR_1->height = VAR_0->final_viewport.Height;

   VAR_1->full_width = VAR_2;
   VAR_1->full_height = VAR_3;
}
