
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int active_idx; TYPE_1__* prg; } ;
typedef TYPE_2__ cg_shader_data_t ;
struct TYPE_4__ {scalar_t__ vprg; scalar_t__ fprg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1, unsigned VAR_2, bool VAR_3)
{
   cg_shader_data_t *VAR_4 = (cg_shader_data_t*)VAR_1;
   if (VAR_4 && VAR_4->prg[VAR_2].vprg && VAR_4->prg[VAR_2].fprg)
   {
      if (VAR_3)
      {
         FUNC_0(VAR_4);
         VAR_4->active_idx = VAR_2;
      }

      FUNC_1(VAR_4->prg[VAR_2].fprg, VAR_4->prg[VAR_2].vprg);
   }
}
