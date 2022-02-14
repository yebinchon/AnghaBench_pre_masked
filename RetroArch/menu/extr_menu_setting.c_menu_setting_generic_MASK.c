
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int triggered; } ;
struct TYPE_7__ {int flags; TYPE_1__ cmd_trigger; int (* change_handler ) (TYPE_2__*) ;} ;
typedef TYPE_2__ rarch_setting_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(rarch_setting_t *VAR_1, bool VAR_2)
{
   uint64_t VAR_3 = VAR_1->flags;
   if (FUNC_0(VAR_1, VAR_2) != 0)
      return -1;

   if (VAR_1->change_handler)
      VAR_1->change_handler(VAR_1);

   if ((VAR_3 & VAR_0) && VAR_1->cmd_trigger.triggered)
   {
      VAR_1->cmd_trigger.triggered = 0;
      return -1;
   }

   return 0;
}
