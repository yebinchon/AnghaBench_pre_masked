
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* shader; } ;
typedef TYPE_3__ glsl_shader_data_t ;
struct TYPE_5__ {TYPE_1__* pass; } ;
struct TYPE_4__ {scalar_t__ filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(void *VAR_2, unsigned VAR_3, bool *VAR_4)
{
   glsl_shader_data_t *VAR_5 = (glsl_shader_data_t*)VAR_2;
   if (VAR_5 && VAR_3
         && (VAR_5->shader->pass[VAR_3 - 1].filter != VAR_1)
      )
   {
      *VAR_4 = (VAR_5->shader->pass[VAR_3 - 1].filter == VAR_0);
      return 1;
   }
   return 0;
}
