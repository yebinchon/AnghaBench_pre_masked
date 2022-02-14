
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thumbnail_queue_size; scalar_t__ entry_has_thumbnail; int show_fs_thumbnail; } ;
typedef TYPE_1__ rgui_t ;
typedef int menu_file_list_cbs_t ;
typedef int menu_entry_t ;
typedef enum menu_input_pointer_gesture { ____Placeholder_menu_input_pointer_gesture } menu_input_pointer_gesture ;
struct TYPE_5__ {scalar_t__ is_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 TYPE_3__ VAR_3 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,size_t,int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(void *VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
      enum menu_input_pointer_gesture VAR_8,
      menu_file_list_cbs_t *VAR_9,
      menu_entry_t *VAR_10, unsigned VAR_11)
{
   rgui_t *VAR_12 = (rgui_t*)VAR_4;
   unsigned VAR_13 = FUNC_0();
   size_t VAR_14 = FUNC_4();
   bool VAR_15 = 0;

   if (!VAR_12)
      return -1;

   VAR_15 =
         VAR_12->show_fs_thumbnail &&
         VAR_12->entry_has_thumbnail &&
         (VAR_3.is_valid || (VAR_12->thumbnail_queue_size > 0));

   switch (VAR_8)
   {
      case 128:
      case 129:
         {

            if (VAR_15)
            {




               if (VAR_6 < VAR_13)
                  FUNC_6(VAR_12);
               else
                  return FUNC_3(VAR_10, VAR_14, VAR_1);
            }
            else
            {
               if (VAR_6 < VAR_13)
                  return FUNC_3(VAR_10, VAR_14, VAR_0);
               else if (VAR_7 <= (FUNC_2() - 1))
               {


                  if (VAR_7 == VAR_14)
                     return FUNC_3(VAR_10, VAR_14, VAR_1);



                  FUNC_5(VAR_7);
                  FUNC_1(0);
               }
            }
         }
         break;
      case 130:

         if ((VAR_7 <= (FUNC_2() - 1)) &&
             (VAR_7 == VAR_14))
            return FUNC_3(VAR_10, VAR_14, VAR_2);
         break;
      default:

         break;
   }

   return 0;
}
