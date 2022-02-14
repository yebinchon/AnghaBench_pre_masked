
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int menu_file_list_cbs_t ;
typedef int menu_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_3__ {int dragged; int x; int height; int y; scalar_t__ width; scalar_t__ active; } ;
struct TYPE_4__ {unsigned int pointer_start_x; unsigned int pointer_start_y; float touch_feedback_alpha; int touch_feedback_update_selection; unsigned int nav_bar_layout_height; int margin; int landscape_entry_margin; TYPE_1__ scrollbar; int is_portrait; int scroll_y; scalar_t__ touch_feedback_selection; int pointer_start_scroll_y; } ;
typedef TYPE_2__ materialui_handle_t ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (float) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, menu_file_list_cbs_t *VAR_5,
      menu_entry_t *VAR_6, unsigned VAR_7)
{
   materialui_handle_t *VAR_8 = (materialui_handle_t*)VAR_1;

   if (!VAR_8)
      return -1;


   VAR_8->pointer_start_x = VAR_2;
   VAR_8->pointer_start_y = VAR_3;
   VAR_8->pointer_start_scroll_y = VAR_8->scroll_y;




   VAR_8->touch_feedback_selection = 0;
   VAR_8->touch_feedback_alpha = 0.0f;
   VAR_8->touch_feedback_update_selection = 1;




   VAR_8->scrollbar.dragged = 0;


   if (VAR_8->scrollbar.active)
   {
      unsigned VAR_9 = FUNC_1();
      menu_animation_ctx_tag VAR_10 = (uintptr_t)&VAR_8->scroll_y;
      unsigned VAR_11;
      unsigned VAR_12;
      int VAR_13;
      int VAR_14;

      FUNC_4(&VAR_11, &VAR_12);



      if ((VAR_3 < VAR_9) ||
          (VAR_3 > VAR_12 - VAR_8->nav_bar_layout_height))
         return 0;



      VAR_13 = 2 * (int)VAR_8->margin;






      if (!VAR_8->is_portrait)
      {
         if (VAR_8->landscape_entry_margin <= VAR_8->margin)
            VAR_13 += (int)VAR_8->margin;
         else if (VAR_8->landscape_entry_margin <= 2 * VAR_8->margin)
            VAR_13 += (int)((2 * VAR_8->margin) - VAR_8->landscape_entry_margin);
      }



      if (((int)VAR_2 < VAR_8->scrollbar.x - VAR_13) ||
          ((int)VAR_2 > VAR_8->scrollbar.x + (int)VAR_8->scrollbar.width))
         return 0;



      VAR_14 = 2 * (int)VAR_8->margin;


      if (VAR_8->scrollbar.height < VAR_8->margin)
         VAR_14 += (int)(VAR_8->margin - VAR_8->scrollbar.height);



      if (((int)VAR_3 < VAR_8->scrollbar.y - VAR_14) ||
          ((int)VAR_3 > VAR_8->scrollbar.y + (int)VAR_8->scrollbar.height + VAR_14))
         return 0;





      FUNC_0(&VAR_10);
      FUNC_2(0.0f);


      VAR_8->scrollbar.dragged = 1;




      FUNC_3(VAR_0);
   }

   return 0;
}
