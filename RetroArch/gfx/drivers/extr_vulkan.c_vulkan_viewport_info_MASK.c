
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; } ;
struct TYPE_3__ {unsigned int video_width; unsigned int video_height; struct video_viewport vp; } ;
typedef TYPE_1__ vk_t ;


 int FUNC_0 (TYPE_1__*,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct video_viewport *VAR_1)
{
   unsigned VAR_2, VAR_3;
   vk_t *VAR_4 = (vk_t*)VAR_0;

   if (!VAR_4)
      return;

   VAR_2 = VAR_4->video_width;
   VAR_3 = VAR_4->video_height;

   FUNC_0(VAR_4, VAR_2, VAR_3, 0, 1);

   *VAR_1 = VAR_4->vp;
   VAR_1->full_width = VAR_2;
   VAR_1->full_height = VAR_3;
}
