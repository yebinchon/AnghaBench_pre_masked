
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int menu_file_list_cbs_t ;
struct TYPE_5__ {int size; TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {scalar_t__ actiondata; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__,int ) ;

menu_file_list_cbs_t *FUNC_1(void)
{
   if (VAR_0)
   {
      const file_list_t *VAR_1 = FUNC_0(VAR_0, 0);
      return (menu_file_list_cbs_t*)VAR_1->list[VAR_1->size - 1].actiondata;
   }
   return ((void*)0);
}
