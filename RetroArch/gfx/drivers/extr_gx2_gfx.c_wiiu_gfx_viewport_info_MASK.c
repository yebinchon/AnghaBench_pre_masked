
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {int dummy; } ;
struct TYPE_2__ {struct video_viewport vp; } ;
typedef TYPE_1__ wiiu_video_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
                                   struct video_viewport *VAR_1)
{
   wiiu_video_t *VAR_2 = (wiiu_video_t *) VAR_0;

   if (VAR_2)
      *VAR_1 = VAR_2->vp;
}
