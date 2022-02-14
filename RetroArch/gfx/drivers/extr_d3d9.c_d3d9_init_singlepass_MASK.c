
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
struct TYPE_6__ {int valid; double scale_y; double scale_x; int type_y; int type_x; } ;
struct video_shader_pass {TYPE_2__ source; TYPE_1__ fbo; } ;
struct TYPE_9__ {int passes; int * pass; } ;
struct TYPE_8__ {int shader_path; TYPE_4__ shader; } ;
typedef TYPE_3__ d3d9_video_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(d3d9_video_t *VAR_1)
{
   struct video_shader_pass *VAR_2 = ((void*)0);

   if (!VAR_1)
      return 0;

   FUNC_0(&VAR_1->shader, 0, sizeof(VAR_1->shader));
   VAR_1->shader.passes = 1;

   VAR_2 = (struct video_shader_pass*)
      &VAR_1->shader.pass[0];

   VAR_2->fbo.valid = 1;
   VAR_2->fbo.scale_y = 1.0;
   VAR_2->fbo.type_y = VAR_0;
   VAR_2->fbo.scale_x = VAR_2->fbo.scale_y;
   VAR_2->fbo.type_x = VAR_2->fbo.type_y;

   if (!FUNC_1(VAR_1->shader_path))
      FUNC_2(VAR_2->source.path, VAR_1->shader_path,
            sizeof(VAR_2->source.path));

   return 1;
}
