
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {double min; } ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_8__ {TYPE_2__* setting; } ;
typedef TYPE_3__ menu_file_list_cbs_t ;
struct TYPE_9__ {TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
struct TYPE_6__ {scalar_t__ actiondata; } ;


 TYPE_4__* FUNC_0 (int ) ;

float FUNC_1(uint32_t VAR_0)
{
   file_list_t *VAR_1 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_2 = VAR_1 ?
      (menu_file_list_cbs_t*)VAR_1->list[VAR_0].actiondata : ((void*)0);
   rarch_setting_t *VAR_3 = VAR_2 ? VAR_2->setting : ((void*)0);
   double VAR_4 = VAR_3->min;
   return (float)VAR_4;
}
