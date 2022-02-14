
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; int sublabel_enabled; } ;
typedef TYPE_1__ menu_entry_t ;
typedef int materialui_handle_t ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;


 int FUNC_0 (void*,TYPE_1__*,size_t,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,size_t,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 () ;

__attribute__((used)) static int FUNC_5(
      void *VAR_0, menu_entry_t *VAR_1,
      size_t VAR_2, enum menu_action VAR_3)
{
   materialui_handle_t *VAR_4 = (materialui_handle_t*)VAR_0;
   menu_entry_t *VAR_5 = VAR_1;
   size_t VAR_6 = VAR_2;
   size_t VAR_7;
   enum menu_action VAR_8;

   if (!VAR_4)
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);


   VAR_8 = FUNC_1(VAR_4, VAR_3);
   VAR_7 = FUNC_4();

   if (VAR_7 != VAR_6)
   {
      static menu_entry_t VAR_9;




      FUNC_3(&VAR_9);
      VAR_9.path_enabled = 0;
      VAR_9.label_enabled = 0;
      VAR_9.rich_label_enabled = 0;
      VAR_9.value_enabled = 0;
      VAR_9.sublabel_enabled = 0;
      FUNC_2(&VAR_9, 0, VAR_7, ((void*)0), 1);
      VAR_5 = &VAR_9;
   }


   return FUNC_0(VAR_0, VAR_5, VAR_7, VAR_8);
}
