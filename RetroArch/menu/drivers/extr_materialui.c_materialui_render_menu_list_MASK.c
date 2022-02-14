
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_15__ {int path_enabled; int value_enabled; int sublabel_enabled; } ;
typedef TYPE_2__ menu_entry_t ;
typedef int materialui_node_t ;
struct TYPE_14__ {int dragged; } ;
struct TYPE_16__ {float touch_feedback_alpha; size_t touch_feedback_selection; size_t first_onscreen_entry; size_t last_onscreen_entry; int list_view_type; TYPE_1__ scrollbar; } ;
typedef TYPE_3__ materialui_handle_t ;
typedef int file_list_t ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (TYPE_3__*,int *,int *,TYPE_2__*,int,int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_2 (TYPE_3__*,int *,int *,TYPE_2__*,int,int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_3 (TYPE_3__*,int *,int *,TYPE_2__*,int,int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_4 (TYPE_3__*,int *,unsigned int,unsigned int) ;
 unsigned int FUNC_5 () ;
 int * FUNC_6 (int ) ;
 size_t FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int ,size_t,int *,int) ;
 int FUNC_9 (TYPE_2__*) ;
 size_t FUNC_10 () ;
 size_t FUNC_11 () ;

__attribute__((used)) static void FUNC_12(
      materialui_handle_t *VAR_0,
      video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      int VAR_4)
{
   size_t VAR_5;
   size_t VAR_6;
   size_t VAR_7;
   file_list_t *VAR_8 = ((void*)0);
   size_t VAR_9 = FUNC_7();
   unsigned VAR_10 = FUNC_5();
   size_t VAR_11 = FUNC_11();
   bool VAR_12 =
         !VAR_0->scrollbar.dragged &&
         (VAR_0->touch_feedback_alpha >= 0.5f) &&
         (VAR_0->touch_feedback_selection == FUNC_10());

   VAR_8 = FUNC_6(0);
   if (!VAR_8)
      return;


   VAR_6 = (VAR_0->first_onscreen_entry < VAR_9) ? VAR_0->first_onscreen_entry : VAR_9;
   VAR_7 = (VAR_0->last_onscreen_entry < VAR_9) ? VAR_0->last_onscreen_entry : VAR_9;

   for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5++)
   {
      bool VAR_13 = (VAR_11 == VAR_5);
      bool VAR_14 = VAR_12 && (VAR_0->touch_feedback_selection == VAR_5);
      materialui_node_t *VAR_15 = (materialui_node_t*)FUNC_0(VAR_8, VAR_5);
      menu_entry_t VAR_16;


      if (!VAR_15)
         break;


      FUNC_9(&VAR_16);
      VAR_16.path_enabled = 0;
      VAR_16.value_enabled = (VAR_0->list_view_type == 133);
      VAR_16.sublabel_enabled = (VAR_0->list_view_type != 131);
      FUNC_8(&VAR_16, 0, VAR_5, ((void*)0), 1);
      switch (VAR_0->list_view_type)
      {
         case 132:
         case 128:
         case 129:
         case 130:
            FUNC_3(
                  VAR_0,
                  VAR_1,
                  VAR_15,
                  &VAR_16,
                  VAR_13,
                  VAR_14,
                  VAR_10,
                  VAR_2,
                  VAR_3,
                  VAR_4);
            break;
         case 131:
            FUNC_2(
                  VAR_0,
                  VAR_1,
                  VAR_15,
                  &VAR_16,
                  VAR_13,
                  VAR_14,
                  VAR_10,
                  VAR_2,
                  VAR_3,
                  VAR_4);
            break;
         case 133:
         default:
            FUNC_1(
                  VAR_0,
                  VAR_1,
                  VAR_15,
                  &VAR_16,
                  VAR_13,
                  VAR_14,
                  VAR_10,
                  VAR_2,
                  VAR_3,
                  VAR_4);
            break;
      }
   }


   FUNC_4(
         VAR_0, VAR_1, VAR_2, VAR_3);
}
