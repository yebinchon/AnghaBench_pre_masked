
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* vertex; char* fragment; } ;
struct TYPE_9__ {unsigned int path; TYPE_2__ string; } ;
struct video_shader_pass {TYPE_3__ source; } ;
struct shader_program_info {char const* vertex; char const* fragment; int is_file; } ;
struct shader_program_glsl_data {int dummy; } ;
struct TYPE_10__ {TYPE_1__* shader; } ;
typedef TYPE_4__ glsl_shader_data_t ;
struct TYPE_7__ {unsigned int passes; int * pass; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (TYPE_4__*,unsigned int,struct shader_program_glsl_data*,struct shader_program_info*) ;
 int FUNC_2 (struct video_shader_pass*,unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static bool FUNC_4(
      glsl_shader_data_t *VAR_0, struct shader_program_glsl_data *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->shader->passes; VAR_2++)
   {
      struct shader_program_info VAR_3;
      const char *VAR_4 = ((void*)0);
      const char *VAR_5 = ((void*)0);
      struct video_shader_pass *VAR_6 = (struct video_shader_pass*)
         &VAR_0->shader->pass[VAR_2];

      if (!VAR_6)
         continue;




      if ( !FUNC_3(VAR_6->source.path)
            && !FUNC_2(VAR_6, VAR_6->source.path))
      {
         FUNC_0("Failed to load GLSL shader: %s.\n",
               VAR_6->source.path);
         return 0;
      }

      VAR_4 = VAR_6->source.string.vertex;
      VAR_5 = VAR_6->source.string.fragment;

      VAR_3.vertex = VAR_4;
      VAR_3.fragment = VAR_5;
      VAR_3.is_file = 0;

      if (!FUNC_1(VAR_0, VAR_2,
            &VAR_1[VAR_2],
            &VAR_3))
      {
         FUNC_0("Failed to create GL program #%u.\n", VAR_2);
         return 0;
      }
   }

   return 1;
}
