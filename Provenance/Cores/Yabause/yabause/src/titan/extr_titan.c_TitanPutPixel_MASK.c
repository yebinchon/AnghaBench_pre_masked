
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t titan_which_layer; int titan_shadow_type; int titan_shadow_enabled; } ;
typedef TYPE_2__ vdp2draw_struct ;
typedef int u32 ;
typedef int s32 ;
struct TYPE_7__ {int vdp2width; TYPE_1__** vdp2framebuffer; } ;
struct TYPE_5__ {int priority; int linescreen; int shadow_type; int shadow_enabled; int pixel; } ;


 TYPE_3__ VAR_0 ;

void FUNC_0(int VAR_1, s32 VAR_2, s32 VAR_3, u32 VAR_4, int VAR_5, vdp2draw_struct* VAR_6)
{
   if (VAR_1 == 0) return;

   {
      int VAR_7 = (VAR_3 * VAR_0.vdp2width) + VAR_2;
      VAR_0.vdp2framebuffer[VAR_6->titan_which_layer][VAR_7].pixel = VAR_4;
      VAR_0.vdp2framebuffer[VAR_6->titan_which_layer][VAR_7].priority = VAR_1;
      VAR_0.vdp2framebuffer[VAR_6->titan_which_layer][VAR_7].linescreen = VAR_5;
      VAR_0.vdp2framebuffer[VAR_6->titan_which_layer][VAR_7].shadow_enabled = VAR_6->titan_shadow_enabled;
      VAR_0.vdp2framebuffer[VAR_6->titan_which_layer][VAR_7].shadow_type = VAR_6->titan_shadow_type;
   }
}
