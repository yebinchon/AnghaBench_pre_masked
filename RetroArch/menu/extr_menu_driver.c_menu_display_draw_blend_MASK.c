
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_5__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ menu_display_ctx_draw_t ;
struct TYPE_6__ {int (* draw ) (TYPE_1__*,int *) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(menu_display_ctx_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   if (!VAR_0 || !VAR_1 || !VAR_0->draw)
      return;

   if (VAR_1->height <= 0)
      return;
   if (VAR_1->width <= 0)
      return;
   FUNC_0(VAR_2);
   VAR_0->draw(VAR_1, VAR_2);
   FUNC_1(VAR_2);
}
