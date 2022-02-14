
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* data; } ;
typedef TYPE_3__ math_matrix_4x4 ;
struct TYPE_8__ {size_t active_idx; size_t current_idx; scalar_t__** current_mat_data_pointer; scalar_t__* current_mat_data; TYPE_2__* uniforms; TYPE_1__* shader; } ;
typedef TYPE_4__ glsl_shader_data_t ;
struct TYPE_6__ {int mvp; } ;
struct TYPE_5__ {int modern; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1, const void *VAR_2)
{
   int VAR_3;
   glsl_shader_data_t *VAR_4 = (glsl_shader_data_t*)VAR_1;

   if (!VAR_4 || !VAR_4->shader->modern)
      return 0;

   VAR_3 = VAR_4->uniforms[VAR_4->active_idx].mvp;
   if (VAR_3 >= 0)
   {
      const math_matrix_4x4 *VAR_5 = (const math_matrix_4x4*)VAR_2;

      if ( (VAR_4->current_idx != VAR_4->active_idx) ||
            (VAR_5->data != VAR_4->current_mat_data_pointer[VAR_4->active_idx]) ||
            (*VAR_5->data != VAR_4->current_mat_data[VAR_4->active_idx]))
      {
         FUNC_0(VAR_3, 1, VAR_0, VAR_5->data);
         VAR_4->current_idx = VAR_4->active_idx;
         VAR_4->current_mat_data_pointer[VAR_4->active_idx] = (float*)VAR_5->data;
         VAR_4->current_mat_data[VAR_4->active_idx] = *VAR_5->data;
      }
   }

   return 1;
}
