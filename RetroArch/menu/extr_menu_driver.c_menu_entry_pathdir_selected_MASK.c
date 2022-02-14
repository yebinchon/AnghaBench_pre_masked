
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef void rarch_setting_t ;
struct TYPE_6__ {int * setting; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_5__ {scalar_t__ actiondata; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;

void FUNC_2(uint32_t VAR_2)
{
   file_list_t *VAR_3 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_4 = VAR_3 ?
      (menu_file_list_cbs_t*)VAR_3->list[VAR_2].actiondata : ((void*)0);
   rarch_setting_t *VAR_5 = VAR_4 ? VAR_4->setting : ((void*)0);

   if (FUNC_1(VAR_1, (void*)VAR_5))
      FUNC_1(VAR_0, VAR_5);
}
