
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* uniforms; TYPE_3__* shader; } ;
typedef TYPE_4__ glsl_shader_data_t ;
struct TYPE_7__ {unsigned int passes; } ;
struct TYPE_6__ {TYPE_1__* prev; } ;
struct TYPE_5__ {scalar_t__ texture; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(void *VAR_1)
{
   unsigned VAR_2, VAR_3;
   unsigned VAR_4 = 0;
   glsl_shader_data_t *VAR_5 = (glsl_shader_data_t*)VAR_1;

   if (!VAR_5)
      return 0;

   for (VAR_2 = 1; VAR_2 <= VAR_5->shader->passes; VAR_2++)
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
         if (VAR_5->uniforms[VAR_2].prev[VAR_3].texture >= 0)
            VAR_4 = FUNC_0(VAR_3 + 1, VAR_4);

   return VAR_4;
}
