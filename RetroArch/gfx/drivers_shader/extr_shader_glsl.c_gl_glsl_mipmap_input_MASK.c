
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
struct TYPE_4__ {int mipmap; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, unsigned VAR_1)
{
   glsl_shader_data_t *VAR_2 = (glsl_shader_data_t*)VAR_0;
   if (VAR_2 && VAR_1)
      return VAR_2->shader->pass[VAR_1 - 1].mipmap;
   return 0;
}
