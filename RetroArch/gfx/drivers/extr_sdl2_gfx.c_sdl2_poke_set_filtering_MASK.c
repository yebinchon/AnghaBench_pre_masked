
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int smooth; } ;
struct TYPE_4__ {int frame; TYPE_1__ video; } ;
typedef TYPE_2__ sdl2_video_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, unsigned VAR_1, bool VAR_2)
{
   sdl2_video_t *VAR_3 = (sdl2_video_t*)VAR_0;
   VAR_3->video.smooth = VAR_2;

   FUNC_0(&VAR_3->frame);
}
