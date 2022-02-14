
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfx_fbo_scale {int valid; } ;
struct TYPE_6__ {TYPE_2__* shader; } ;
typedef TYPE_3__ cg_shader_data_t ;
struct TYPE_5__ {TYPE_1__* pass; } ;
struct TYPE_4__ {struct gfx_fbo_scale fbo; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned VAR_1, struct gfx_fbo_scale *VAR_2)
{
   cg_shader_data_t *VAR_3 = (cg_shader_data_t*)VAR_0;
   if (VAR_3 && VAR_1)
      *VAR_2 = VAR_3->shader->pass[VAR_1 - 1].fbo;
   else
      VAR_2->valid = 0;
}
