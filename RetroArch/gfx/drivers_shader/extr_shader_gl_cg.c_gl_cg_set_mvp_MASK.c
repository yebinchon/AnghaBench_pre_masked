
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_2__ math_matrix_4x4 ;
struct TYPE_6__ {size_t active_idx; TYPE_1__* prg; } ;
typedef TYPE_3__ cg_shader_data_t ;
struct TYPE_4__ {scalar_t__ mvp; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0,
      const void *VAR_1)
{
   cg_shader_data_t *VAR_2 = (cg_shader_data_t*)VAR_0;
   if (VAR_2 && VAR_2->prg[VAR_2->active_idx].mvp)
   {
      const math_matrix_4x4 *VAR_3 = (const math_matrix_4x4*)VAR_1;
      FUNC_0(VAR_2->prg[VAR_2->active_idx].mvp, VAR_3->data);
      return 1;
   }

   return 0;
}
