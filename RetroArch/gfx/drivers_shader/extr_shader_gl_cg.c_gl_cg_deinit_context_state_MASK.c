
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cgCtx; } ;
typedef TYPE_1__ cg_shader_data_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   cg_shader_data_t *VAR_1 = (cg_shader_data_t*)VAR_0;
   if (VAR_1->cgCtx)
   {
      FUNC_0("[CG]: Destroying context.\n");
      FUNC_1(VAR_1->cgCtx);
   }
   VAR_1->cgCtx = ((void*)0);
}
