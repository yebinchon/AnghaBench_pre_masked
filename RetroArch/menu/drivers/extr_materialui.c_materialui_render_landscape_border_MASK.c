
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_4__ {int landscape_border_shadow_right; int landscape_border_shadow_left; } ;
struct TYPE_5__ {scalar_t__ landscape_entry_margin; scalar_t__ margin; unsigned int nav_bar_layout_height; TYPE_1__ colors; scalar_t__ nav_bar_layout_width; } ;
typedef TYPE_2__ materialui_handle_t ;


 int FUNC_0 (int *,int,int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(
      materialui_handle_t *VAR_0, video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3, unsigned VAR_4, int VAR_5)
{
   if (VAR_0->landscape_entry_margin > VAR_0->margin)
   {
      unsigned VAR_6 = VAR_0->landscape_entry_margin - VAR_0->margin;
      unsigned VAR_7 = VAR_3 - VAR_4 - VAR_0->nav_bar_layout_height;
      int VAR_8 = VAR_5;
      int VAR_9 =
            VAR_5 + (int)VAR_2 - (int)VAR_0->landscape_entry_margin +
                  (int)VAR_0->margin - (int)VAR_0->nav_bar_layout_width;
      int VAR_10 = (int)VAR_4;


      FUNC_0(
            VAR_1,
            VAR_8,
            VAR_10,
            VAR_6,
            VAR_7,
            VAR_2,
            VAR_3,
            VAR_0->colors.landscape_border_shadow_left);


      FUNC_0(
            VAR_1,
            VAR_9,
            VAR_10,
            VAR_6,
            VAR_7,
            VAR_2,
            VAR_3,
            VAR_0->colors.landscape_border_shadow_right);
   }
}
