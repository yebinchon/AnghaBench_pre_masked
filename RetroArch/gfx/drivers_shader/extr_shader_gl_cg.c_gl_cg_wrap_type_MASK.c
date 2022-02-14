
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;
struct TYPE_6__ {TYPE_2__* shader; } ;
typedef TYPE_3__ cg_shader_data_t ;
struct TYPE_5__ {TYPE_1__* pass; } ;
struct TYPE_4__ {int wrap; } ;


 int VAR_0 ;

__attribute__((used)) static enum gfx_wrap_type FUNC_0(void *VAR_1, unsigned VAR_2)
{
   cg_shader_data_t *VAR_3 = (cg_shader_data_t*)VAR_1;
   if (VAR_3 && VAR_2)
      return VAR_3->shader->pass[VAR_2 - 1].wrap;
   return VAR_0;
}
