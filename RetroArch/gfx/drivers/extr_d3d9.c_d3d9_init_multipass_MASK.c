
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {float scale_x; float scale_y; void* type_y; void* type_x; } ;
struct video_shader_pass {TYPE_3__ fbo; int filter; } ;
struct TYPE_12__ {unsigned int passes; TYPE_2__* pass; } ;
struct TYPE_11__ {TYPE_5__ shader; } ;
typedef TYPE_4__ d3d9_video_t ;
typedef int config_file_t ;
struct TYPE_8__ {float scale_y; float scale_x; scalar_t__ valid; void* type_y; void* type_x; } ;
struct TYPE_9__ {TYPE_1__ fbo; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int * FUNC_5 (char const*) ;

__attribute__((used)) static bool FUNC_6(d3d9_video_t *VAR_4, const char *VAR_5)
{
   unsigned VAR_6;
   bool VAR_7 = 0;
   struct video_shader_pass *VAR_8 = ((void*)0);
   config_file_t *VAR_9 = FUNC_5(VAR_5);

   if (!VAR_9)
   {
      FUNC_0("[D3D9]: Failed to load preset.\n");
      return 0;
   }

   FUNC_3(&VAR_4->shader, 0, sizeof(VAR_4->shader));

   if (!FUNC_4(VAR_9, &VAR_4->shader))
   {
      FUNC_2(VAR_9);
      FUNC_0("[D3D9]: Failed to parse shader preset.\n");
      return 0;
   }

   FUNC_2(VAR_9);

   FUNC_1("[D3D9]: Found %u shaders.\n", VAR_4->shader.passes);

   for (VAR_6 = 0; VAR_6 < VAR_4->shader.passes; VAR_6++)
   {
      if (VAR_4->shader.pass[VAR_6].fbo.valid)
         continue;

      VAR_4->shader.pass[VAR_6].fbo.scale_y = 1.0f;
      VAR_4->shader.pass[VAR_6].fbo.scale_x = 1.0f;
      VAR_4->shader.pass[VAR_6].fbo.type_x = VAR_2;
      VAR_4->shader.pass[VAR_6].fbo.type_y = VAR_2;
   }

   VAR_7 = VAR_4->shader.passes < VAR_0 &&
      VAR_4->shader.pass[VAR_4->shader.passes - 1].fbo.valid;

   if (VAR_7)
   {
      VAR_4->shader.passes++;
      VAR_8 = (struct video_shader_pass*)
         &VAR_4->shader.pass[VAR_4->shader.passes - 1];

      VAR_8->fbo.scale_x = 1.0f;
      VAR_8->fbo.scale_y = 1.0f;
      VAR_8->fbo.type_x = VAR_3;
      VAR_8->fbo.type_y = VAR_3;
      VAR_8->filter = VAR_1;
   }
   else
   {
      VAR_8 = (struct video_shader_pass*)
         &VAR_4->shader.pass[VAR_4->shader.passes - 1];

      VAR_8->fbo.scale_x = 1.0f;
      VAR_8->fbo.scale_y = 1.0f;
      VAR_8->fbo.type_x = VAR_3;
      VAR_8->fbo.type_y = VAR_3;
   }

   return 1;
}
