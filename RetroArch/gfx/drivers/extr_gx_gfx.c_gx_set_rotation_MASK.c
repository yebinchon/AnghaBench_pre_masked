
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int should_resize; } ;
typedef TYPE_1__ gx_video_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, unsigned VAR_2)
{
   gx_video_t *VAR_3 = (gx_video_t*)VAR_1;
   VAR_0 = VAR_2;

   if (VAR_3)
      VAR_3->should_resize = 1;
}
