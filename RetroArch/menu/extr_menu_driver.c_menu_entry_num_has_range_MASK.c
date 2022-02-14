
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {size_t flags; } ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_8__ {TYPE_2__* setting; } ;
typedef TYPE_3__ menu_file_list_cbs_t ;
struct TYPE_9__ {TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
struct TYPE_6__ {scalar_t__ actiondata; } ;


 size_t VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;

uint32_t FUNC_1(uint32_t VAR_1)
{
   file_list_t *VAR_2 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_3 = VAR_2 ?
      (menu_file_list_cbs_t*)VAR_2->list[VAR_1].actiondata : ((void*)0);
   rarch_setting_t *VAR_4 = VAR_3 ? VAR_3->setting : ((void*)0);
   uint64_t VAR_5 = VAR_4->flags;

   return (VAR_5 & VAR_0);
}
