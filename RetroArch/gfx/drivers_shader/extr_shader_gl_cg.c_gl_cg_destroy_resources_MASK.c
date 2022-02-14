
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* shader; int lut_textures; } ;
typedef TYPE_1__ cg_shader_data_t ;
struct TYPE_4__ {scalar_t__ luts; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
   cg_shader_data_t *VAR_1 = (cg_shader_data_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_3(VAR_0);

   FUNC_2(VAR_0);

   if (VAR_1->shader && VAR_1->shader->luts)
   {
      FUNC_1(VAR_1->shader->luts, VAR_1->lut_textures);
      FUNC_4(VAR_1->lut_textures, 0, sizeof(VAR_1->lut_textures));
   }

   FUNC_0(VAR_1->shader);
   VAR_1->shader = ((void*)0);
}
