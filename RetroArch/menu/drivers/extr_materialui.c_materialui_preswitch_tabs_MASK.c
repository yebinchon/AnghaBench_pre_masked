
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_2__ materialui_nav_bar_menu_tab_t ;
typedef int materialui_handle_t ;
struct TYPE_8__ {size_t size; TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_6__ {void* type; int * label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;



 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(
      materialui_handle_t *VAR_6, materialui_nav_bar_menu_tab_t *VAR_7)
{
   size_t VAR_8 = 0;
   file_list_t *VAR_9 = ((void*)0);
   bool VAR_10 = 0;
   if (FUNC_2(VAR_6, VAR_3) > 1)
   {
      VAR_10 = 1;
      FUNC_3(FUNC_5(VAR_0), 0);

      FUNC_0();
   }




   VAR_9 = FUNC_4(0);
   VAR_8 = VAR_9->size;




   if (VAR_8 < 1)
      return 0;


   if (VAR_9->list[VAR_8 - 1].label)
      FUNC_1(VAR_9->list[VAR_8 - 1].label);
   VAR_9->list[VAR_8 - 1].label = ((void*)0);


   switch (VAR_7->type)
   {
      case 129:
         VAR_9->list[VAR_8 - 1].label =
            FUNC_6(FUNC_5(VAR_1));
         VAR_9->list[VAR_8 - 1].type =
            VAR_4;
         break;
      case 128:
         VAR_9->list[VAR_8 - 1].label =
            FUNC_6(FUNC_5(VAR_2));
         VAR_9->list[VAR_8 - 1].type =
            VAR_5;
         break;
      case 130:
      default:
         VAR_9->list[VAR_8 - 1].label =
            FUNC_6(FUNC_5(VAR_0));
         VAR_9->list[VAR_8 - 1].type =
            VAR_5;
         break;
   }

   return VAR_10;
}
