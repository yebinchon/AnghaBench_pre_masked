
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char const* stat_text; int osd_stat_params; scalar_t__ statistics_show; } ;
typedef TYPE_2__ video_frame_info_t ;
typedef int uint64_t ;
struct retro_hw_ps2_insets {unsigned int right; } ;
struct font_params {int dummy; } ;
struct TYPE_13__ {int updatedPalette; int clearTexture; struct retro_hw_ps2_insets padding; } ;
struct TYPE_15__ {int fullscreen; TYPE_4__* menuTexture; int gsGlobal; scalar_t__ clearVRAM; scalar_t__ menuVisible; int force_aspect; TYPE_4__* coreTexture; TYPE_1__ iface; int core_filter; int PSM; } ;
typedef TYPE_3__ ps2_video_t ;
struct TYPE_16__ {int Height; int Width; } ;


 int VAR_0 ;
 int VAR_1 ;
 void const* VAR_2 ;
 int FUNC_0 (TYPE_3__*,void const*,unsigned int,unsigned int) ;
 struct retro_hw_ps2_insets VAR_3 ;
 int FUNC_1 (TYPE_2__*,int *,char const*,struct font_params const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*,int,int ,struct retro_hw_ps2_insets) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,TYPE_4__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_4__*,void const*,int,unsigned int,int ,int ,int) ;
 int FUNC_10 (int ,TYPE_4__*) ;

__attribute__((used)) static bool FUNC_11(void *VAR_4, const void *VAR_5,
      unsigned VAR_6, unsigned VAR_7, uint64_t VAR_8,
      unsigned VAR_9, const char *VAR_10, video_frame_info_t *VAR_11)
{
   ps2_video_t *VAR_12 = (ps2_video_t*)VAR_4;

   if (!VAR_6 || !VAR_7)
      return 0;







   FUNC_0(VAR_12, VAR_5, VAR_6, VAR_7);
   FUNC_2(VAR_12->gsGlobal, VAR_0);

   if (VAR_5) {
      bool VAR_13 = 0;
      struct retro_hw_ps2_insets VAR_14 = VAR_3;
      if (VAR_5 != VAR_2){

         int VAR_15 = (VAR_12->PSM == VAR_1) ? 4 : 2;
         int VAR_16 = VAR_9 / VAR_15;
         FUNC_9(VAR_12->coreTexture, VAR_5, VAR_16, VAR_7, VAR_12->PSM, VAR_12->core_filter, 1);
         VAR_14.right = VAR_16 - VAR_6;
      } else {
         VAR_13 = VAR_12->iface.updatedPalette;
         VAR_12->iface.updatedPalette = 0;
         VAR_14 = VAR_12->iface.padding;
         if (VAR_12->iface.clearTexture) {
            VAR_12->iface.clearTexture = 0;
         }
      }
      if(VAR_12->clearVRAM) {
         FUNC_10(VAR_12->gsGlobal, VAR_12->coreTexture);
      }
      FUNC_6(VAR_12->gsGlobal, VAR_12->coreTexture, VAR_13);
      FUNC_4(VAR_12->gsGlobal, VAR_12->coreTexture, 1, VAR_12->force_aspect, VAR_14);
   }

   if (VAR_12->menuVisible) {
      bool VAR_17 = !VAR_12->menuTexture->Width || !VAR_12->menuTexture->Height;
      if (!VAR_17) {
         if(VAR_12->clearVRAM) {
            FUNC_10(VAR_12->gsGlobal, VAR_12->menuTexture);
         }
         FUNC_3(VAR_12->gsGlobal, VAR_12->menuTexture);
         FUNC_4(VAR_12->gsGlobal, VAR_12->menuTexture, 2, VAR_12->fullscreen, VAR_3);
      }
   } else if (VAR_11->statistics_show) {
      struct font_params *VAR_18 = (struct font_params*)
         &VAR_11->osd_stat_params;

      if (VAR_18) {
         FUNC_1(VAR_11, ((void*)0), VAR_11->stat_text,
               (const struct font_params*)&VAR_11->osd_stat_params);
      }
   }

   if(!FUNC_8(VAR_10)) {
      FUNC_1(VAR_11, ((void*)0), VAR_10, ((void*)0));
   }

   FUNC_7(VAR_12);

   return 1;
}
