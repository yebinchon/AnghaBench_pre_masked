
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vsync; } ;
struct TYPE_5__ {TYPE_1__ video; } ;
typedef TYPE_2__ sdl2_video_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool VAR_1)
{
   sdl2_video_t *VAR_2 = (sdl2_video_t*)VAR_0;

   VAR_2->video.vsync = !VAR_1;
   FUNC_0(VAR_2);
}
