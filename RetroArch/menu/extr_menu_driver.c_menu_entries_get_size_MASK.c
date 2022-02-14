
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int menu_list_t ;
struct TYPE_3__ {size_t size; } ;
typedef TYPE_1__ file_list_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

size_t FUNC_1(void)
{
   const file_list_t *VAR_1 = ((void*)0);
   menu_list_t *VAR_2 = VAR_0;
   if (!VAR_2)
      return 0;
   VAR_1 = FUNC_0(VAR_2, 0);
   return VAR_1->size;
}
