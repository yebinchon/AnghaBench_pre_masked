
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct retro_keybind {int key; } ;
struct TYPE_9__ {scalar_t__ keybind; } ;
struct TYPE_10__ {TYPE_2__ target; } ;
struct TYPE_11__ {TYPE_3__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
struct TYPE_12__ {TYPE_4__* setting; } ;
typedef TYPE_5__ menu_file_list_cbs_t ;
typedef scalar_t__ int32_t ;
struct TYPE_13__ {TYPE_1__* list; } ;
typedef TYPE_6__ file_list_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_8__ {scalar_t__ actiondata; } ;


 TYPE_6__* FUNC_0 (int ) ;

void FUNC_1(uint32_t VAR_0, int32_t VAR_1)
{
   file_list_t *VAR_2 = FUNC_0(0);
   menu_file_list_cbs_t *VAR_3 = VAR_2 ?
      (menu_file_list_cbs_t*)VAR_2->list[VAR_0].actiondata : ((void*)0);
   rarch_setting_t *VAR_4 = VAR_3 ? VAR_3->setting : ((void*)0);
   struct retro_keybind *VAR_5 = VAR_4 ? (struct retro_keybind*)VAR_4->value.target.keybind : ((void*)0);
   if (VAR_5)
      VAR_5->key = (enum retro_key)VAR_1;
}
