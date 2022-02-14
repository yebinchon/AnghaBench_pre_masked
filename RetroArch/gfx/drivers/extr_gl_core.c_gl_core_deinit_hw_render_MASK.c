
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hw_render_enable; scalar_t__ hw_render_texture; scalar_t__ hw_render_rb_ds; scalar_t__ hw_render_fbo; } ;
typedef TYPE_1__ gl_core_t ;


 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(gl_core_t *VAR_0)
{
   FUNC_3(VAR_0, 1);

   if (VAR_0->hw_render_fbo)
      FUNC_0(1, &VAR_0->hw_render_fbo);
   if (VAR_0->hw_render_rb_ds)
      FUNC_1(1, &VAR_0->hw_render_rb_ds);
   if (VAR_0->hw_render_texture)
      FUNC_2(1, &VAR_0->hw_render_texture);

   VAR_0->hw_render_fbo = 0;
   VAR_0->hw_render_rb_ds = 0;
   VAR_0->hw_render_texture = 0;
   FUNC_3(VAR_0, 0);
   VAR_0->hw_render_enable = 0;
}
