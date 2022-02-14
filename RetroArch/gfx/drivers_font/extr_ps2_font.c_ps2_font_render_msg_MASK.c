
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct font_params {int dummy; } ;
struct TYPE_6__ {int gsFontM; TYPE_1__* ps2_video; } ;
typedef TYPE_2__ ps2_font_info_t ;
struct TYPE_7__ {int Height; } ;
struct TYPE_5__ {int clearVRAM_font; TYPE_3__* gsGlobal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,int,int,int ,int ,int ,char const*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(
      video_frame_info_t *VAR_5,
      void *VAR_6, const char *VAR_7,
      const struct font_params *VAR_8)
{
   ps2_font_info_t *VAR_9 = (ps2_font_info_t *)VAR_6;

   if (VAR_9) {
      int VAR_10 = VAR_2;
      int VAR_11 = VAR_9->ps2_video->gsGlobal->Height - VAR_0;
      if (VAR_9->ps2_video->clearVRAM_font) {
         FUNC_1(VAR_9->ps2_video->gsGlobal, VAR_9->gsFontM);
         VAR_9->ps2_video->clearVRAM_font = 0;
      }
      FUNC_0(VAR_9->ps2_video->gsGlobal, VAR_9->gsFontM, VAR_10, VAR_11, VAR_4,
                                 VAR_3 , VAR_1, VAR_7);
   }
}
