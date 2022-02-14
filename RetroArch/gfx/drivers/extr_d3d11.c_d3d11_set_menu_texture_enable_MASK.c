
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; int fullscreen; } ;
struct TYPE_4__ {TYPE_1__ menu; } ;
typedef TYPE_2__ d3d11_video_t ;



__attribute__((used)) static void FUNC_0(void* VAR_0, bool VAR_1, bool VAR_2)
{
   d3d11_video_t* VAR_3 = (d3d11_video_t*)VAR_0;

   if (!VAR_3)
      return;

   VAR_3->menu.enabled = VAR_1;
   VAR_3->menu.fullscreen = VAR_2;
}
