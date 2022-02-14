
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int settings_t ;
struct TYPE_5__ {int is_playlist; int is_file_list; int is_dropdown_list; float touch_feedback_alpha; int touch_feedback_update_selection; int menu_stack_flushed; int need_compute; scalar_t__ touch_feedback_selection; int * playlist; int menu_title; } ;
typedef TYPE_1__ materialui_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,int ) ;

__attribute__((used)) static void FUNC_8(
      void *VAR_17, const char *VAR_18,
      const char *VAR_19, unsigned VAR_20)
{
   materialui_handle_t *VAR_21 = (materialui_handle_t*)VAR_17;
   settings_t *VAR_22 = FUNC_0();

   if (!VAR_21 || !VAR_22)
      return;


   FUNC_4(VAR_21->menu_title, sizeof(VAR_21->menu_title));






   VAR_21->is_playlist = 0;
   VAR_21->is_file_list = 0;
   VAR_21->is_dropdown_list = 0;

   VAR_21->is_playlist = FUNC_7(VAR_19, FUNC_5(VAR_11)) ||
                      FUNC_7(VAR_19, FUNC_5(VAR_13)) ||
                      FUNC_7(VAR_19, FUNC_5(VAR_8));

   if (!VAR_21->is_playlist)
   {




      VAR_21->is_file_list = FUNC_7(VAR_19, FUNC_5(VAR_0)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_15)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_16)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_9)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_10)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_14)) ||
                          FUNC_7(VAR_19, FUNC_5(VAR_12));

      if (!VAR_21->is_file_list)
         VAR_21->is_dropdown_list = FUNC_7(VAR_19, FUNC_5(VAR_1)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_7)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_6)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_2)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_3)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_5)) ||
                                 FUNC_7(VAR_19, FUNC_5(VAR_4));
   }


   if (VAR_21->is_playlist)
      VAR_21->playlist = FUNC_6();
   else
      VAR_21->playlist = ((void*)0);


   FUNC_2(VAR_21, VAR_19, VAR_22);


   FUNC_3(VAR_21);




   VAR_21->touch_feedback_selection = 0;
   VAR_21->touch_feedback_alpha = 0.0f;
   VAR_21->touch_feedback_update_selection = 0;


   FUNC_1(VAR_21, VAR_22);


   VAR_21->menu_stack_flushed = 0;





   VAR_21->need_compute = 1;
}
