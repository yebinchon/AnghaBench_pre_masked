
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shader; } ;
typedef TYPE_2__ cg_shader_data_t ;
struct TYPE_3__ {scalar_t__ feedback_pass; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, unsigned *VAR_1)
{
   cg_shader_data_t *VAR_2 = (cg_shader_data_t*)VAR_0;
   if (!VAR_2 || VAR_2->shader->feedback_pass < 0)
      return 0;

   *VAR_1 = VAR_2->shader->feedback_pass;
   return 1;
}
