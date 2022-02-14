
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float margins_screen_top; float margins_screen_left; int depth; } ;
typedef TYPE_1__ xmb_handle_t ;
typedef int menu_file_list_cbs_t ;
typedef int menu_entry_t ;
typedef unsigned int int16_t ;
typedef enum menu_input_pointer_gesture { ____Placeholder_menu_input_pointer_gesture } menu_input_pointer_gesture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 () ;
 size_t FUNC_5 () ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (unsigned int*,unsigned int*) ;
 int FUNC_8 (TYPE_1__*,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 float FUNC_9 (TYPE_1__*,unsigned int,size_t) ;

__attribute__((used)) static int FUNC_10(void *VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12,
      enum menu_input_pointer_gesture VAR_13,
      menu_file_list_cbs_t *VAR_14,
      menu_entry_t *VAR_15, unsigned VAR_16)
{
   xmb_handle_t *VAR_17 = (xmb_handle_t*)VAR_9;
   size_t VAR_18 = FUNC_5();
   unsigned VAR_19 = (unsigned)FUNC_2();
   unsigned VAR_20;
   unsigned VAR_21;
   int16_t VAR_22;
   int16_t VAR_23;
   int16_t VAR_24;

   if (!VAR_17)
      return -1;

   FUNC_7(&VAR_20, &VAR_21);
   VAR_22 = (int16_t)VAR_17->margins_screen_top;
   VAR_23 = (int16_t)VAR_17->margins_screen_left;
   VAR_24 = (int16_t)((float)VAR_20 - VAR_17->margins_screen_left);

   switch (VAR_13)
   {
      case 128:
      case 133:






         if (VAR_10 < VAR_23)
         {
            if (VAR_11 >= VAR_22)
               return FUNC_3(VAR_15, VAR_18, VAR_0);
            else
               return FUNC_4() ? 0 : -1;
         }
         else if (VAR_10 > VAR_24)
            return FUNC_3(VAR_15, VAR_18, VAR_5);
         else if (VAR_12 <= (VAR_19 - 1))
         {

            if (VAR_12 == VAR_18)
               return FUNC_3(VAR_15, VAR_18, VAR_5);


            FUNC_6(VAR_12);
            FUNC_1(0);
         }
         break;
      case 134:

         if ((VAR_12 <= VAR_19 - 1) && (VAR_12 == VAR_18))
            return FUNC_3(VAR_15, VAR_18, VAR_6);
         break;
      case 131:




         if (VAR_11 > VAR_22)
            FUNC_3(
                  VAR_15, VAR_18, (VAR_17->depth == 1) ? VAR_2 : VAR_1);
         break;
      case 130:




         if (VAR_11 > VAR_22)
            FUNC_3(
                  VAR_15, VAR_18, (VAR_17->depth == 1) ? VAR_1 : VAR_2);
         break;
      case 129:

         if (VAR_10 < VAR_23)
            FUNC_3(VAR_15, VAR_18, VAR_3);
         else if (VAR_10 < VAR_24)
         {


            unsigned VAR_25 = 0;
            unsigned VAR_26 = VAR_19;

            if (VAR_21)
               FUNC_8(VAR_17, VAR_21,
                     VAR_19, (unsigned)VAR_18, &VAR_25, &VAR_26);

            if (VAR_26 < VAR_19)
            {
               FUNC_6((size_t)VAR_26);
               FUNC_1(1);
            }
            else
               FUNC_0(VAR_8, ((void*)0));
         }
         break;
      case 132:

         if (VAR_10 < VAR_23)
            FUNC_3(VAR_15, VAR_18, VAR_4);
         else if (VAR_10 < VAR_24)
         {


            unsigned VAR_27 = (unsigned)VAR_18 + 1;
            size_t VAR_28;
            unsigned VAR_29;







            while (1)
            {
               float VAR_30 = FUNC_9(VAR_17, VAR_27, VAR_18) + VAR_17->margins_screen_top;

               if (VAR_30 > VAR_21)
               {



                  VAR_27--;
                  break;
               }

               VAR_27++;
            }

            VAR_29 = (VAR_27 >= VAR_18) ? VAR_27 - VAR_18 : 0;
            VAR_28 = (VAR_18 > VAR_29) ? VAR_18 - VAR_29 : 0;

            if (VAR_28 > 0)
            {
               FUNC_6(VAR_28);
               FUNC_1(1);
            }
            else
            {
               bool VAR_31 = 0;
               FUNC_0(VAR_7, &VAR_31);
            }
         }
         break;
      default:

         break;
   }

   return 0;
}
