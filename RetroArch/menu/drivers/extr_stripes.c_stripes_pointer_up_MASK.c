
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int action_select; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
typedef int menu_entry_t ;
typedef enum menu_input_pointer_gesture { ____Placeholder_menu_input_pointer_gesture } menu_input_pointer_gesture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,size_t,int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(void *VAR_3,
      unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
      enum menu_input_pointer_gesture VAR_7,
      menu_file_list_cbs_t *VAR_8,
      menu_entry_t *VAR_9, unsigned VAR_10)
{
   size_t VAR_11 = FUNC_4();

   switch (VAR_7)
   {
      case 128:
      case 129:
         {

            unsigned VAR_12 = FUNC_0();

            if (VAR_5 < VAR_12)
               return (unsigned)FUNC_3(VAR_9, VAR_11, VAR_0);
            else if (VAR_6 <= (FUNC_2() - 1))
            {
               if (VAR_6 == VAR_11 && VAR_8 && VAR_8->action_select)
                  return (unsigned)FUNC_3(VAR_9, VAR_11, VAR_1);

               FUNC_5(VAR_6);
               FUNC_1(0);
            }
         }
         break;
      case 130:

         if ((VAR_6 <= (FUNC_2() - 1)) &&
             (VAR_6 == VAR_11))
            return FUNC_3(VAR_9, VAR_11, VAR_2);
         break;
      default:

         break;
   }

   return 0;
}
