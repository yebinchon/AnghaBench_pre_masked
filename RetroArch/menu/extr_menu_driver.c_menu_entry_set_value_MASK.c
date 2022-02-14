
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int rarch_setting_t ;
struct TYPE_6__ {int * setting; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_5__ {scalar_t__ actiondata; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;

void FUNC_2(uint32_t VAR_0, const char *VAR_1)
{
   file_list_t *VAR_2 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_3 = VAR_2 ?
      (menu_file_list_cbs_t*)VAR_2->list[VAR_0].actiondata : ((void*)0);
   rarch_setting_t *VAR_4 = VAR_3 ? VAR_3->setting : ((void*)0);
   FUNC_1(VAR_4, VAR_1);
}
