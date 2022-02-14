
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t categories_selection_ptr; } ;
typedef TYPE_1__ xmb_handle_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   xmb_handle_t *VAR_1 = (xmb_handle_t*)VAR_0;

   if (!VAR_1)
      return 0;

   return VAR_1->categories_selection_ptr;
}
