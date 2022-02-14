
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int force_aspect; } ;
struct TYPE_4__ {int should_resize; TYPE_1__ video; } ;
typedef TYPE_2__ sdl2_video_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned VAR_1)
{
   sdl2_video_t *VAR_2 = (sdl2_video_t*)VAR_0;


   if (!VAR_2)
      return;

   VAR_2->video.force_aspect = 1;
   VAR_2->should_resize = 1;
}
