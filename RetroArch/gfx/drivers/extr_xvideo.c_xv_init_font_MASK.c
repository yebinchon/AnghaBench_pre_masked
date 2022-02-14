
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int font_v; int font_u; int font_y; int font; int font_driver; } ;
typedef TYPE_4__ xv_t ;
struct TYPE_10__ {int video_msg_color_r; int video_msg_color_g; int video_msg_color_b; int video_font_size; } ;
struct TYPE_9__ {scalar_t__* path_font; } ;
struct TYPE_8__ {int video_font_enable; } ;
struct TYPE_12__ {TYPE_3__ floats; TYPE_2__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;


 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__*,int ) ;
 int FUNC_3 (int *,int *,int *,int,int,int) ;

__attribute__((used)) static void FUNC_4(xv_t *VAR_0, const char *VAR_1, unsigned VAR_2)
{
   settings_t *VAR_3 = FUNC_1();

   if (!VAR_3->bools.video_font_enable)
      return;

   if (FUNC_2(
            &VAR_0->font_driver,
            &VAR_0->font, *VAR_3->paths.path_font
            ? VAR_3->paths.path_font : ((void*)0),
            VAR_3->floats.video_font_size))
   {
      int VAR_4, VAR_5, VAR_6;
      VAR_4 = VAR_3->floats.video_msg_color_r * 255;
      VAR_4 = (VAR_4 < 0 ? 0 : (VAR_4 > 255 ? 255 : VAR_4));
      VAR_5 = VAR_3->floats.video_msg_color_g * 255;
      VAR_5 = (VAR_5 < 0 ? 0 : (VAR_5 > 255 ? 255 : VAR_5));
      VAR_6 = VAR_3->floats.video_msg_color_b * 255;
      VAR_6 = (VAR_6 < 0 ? 0 : (VAR_6 > 255 ? 255 : VAR_6));

      FUNC_3(&VAR_0->font_y, &VAR_0->font_u, &VAR_0->font_v,
            VAR_4, VAR_5, VAR_6);
   }
   else
      FUNC_0("[XVideo]: Could not initialize fonts.\n");
}
