
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct retro_hw_render_interface {int dummy; } ;
struct TYPE_3__ {int updatedPalette; int padding; int clearTexture; } ;
struct TYPE_4__ {TYPE_1__ iface; int clearVRAM; } ;
typedef TYPE_2__ ps2_video_t ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(void* VAR_1,
      const struct retro_hw_render_interface** VAR_2)
{
   ps2_video_t* VAR_3 = (ps2_video_t*)VAR_1;
   VAR_3->iface.clearTexture = VAR_3->clearVRAM;
   VAR_3->iface.updatedPalette = 1;
   VAR_3->iface.padding = VAR_0;
   *VAR_2 = (const struct retro_hw_render_interface*)&VAR_3->iface;
   return 1;
}
