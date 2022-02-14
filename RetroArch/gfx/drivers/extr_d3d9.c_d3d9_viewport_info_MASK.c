
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; int height; int width; int y; int x; } ;
struct TYPE_3__ {int Height; int Width; int Y; int X; } ;
struct TYPE_4__ {TYPE_1__ final_viewport; } ;
typedef TYPE_2__ d3d9_video_t ;


 int FUNC_0 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct video_viewport *VAR_1)
{
   unsigned VAR_2, VAR_3;
   d3d9_video_t *VAR_4 = (d3d9_video_t*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_0(&VAR_2, &VAR_3);

   VAR_1->x = VAR_4->final_viewport.X;
   VAR_1->y = VAR_4->final_viewport.Y;
   VAR_1->width = VAR_4->final_viewport.Width;
   VAR_1->height = VAR_4->final_viewport.Height;

   VAR_1->full_width = VAR_2;
   VAR_1->full_height = VAR_3;
}
