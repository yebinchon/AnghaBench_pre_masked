
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid; scalar_t__ scale_y; scalar_t__ scale_x; } ;
struct video_shader_pass {TYPE_1__ fbo; } ;
struct video_shader {struct video_shader_pass* pass; } ;


 int VAR_0 ;

void FUNC_0(struct video_shader *VAR_1,
      unsigned VAR_2)
{
   struct video_shader_pass *VAR_3 = VAR_1 ?
      &VAR_1->pass[VAR_2] : ((void*)0);

   if (!VAR_3)
      return;

   VAR_3->fbo.scale_x = 0;
   VAR_3->fbo.scale_y = 0;
   VAR_3->fbo.valid = 0;

   VAR_0 = 1;
}
