
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int checked; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_5__ {scalar_t__ actiondata; } ;



void FUNC_0(file_list_t *VAR_0, size_t VAR_1,
      bool VAR_2)
{
   menu_file_list_cbs_t *VAR_3 = (menu_file_list_cbs_t*)VAR_0->list[VAR_1].actiondata;

   if (VAR_3)
      VAR_3->checked = VAR_2;
}
