
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; unsigned int y; unsigned int height; } ;
struct TYPE_2__ {unsigned int video_width; unsigned int video_height; struct video_viewport vp; } ;
typedef TYPE_1__ gl_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct video_viewport *VAR_1)
{
   unsigned VAR_2, VAR_3;
   gl_t *VAR_4 = (gl_t*)VAR_0;
   unsigned VAR_5 = VAR_4->video_width;
   unsigned VAR_6 = VAR_4->video_height;

   *VAR_1 = VAR_4->vp;
   VAR_1->full_width = VAR_5;
   VAR_1->full_height = VAR_6;


   VAR_2 = VAR_1->y + VAR_1->height;
   VAR_3 = VAR_6 - VAR_2;
   VAR_1->y = VAR_3;
}
