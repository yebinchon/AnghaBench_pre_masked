
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shader; } ;
typedef TYPE_2__ glsl_shader_data_t ;
struct TYPE_3__ {int passes; } ;



__attribute__((used)) static unsigned FUNC_0(void *VAR_0)
{
   glsl_shader_data_t *VAR_1 = (glsl_shader_data_t*)VAR_0;
   if (VAR_1 && VAR_1->shader)
      return VAR_1->shader->passes;
   return 0;
}
