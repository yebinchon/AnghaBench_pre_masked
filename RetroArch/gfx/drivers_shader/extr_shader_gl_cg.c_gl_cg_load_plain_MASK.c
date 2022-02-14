
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_shader {int passes; TYPE_2__* pass; } ;
struct shader_program_info {char const* combined; int is_file; } ;
struct TYPE_7__ {struct video_shader* shader; int * prg; } ;
typedef TYPE_3__ cg_shader_data_t ;
struct TYPE_5__ {int path; } ;
struct TYPE_6__ {TYPE_1__ source; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (void*,int,int *,struct shader_program_info*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *,struct video_shader*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, const char *VAR_1)
{
   cg_shader_data_t *VAR_2 = (cg_shader_data_t*)VAR_0;

   if (!FUNC_3(VAR_2))
      return 0;

   VAR_2->shader = (struct video_shader*)
      FUNC_1(1, sizeof(*VAR_2->shader));
   if (!VAR_2->shader)
      return 0;

   VAR_2->shader->passes = 1;

   if (FUNC_4(VAR_1))
   {
      FUNC_0("[CG]: Loading stock Cg file.\n");
      VAR_2->prg[1] = VAR_2->prg[0];
   }
   else
   {
      struct shader_program_info VAR_3;

      VAR_3.combined = VAR_1;
      VAR_3.is_file = 1;

      FUNC_0("[CG]: Loading Cg file: %s\n", VAR_1);
      FUNC_5(VAR_2->shader->pass[0].source.path, VAR_1,
            sizeof(VAR_2->shader->pass[0].source.path));
      if (!FUNC_2(VAR_0, 1, &VAR_2->prg[1], &VAR_3))
         return 0;
   }

   FUNC_6(((void*)0), VAR_2->shader);
   return 1;
}
