
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* horizontal_list; } ;
typedef TYPE_1__ stripes_handle_t ;
struct TYPE_6__ {int * list; } ;
typedef TYPE_2__ file_list_t ;
typedef enum menu_list_type { ____Placeholder_menu_list_type } menu_list_type ;
struct TYPE_7__ {int * list; } ;




 size_t FUNC_0 (TYPE_4__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(void *VAR_0,
      enum menu_list_type VAR_1, unsigned VAR_2)
{
   size_t VAR_3 = 0;
   stripes_handle_t *VAR_4 = (stripes_handle_t*)VAR_0;

   switch (VAR_1)
   {
      case 128:
         {
            file_list_t *VAR_5 = FUNC_1(0);
            VAR_3 = FUNC_2(0);
            if (VAR_2 < VAR_3)
               return (void*)&VAR_5->list[VAR_2];
         }
         break;
      case 129:
         if (VAR_4 && VAR_4->horizontal_list)
            VAR_3 = FUNC_0(VAR_4->horizontal_list);
         if (VAR_2 < VAR_3)
            return (void*)&VAR_4->horizontal_list->list[VAR_2];
         break;
      default:
         break;
   }

   return ((void*)0);
}
