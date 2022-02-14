
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_9__ {int list_highlighted_background; } ;
struct TYPE_8__ {scalar_t__ x; unsigned int y; scalar_t__ press_duration; int dragged; scalar_t__ pressed; } ;
struct TYPE_7__ {int dragged; } ;
struct TYPE_10__ {size_t touch_feedback_selection; scalar_t__ landscape_entry_margin; unsigned int nav_bar_layout_width; unsigned int nav_bar_layout_height; float touch_feedback_alpha; int transition_alpha; TYPE_3__ colors; TYPE_2__ pointer; TYPE_1__ scrollbar; } ;
typedef TYPE_4__ materialui_handle_t ;
typedef int higlight_color ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,unsigned int,unsigned int,unsigned int,int,size_t,float*) ;
 int FUNC_1 (float*,int ,int) ;
 float FUNC_2 () ;
 int FUNC_3 (float*,int) ;
 size_t FUNC_4 () ;

__attribute__((used)) static void FUNC_5(
      materialui_handle_t *VAR_1, video_frame_info_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, int VAR_6,
      size_t VAR_7)
{


   bool VAR_8 =
         (!VAR_1->scrollbar.dragged &&
          VAR_1->pointer.pressed &&
          !VAR_1->pointer.dragged);






   if (VAR_8)
      VAR_8 = (VAR_1->touch_feedback_selection == FUNC_4()) &&
                       (VAR_1->pointer.x > VAR_1->landscape_entry_margin) &&
                       (VAR_1->pointer.x < VAR_3 - VAR_1->landscape_entry_margin - VAR_1->nav_bar_layout_width) &&
                       (VAR_1->pointer.y >= VAR_5) &&
                       (VAR_1->pointer.y <= VAR_4 - VAR_1->nav_bar_layout_height);



   if (VAR_8)
   {




      if (VAR_1->touch_feedback_selection == VAR_7)
      {
         VAR_1->touch_feedback_alpha = 0.0f;
         return;
      }


      VAR_1->touch_feedback_alpha = (float)VAR_1->pointer.press_duration / (float)VAR_0;
      VAR_1->touch_feedback_alpha = (VAR_1->touch_feedback_alpha > 1.0f) ? 1.0f : VAR_1->touch_feedback_alpha;
   }



   else if (VAR_1->touch_feedback_alpha > 0.0f)
   {
      VAR_1->touch_feedback_alpha -= (FUNC_2() * 1000.0f) / (float)VAR_0;
      VAR_1->touch_feedback_alpha = (VAR_1->touch_feedback_alpha < 0.0f) ? 0.0f : VAR_1->touch_feedback_alpha;
   }



   if (VAR_1->touch_feedback_alpha > 0.0f)
   {
      float VAR_9[16];


      FUNC_1(VAR_9, VAR_1->colors.list_highlighted_background, sizeof(VAR_9));
      FUNC_3(VAR_9, VAR_1->transition_alpha * VAR_1->touch_feedback_alpha);


      FUNC_0(
            VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
            VAR_1->touch_feedback_selection,
            VAR_9);
   }
}
