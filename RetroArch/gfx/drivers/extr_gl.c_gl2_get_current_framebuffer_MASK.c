
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t* hw_render_fbo; int tex_index; int textures; int has_fbo; } ;
typedef TYPE_1__ gl_t ;



__attribute__((used)) static uintptr_t FUNC_0(void *VAR_0)
{
   gl_t *VAR_1 = (gl_t*)VAR_0;
   if (!VAR_1 || !VAR_1->has_fbo)
      return 0;
   return VAR_1->hw_render_fbo[(VAR_1->tex_index + 1) % VAR_1->textures];
}
