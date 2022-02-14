
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hw_render_fbo_init; int textures; int hw_render_fbo; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_7__ {int hw_render_depth; scalar_t__ hw_render_depth_init; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(
      gl_t *VAR_0,
      gl2_renderchain_data_t *VAR_1)
{
   if (!VAR_0)
      return;

   FUNC_0(VAR_0, 1);

   if (VAR_0->hw_render_fbo_init)
      FUNC_1(VAR_0->textures, VAR_0->hw_render_fbo);
   if (VAR_1->hw_render_depth_init)
      FUNC_2(VAR_0->textures, VAR_1->hw_render_depth);
   VAR_0->hw_render_fbo_init = 0;

   FUNC_0(VAR_0, 0);
}
