
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keep_aspect; int resize_viewport; } ;
typedef TYPE_1__ d3d12_video_t ;



__attribute__((used)) static void FUNC_0(void* VAR_0, unsigned VAR_1)
{
   d3d12_video_t* VAR_2 = (d3d12_video_t*)VAR_0;

   if (!VAR_2)
      return;

   VAR_2->keep_aspect = 1;
   VAR_2->resize_viewport = 1;
}
