
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t hw_render_fbo; int hw_render_enable; } ;
typedef TYPE_1__ gl_core_t ;



__attribute__((used)) static uintptr_t FUNC_0(void *VAR_0)
{
   gl_core_t *VAR_1 = (gl_core_t*)VAR_0;
   if (!VAR_1 || !VAR_1->hw_render_enable)
      return 0;
   return VAR_1->hw_render_fbo;
}
