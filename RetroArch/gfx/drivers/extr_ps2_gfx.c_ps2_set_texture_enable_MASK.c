
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clearTexture; int updatedPalette; } ;
struct TYPE_4__ {int menuVisible; int clearVRAM; int fullscreen; TYPE_1__ iface; } ;
typedef TYPE_2__ ps2_video_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1, bool VAR_2)
{
   ps2_video_t *VAR_3 = (ps2_video_t*)VAR_0;
   if (VAR_3->menuVisible != VAR_1) {

      VAR_3->clearVRAM = 1;
      VAR_3->iface.clearTexture = 1;
      VAR_3->iface.updatedPalette = 1;
   }
   VAR_3->menuVisible = VAR_1;
   VAR_3->fullscreen = VAR_2;
}
