
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ categories_selection_ptr; scalar_t__ system_tab_end; int title_name; int horizontal_list; } ;
typedef TYPE_1__ stripes_handle_t ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,scalar_t__,char const**,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(stripes_handle_t *VAR_0)
{
   if (VAR_0->categories_selection_ptr <= VAR_0->system_tab_end)
   {
      FUNC_2(VAR_0->title_name, sizeof(VAR_0->title_name));
   }
   else
   {
      const char *VAR_1 = ((void*)0);
      FUNC_1(
            VAR_0->horizontal_list,
            VAR_0->categories_selection_ptr - (VAR_0->system_tab_end + 1),
            &VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

      if (!VAR_1)
         return;

      FUNC_0(
            VAR_0->title_name, VAR_1, sizeof(VAR_0->title_name));
   }
}
