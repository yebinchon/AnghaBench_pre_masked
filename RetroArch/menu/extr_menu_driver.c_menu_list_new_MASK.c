
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int menu_stack_size; int selection_buf_size; int ** selection_buf; int ** menu_stack; } ;
typedef TYPE_1__ menu_list_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static menu_list_t *FUNC_3(void)
{
   unsigned VAR_0;
   menu_list_t *VAR_1 = (menu_list_t*)FUNC_1(sizeof(*VAR_1));

   if (!VAR_1)
      return ((void*)0);

   VAR_1->menu_stack_size = 1;
   VAR_1->selection_buf_size = 1;
   VAR_1->selection_buf = ((void*)0);
   VAR_1->menu_stack = (file_list_t**)
      FUNC_0(VAR_1->menu_stack_size, sizeof(*VAR_1->menu_stack));

   if (!VAR_1->menu_stack)
      goto error;

   VAR_1->selection_buf = (file_list_t**)
      FUNC_0(VAR_1->selection_buf_size, sizeof(*VAR_1->selection_buf));

   if (!VAR_1->selection_buf)
      goto error;

   for (VAR_0 = 0; VAR_0 < VAR_1->menu_stack_size; VAR_0++)
      VAR_1->menu_stack[VAR_0] = (file_list_t*)
         FUNC_0(1, sizeof(*VAR_1->menu_stack[VAR_0]));

   for (VAR_0 = 0; VAR_0 < VAR_1->selection_buf_size; VAR_0++)
      VAR_1->selection_buf[VAR_0] = (file_list_t*)
         FUNC_0(1, sizeof(*VAR_1->selection_buf[VAR_0]));

   return VAR_1;

error:
   FUNC_2(VAR_1);
   return ((void*)0);
}
