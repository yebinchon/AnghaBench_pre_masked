
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {size_t selection_ptr_old; size_t system_tab_end; size_t categories_selection_ptr_old; size_t categories_selection_ptr; unsigned int categories_active_idx; int selection_buf_old; } ;
typedef TYPE_3__ stripes_handle_t ;
struct TYPE_13__ {scalar_t__ menu_horizontal_animation; } ;
struct TYPE_16__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_17__ {size_t size; TYPE_2__* list; } ;
typedef TYPE_5__ file_list_t ;
typedef enum menu_list_type { ____Placeholder_menu_list_type } menu_list_type ;
struct TYPE_14__ {int type; int * label; } ;



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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,unsigned int,size_t,size_t,unsigned int*,unsigned int*) ;
 int FUNC_8 (TYPE_3__*,unsigned int) ;
 int FUNC_9 (TYPE_5__*,int ,unsigned int,unsigned int) ;
 size_t FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int *,unsigned int*) ;

__attribute__((used)) static void FUNC_12(void *VAR_20, enum menu_list_type VAR_21, unsigned VAR_22)
{
   size_t VAR_23, VAR_24;
   stripes_handle_t *VAR_25 = (stripes_handle_t*)VAR_20;
   file_list_t *VAR_26 = FUNC_2(0);
   file_list_t *VAR_27 = FUNC_3(0);
   size_t VAR_28 = FUNC_4();
   settings_t *VAR_29 = FUNC_0();

   if (!VAR_25)
      return;


   if (VAR_29->bools.menu_horizontal_animation)
   {
      unsigned VAR_30 = 0, VAR_31 = 0;
      unsigned VAR_32 = 0;
      FUNC_11(((void*)0), &VAR_32);


      if (VAR_28 >= VAR_27->size)
         VAR_28 = VAR_27->size ? VAR_27->size - 1 : 0;

      VAR_25->selection_ptr_old = VAR_28;

      FUNC_7(VAR_25, VAR_32, VAR_27->size,
            VAR_25->selection_ptr_old, &VAR_30, &VAR_31);

      FUNC_9(VAR_27, VAR_25->selection_buf_old, VAR_30, VAR_31);

      VAR_25->selection_ptr_old -= VAR_30;
      VAR_31 -= VAR_30;
      VAR_30 = 0;
   }
   else
      VAR_25->selection_ptr_old = 0;

   VAR_24 = FUNC_10(VAR_25, 138)
      + VAR_25->system_tab_end;

   switch (VAR_21)
   {
      case 137:
         break;
      case 138:
         VAR_25->categories_selection_ptr_old = VAR_25->categories_selection_ptr;

         switch (VAR_22)
         {
            case 139:
               if (VAR_25->categories_selection_ptr == 0)
               {
                  VAR_25->categories_selection_ptr = VAR_24;
                  VAR_25->categories_active_idx = (unsigned)(VAR_24 - 1);
               }
               else
                  VAR_25->categories_selection_ptr--;
               break;
            default:
               if (VAR_25->categories_selection_ptr == VAR_24)
               {
                  VAR_25->categories_selection_ptr = 0;
                  VAR_25->categories_active_idx = 1;
               }
               else
                  VAR_25->categories_selection_ptr++;
               break;
         }

         VAR_23 = VAR_26->size;

         if (VAR_26->list[VAR_23 - 1].label)
            FUNC_1(VAR_26->list[VAR_23 - 1].label);
         VAR_26->list[VAR_23 - 1].label = ((void*)0);

         switch (FUNC_8(VAR_25, (unsigned)VAR_25->categories_selection_ptr))
         {
            case 132:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_6));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_16;
               break;
            case 129:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_9));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_17;
               break;
            case 131:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_7));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_14;
               break;
            case 134:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_3));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_12;
               break;
            case 135:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_2));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_11;
               break;
            case 136:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_1));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_0;
               break;
            default:
               VAR_26->list[VAR_23 - 1].label =
                  FUNC_6(FUNC_5(VAR_4));
               VAR_26->list[VAR_23 - 1].type =
                  VAR_18;
               break;
         }
         break;
      default:
         break;
   }
}
