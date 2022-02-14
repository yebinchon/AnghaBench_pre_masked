
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_ortho {int member_1; int member_3; int member_4; int member_5; int member_2; int member_0; } ;
struct TYPE_2__ {unsigned int dev_rotation; } ;
typedef TYPE_1__ d3d9_video_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned VAR_1)
{
   d3d9_video_t *VAR_2 = (d3d9_video_t*)VAR_0;
   struct video_ortho VAR_3 = {0, 1, 0, 1, -1, 1};

   if (!VAR_2)
      return;

   VAR_2->dev_rotation = VAR_1;
}
