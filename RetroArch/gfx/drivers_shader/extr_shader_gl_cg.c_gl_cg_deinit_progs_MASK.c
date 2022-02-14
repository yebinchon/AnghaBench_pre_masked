
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* prg; int cgVProf; int cgFProf; } ;
typedef TYPE_1__ cg_shader_data_t ;
struct TYPE_4__ {scalar_t__ fprg; scalar_t__ vprg; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   unsigned VAR_2;
   cg_shader_data_t *VAR_3 = (cg_shader_data_t*)VAR_1;

   if (!VAR_3)
      return;

   FUNC_0("[CG]: Destroying programs.\n");
   FUNC_2(VAR_3->cgFProf);
   FUNC_2(VAR_3->cgVProf);


   for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_3->prg[VAR_2].fprg && VAR_3->prg[VAR_2].fprg != VAR_3->prg[0].fprg)
         FUNC_1(VAR_3->prg[VAR_2].fprg);
      if (VAR_3->prg[VAR_2].vprg && VAR_3->prg[VAR_2].vprg != VAR_3->prg[0].vprg)
         FUNC_1(VAR_3->prg[VAR_2].vprg);
   }

   if (VAR_3->prg[0].fprg)
      FUNC_1(VAR_3->prg[0].fprg);
   if (VAR_3->prg[0].vprg)
      FUNC_1(VAR_3->prg[0].vprg);

   FUNC_3(VAR_3->prg, 0, sizeof(VAR_3->prg));
}
