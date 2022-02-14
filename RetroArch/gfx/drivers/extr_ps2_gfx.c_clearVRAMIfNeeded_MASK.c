
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int updatedPalette; } ;
struct TYPE_5__ {int clearVRAM; int clearVRAM_font; TYPE_1__ iface; int gsGlobal; int PSM; int coreTexture; } ;
typedef TYPE_2__ ps2_video_t ;


 void const* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(ps2_video_t *VAR_1, const void *VAR_2, int VAR_3, int VAR_4)
{
   if (!VAR_1->clearVRAM) {
      if(VAR_2 && VAR_2 != VAR_0) {
         bool VAR_5 = 0;
         VAR_5 = FUNC_1(VAR_1->coreTexture, VAR_3, VAR_4, VAR_1->PSM);
         VAR_1->clearVRAM = VAR_1->clearVRAM || VAR_5;
      }
   }

   if (VAR_1->clearVRAM) {
      FUNC_0(VAR_1->gsGlobal);
      VAR_1->iface.updatedPalette = 1;
      VAR_1->clearVRAM_font = 1;
   }
}
