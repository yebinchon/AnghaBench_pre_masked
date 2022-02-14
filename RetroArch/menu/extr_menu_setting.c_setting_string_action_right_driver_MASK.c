
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ menu_navigation_wraparound_enable; } ;
struct TYPE_14__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_12__ {int string; } ;
struct TYPE_13__ {TYPE_2__ target; } ;
struct TYPE_15__ {int (* change_handler ) (TYPE_5__*) ;int size; TYPE_3__ value; int name; } ;
typedef TYPE_5__ rarch_setting_t ;
struct TYPE_16__ {int len; int s; int label; } ;
typedef TYPE_6__ driver_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(rarch_setting_t *VAR_2,
      bool VAR_3)
{
   driver_ctx_info_t VAR_4;

   if (!VAR_2)
      return -1;

   VAR_4.label = VAR_2->name;
   VAR_4.s = VAR_2->value.target.string;
   VAR_4.len = VAR_2->size;

   if (!FUNC_1(VAR_1, &VAR_4))
   {
      settings_t *VAR_5 = FUNC_0();

      if (VAR_5 && VAR_5->bools.menu_navigation_wraparound_enable)
      {
         VAR_4.label = VAR_2->name;
         VAR_4.s = VAR_2->value.target.string;
         VAR_4.len = VAR_2->size;
         FUNC_1(VAR_0, &VAR_4);
      }
   }

   if (VAR_2->change_handler)
      VAR_2->change_handler(VAR_2);

   return 0;
}
