
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int path_enabled; int label_enabled; int rich_label_enabled; int sublabel_enabled; int checked; } ;
typedef TYPE_1__ menu_entry_t ;
struct TYPE_14__ {int pointer_start_scroll_y; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;
typedef enum materialui_entry_value_type { ____Placeholder_materialui_entry_value_type } materialui_entry_value_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,int ,unsigned int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,size_t,int) ;
 int FUNC_3 (TYPE_1__*,int ,size_t,int *,int) ;
 unsigned int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const**) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(
      materialui_handle_t *VAR_6, menu_entry_t *VAR_7,
      unsigned VAR_8, size_t VAR_9, size_t VAR_10, enum menu_action VAR_11)
{
   int VAR_12 = 0;

   if ((VAR_8 < VAR_10) && (VAR_8 == VAR_9))
   {
      size_t VAR_13 = FUNC_7();
      VAR_12 = FUNC_2(
            VAR_6, VAR_7, VAR_9, VAR_11);
      if (VAR_9 == VAR_13)
      {
         const char *VAR_14 = ((void*)0);
         unsigned VAR_15 = 0;
         enum msg_file_type VAR_16 = VAR_0;
         enum materialui_entry_value_type VAR_17 = VAR_2;
         menu_entry_t VAR_18;


         FUNC_6(&VAR_18);
         VAR_18.path_enabled = 0;
         VAR_18.label_enabled = 0;
         VAR_18.rich_label_enabled = 0;
         VAR_18.sublabel_enabled = 0;

         FUNC_3(&VAR_18, 0, VAR_9, ((void*)0), 1);


         FUNC_5(&VAR_18, &VAR_14);
         VAR_15 = FUNC_4(&VAR_18);
         VAR_16 = FUNC_9(FUNC_8(VAR_14));
         VAR_17 = FUNC_1(
               VAR_6, VAR_14, VAR_18.checked, VAR_15, VAR_16);


         if ((VAR_17 == VAR_5) ||
             (VAR_17 == VAR_4) ||
             (VAR_17 == VAR_3))
            FUNC_0(
                  VAR_6,
                  VAR_6->pointer_start_scroll_y,
                  VAR_1);
      }
   }

   return VAR_12;
}
