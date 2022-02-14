
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_program_info {int is_file; int combined; } ;
struct TYPE_2__ {int * prg; } ;
typedef TYPE_1__ cg_shader_data_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int ,int *,struct shader_program_info*) ;
 int FUNC_2 (void*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_3(void *VAR_1)
{
   struct shader_program_info VAR_2;
   cg_shader_data_t *VAR_3 = (cg_shader_data_t*)VAR_1;

   VAR_2.combined = VAR_0;
   VAR_2.is_file = 0;

   if (!FUNC_1(VAR_1, 0, &VAR_3->prg[0], &VAR_2))
      goto error;

   FUNC_2(VAR_1, 0);

   return 1;

error:
   FUNC_0("Failed to compile passthrough shader, is something wrong with your environment?\n");
   return 0;
}
