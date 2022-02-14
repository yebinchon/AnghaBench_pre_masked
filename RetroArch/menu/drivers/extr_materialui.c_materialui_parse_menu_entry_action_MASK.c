
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_dropdown_list; int is_file_list; int is_playlist; } ;
typedef TYPE_1__ materialui_handle_t ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 size_t FUNC_4 () ;

__attribute__((used)) static enum menu_action FUNC_5(
      materialui_handle_t *VAR_5, enum menu_action VAR_6)
{
   enum menu_action VAR_7 = VAR_6;


   switch (VAR_6)
   {
      case 128:
      case 133:



         FUNC_0(VAR_5, VAR_2);
         break;
      case 132:
      case 131:



         if (FUNC_2(VAR_5, VAR_1) == 1)
         {
            FUNC_3(VAR_5, ((void*)0), VAR_6);
            VAR_7 = VAR_0;
         }
         else
         {




            if (VAR_5->is_playlist || VAR_5->is_file_list || VAR_5->is_dropdown_list)
               FUNC_0(VAR_5, VAR_2);
            else
            {
               size_t VAR_8 = FUNC_4();





               if (!FUNC_1(VAR_5, VAR_8))
                  VAR_7 = VAR_0;
            }
         }
         break;
      case 129:



         FUNC_0(VAR_5, VAR_4);
         break;
      case 130:



         FUNC_0(VAR_5, VAR_3);
         break;
      default:


         break;
   }

   return VAR_7;
}
