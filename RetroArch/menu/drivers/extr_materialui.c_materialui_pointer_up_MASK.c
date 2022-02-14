
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int menu_file_list_cbs_t ;
typedef int menu_entry_t ;
struct TYPE_9__ {int dragged; } ;
struct TYPE_10__ {unsigned int nav_bar_layout_width; int icon_size; unsigned int landscape_entry_margin; int is_dropdown_list; int is_file_list; int is_playlist; int primary_thumbnail_available; int nav_bar_layout_height; TYPE_1__ scrollbar; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef enum menu_input_pointer_gesture { ____Placeholder_menu_input_pointer_gesture } menu_input_pointer_gesture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *,size_t,int ) ;
 int FUNC_2 (TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int,size_t,int *,int *,unsigned int) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned int,size_t,size_t,int ) ;
 int FUNC_4 (TYPE_2__*,int *,unsigned int,unsigned int,unsigned int,size_t,int) ;
 int FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 () ;
 size_t FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (float) ;
 size_t FUNC_10 () ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_14(void *VAR_7,
      unsigned VAR_8, unsigned VAR_9, unsigned VAR_10,
      enum menu_input_pointer_gesture VAR_11,
      menu_file_list_cbs_t *VAR_12,
      menu_entry_t *VAR_13, unsigned VAR_14)
{
   unsigned VAR_15 = FUNC_6();
   size_t VAR_16 = FUNC_10();
   size_t VAR_17 = FUNC_7();
   materialui_handle_t *VAR_18 = (materialui_handle_t*)VAR_7;
   unsigned VAR_19;
   unsigned VAR_20;

   if (!VAR_18)
      return -1;



   if (VAR_18->scrollbar.dragged)
   {


      FUNC_9(0.0f);


      FUNC_12(VAR_6);

      VAR_18->scrollbar.dragged = 0;
      return 0;
   }

   FUNC_13(&VAR_19, &VAR_20);

   switch (VAR_11)
   {
      case 128:
      case 131:
         {

            if ((VAR_9 > VAR_20 - VAR_18->nav_bar_layout_height) ||
                (VAR_8 > VAR_19 - VAR_18->nav_bar_layout_width))
               return FUNC_2(
                     VAR_18, VAR_8, VAR_9, VAR_19, VAR_20, VAR_16, VAR_12, VAR_13, VAR_14);

            else if (VAR_9 < VAR_15)
            {


               if (VAR_18->is_playlist || VAR_18->is_file_list)
               {
                  bool VAR_21 =
                        VAR_18->is_playlist && VAR_18->primary_thumbnail_available;


                  unsigned VAR_22 =
                        VAR_19 -
                        ((VAR_21 ? 3 : 2) * VAR_18->icon_size) -
                         VAR_18->nav_bar_layout_width;


                  if (VAR_8 > VAR_19 - VAR_18->icon_size - VAR_18->nav_bar_layout_width)
                     return FUNC_8() ? 0 : -1;

                  else if (VAR_21 &&
                           VAR_8 > VAR_19 - (2 * VAR_18->icon_size) - VAR_18->nav_bar_layout_width)
                  {
                     FUNC_5(VAR_18);
                     return 0;
                  }

                  else if (VAR_8 <= VAR_22)
                     return FUNC_1(VAR_18, VAR_13, VAR_16, VAR_0);
               }



               else
                  return FUNC_1(VAR_18, VAR_13, VAR_16, VAR_0);
            }

            else if ((VAR_10 < VAR_17) &&
                     (VAR_8 > VAR_18->landscape_entry_margin) &&
                     (VAR_8 < VAR_19 - VAR_18->landscape_entry_margin - VAR_18->nav_bar_layout_width))
            {
               if (VAR_11 == 128)
               {




                  if (VAR_10 != VAR_16)
                     FUNC_11(VAR_10);



                  return FUNC_1(VAR_18, VAR_13, (size_t)VAR_10, VAR_3);
               }
               else
               {
                  FUNC_11(VAR_10);
                  FUNC_9(0.0f);
               }
            }
         }
         break;
      case 132:

         if ((VAR_10 < VAR_17) && (VAR_10 == VAR_16))
            return FUNC_1(VAR_18, VAR_13, VAR_16, VAR_4);
         break;
      case 130:
         {





            if (FUNC_0(VAR_18, VAR_5) == 1)
               return FUNC_1(VAR_18, VAR_13, VAR_16, VAR_2);


            else if (VAR_18->is_playlist || VAR_18->is_file_list || VAR_18->is_dropdown_list)
               return FUNC_4(
                     VAR_18, VAR_13, VAR_20, VAR_15, VAR_9,
                     VAR_16, 1);


            else
               return FUNC_3(
                     VAR_18, VAR_13, VAR_10, VAR_16, VAR_17, VAR_1);
         }
         break;
      case 129:
         {





            if (FUNC_0(VAR_18, VAR_5) == 1)
               return FUNC_1(VAR_18, VAR_13, VAR_16, VAR_1);


            else if (VAR_18->is_playlist || VAR_18->is_file_list || VAR_18->is_dropdown_list)
               return FUNC_4(
                     VAR_18, VAR_13, VAR_20, VAR_15, VAR_9,
                     VAR_16, 0);


            else
               return FUNC_3(
                     VAR_18, VAR_13, VAR_10, VAR_16, VAR_17, VAR_2);
         }
         break;
      default:

         break;
   }

   return 0;
}
