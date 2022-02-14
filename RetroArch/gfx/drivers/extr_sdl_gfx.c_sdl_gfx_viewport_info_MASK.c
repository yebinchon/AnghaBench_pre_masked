
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_viewport {int full_height; int height; int full_width; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {TYPE_1__* screen; } ;
typedef TYPE_2__ sdl_video_t ;
struct TYPE_3__ {int h; int w; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct video_viewport *VAR_1)
{
   sdl_video_t *VAR_2 = (sdl_video_t*)VAR_0;
   VAR_1->x = 0;
   VAR_1->y = 0;
   VAR_1->width = VAR_1->full_width = VAR_2->screen->w;
   VAR_1->height = VAR_1->full_height = VAR_2->screen->h;
}
