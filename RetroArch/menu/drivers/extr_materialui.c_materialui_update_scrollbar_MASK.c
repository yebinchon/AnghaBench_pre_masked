
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; scalar_t__ width; scalar_t__ height; scalar_t__ active; } ;
struct TYPE_5__ {scalar_t__ landscape_entry_margin; scalar_t__ margin; float scroll_y; float content_height; TYPE_1__ scrollbar; scalar_t__ nav_bar_layout_width; scalar_t__ nav_bar_layout_height; } ;
typedef TYPE_2__ materialui_handle_t ;



__attribute__((used)) static void FUNC_0(
      materialui_handle_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, int VAR_4)
{

   if (VAR_0->scrollbar.active)
   {
      int VAR_5 = (int)VAR_2 - (int)VAR_3 - (int)VAR_0->nav_bar_layout_height;
      int VAR_6 = VAR_5 + (int)VAR_3 - (int)(VAR_0->scrollbar.width + VAR_0->scrollbar.height);


      VAR_0->scrollbar.x = VAR_4 + (int)VAR_1 - (int)VAR_0->scrollbar.width - (int)VAR_0->nav_bar_layout_width;




      if (VAR_0->landscape_entry_margin > VAR_0->margin)
         VAR_0->scrollbar.x -= (int)VAR_0->landscape_entry_margin - (int)VAR_0->margin;


      VAR_0->scrollbar.y = (int)VAR_3 + (int)(VAR_0->scroll_y * (float)VAR_5 / VAR_0->content_height);


      VAR_0->scrollbar.y += (int)VAR_0->scrollbar.width;


      VAR_0->scrollbar.y = (VAR_0->scrollbar.y > VAR_6) ? VAR_6 : VAR_0->scrollbar.y;
   }
}
