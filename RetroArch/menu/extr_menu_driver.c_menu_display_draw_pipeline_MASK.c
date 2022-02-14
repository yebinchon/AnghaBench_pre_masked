
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int menu_display_ctx_draw_t ;
struct TYPE_2__ {int (* draw_pipeline ) (int *,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(menu_display_ctx_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   if (VAR_0 && VAR_1 && VAR_0->draw_pipeline)
      VAR_0->draw_pipeline(VAR_1, VAR_2);
}
