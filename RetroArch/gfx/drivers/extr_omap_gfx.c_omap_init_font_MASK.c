
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int video_msg_color_r; int video_msg_color_g; int video_msg_color_b; } ;
struct TYPE_11__ {int font_size; } ;
struct TYPE_10__ {scalar_t__* path_font; } ;
struct TYPE_9__ {int video_font_enable; } ;
struct TYPE_13__ {TYPE_4__ floats; TYPE_3__ video; TYPE_2__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_14__ {int* font_rgb; int font; int font_driver; } ;
typedef TYPE_6__ omap_video_t ;


 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int *,int *,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_3(omap_video_t *VAR_0, const char *VAR_1, unsigned VAR_2)
{
   int VAR_3, VAR_4, VAR_5;
   settings_t *VAR_6 = FUNC_1();

   if (!VAR_6->bools.video_font_enable)
      return;

   if (!(FUNC_2(&VAR_0->font_driver, &VAR_0->font,
               *VAR_6->paths.path_font ? VAR_6->paths.path_font : ((void*)0), VAR_6->video.font_size)))
   {
      FUNC_0("[video_omap]: font init failed\n");
      return;
   }

   VAR_3 = VAR_6->floats.video_msg_color_r * 255;
   VAR_4 = VAR_6->floats.video_msg_color_g * 255;
   VAR_5 = VAR_6->floats.video_msg_color_b * 255;

   VAR_3 = (VAR_3 < 0) ? 0 : (VAR_3 > 255 ? 255 : VAR_3);
   VAR_4 = (VAR_4 < 0) ? 0 : (VAR_4 > 255 ? 255 : VAR_4);
   VAR_5 = (VAR_5 < 0) ? 0 : (VAR_5 > 255 ? 255 : VAR_5);

   VAR_0->font_rgb[0] = VAR_3;
   VAR_0->font_rgb[1] = VAR_4;
   VAR_0->font_rgb[2] = VAR_5;
}
