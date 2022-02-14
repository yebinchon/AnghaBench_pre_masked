
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct shader_program_info {int is_file; int combined; } ;
struct TYPE_8__ {int * prg; TYPE_3__* shader; } ;
typedef TYPE_4__ cg_shader_data_t ;
struct TYPE_7__ {TYPE_2__* pass; } ;
struct TYPE_5__ {int path; } ;
struct TYPE_6__ {TYPE_1__ source; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*,unsigned int,int *,struct shader_program_info*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, unsigned VAR_1)
{
   struct shader_program_info VAR_2;
   cg_shader_data_t *VAR_3 = (cg_shader_data_t*)VAR_0;

   VAR_2.combined = VAR_3->shader->pass[VAR_1].source.path;
   VAR_2.is_file = 1;

   FUNC_0("[CG]: Loading Cg shader: \"%s\".\n",
         VAR_3->shader->pass[VAR_1].source.path);

   if (!FUNC_1(VAR_0, VAR_1 + 1, &VAR_3->prg[VAR_1 + 1],&VAR_2))
      return 0;

   return 1;
}
