
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int menu_wallpaper_opacity; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; scalar_t__ texture; } ;
typedef TYPE_2__ menu_display_ctx_draw_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int ) ;

void FUNC_2(menu_display_ctx_draw_t *VAR_0,
      video_frame_info_t *VAR_1)
{
   VAR_0->texture = 0;
   VAR_0->x = 0;
   VAR_0->y = 0;

   FUNC_1(VAR_0, VAR_1, 0,
         VAR_1->menu_wallpaper_opacity);
   FUNC_0(VAR_0, VAR_1);
}
