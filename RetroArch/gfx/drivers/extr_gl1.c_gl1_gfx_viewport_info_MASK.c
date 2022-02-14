
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; unsigned int full_height; unsigned int y; unsigned int height; } ;
struct TYPE_2__ {struct video_viewport vp; } ;
typedef TYPE_1__ gl1_t ;


 int FUNC_0 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      struct video_viewport *VAR_1)
{
   unsigned VAR_2, VAR_3;
   unsigned VAR_4, VAR_5;
   gl1_t *VAR_6 = (gl1_t*)VAR_0;

   FUNC_0(&VAR_2, &VAR_3);

   *VAR_1 = VAR_6->vp;
   VAR_1->full_width = VAR_2;
   VAR_1->full_height = VAR_3;


   VAR_4 = VAR_1->y + VAR_1->height;
   VAR_5 = VAR_3 - VAR_4;
   VAR_1->y = VAR_5;
}
