
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t categories_selection_ptr; size_t system_tab_end; int* tabs; int depth; } ;
typedef TYPE_1__ ozone_handle_t ;
bool FUNC_0(ozone_handle_t *VAR_0, bool VAR_1)
{
   bool VAR_2;

   if (VAR_0->categories_selection_ptr > VAR_0->system_tab_end)
   {
      VAR_2 = 1;
   }
   else
   {
      switch (VAR_0->tabs[VAR_0->categories_selection_ptr])
      {
         case 132:
         case 129:
         case 136:



            VAR_2 = 0;
            break;
         case 134:
         case 135:
         case 131:






         default:
            VAR_2 = 1;
            break;
      }
   }



   if (VAR_1)
      return VAR_2 && VAR_0->depth == 1;

   return VAR_2;
}
