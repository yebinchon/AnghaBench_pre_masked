
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {char* values; } ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_8__ {TYPE_2__* setting; } ;
typedef TYPE_3__ menu_file_list_cbs_t ;
struct TYPE_9__ {TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
struct TYPE_6__ {scalar_t__ actiondata; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,size_t) ;

void FUNC_2(uint32_t VAR_0, char *VAR_1, size_t VAR_2)
{
   file_list_t *VAR_3 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_4 = VAR_3 ?
      (menu_file_list_cbs_t*)VAR_3->list[VAR_0].actiondata : ((void*)0);
   rarch_setting_t *VAR_5 = VAR_4 ? VAR_4->setting : ((void*)0);
   const char *VAR_6 = VAR_5->values;

   if (!VAR_6)
      return;

   FUNC_1(VAR_1, VAR_6, VAR_2);
}
