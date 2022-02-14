
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vsync; } ;
struct TYPE_4__ {TYPE_1__ chain; } ;
typedef TYPE_2__ d3d12_video_t ;



__attribute__((used)) static void FUNC_0(void* VAR_0, bool VAR_1)
{
   d3d12_video_t* VAR_2 = (d3d12_video_t*)VAR_0;
   VAR_2->chain.vsync = !VAR_1;
}
