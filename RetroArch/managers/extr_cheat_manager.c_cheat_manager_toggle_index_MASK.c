
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ apply_cheats_after_toggle; } ;
struct TYPE_9__ {TYPE_2__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {scalar_t__ size; TYPE_1__* cheats; } ;
struct TYPE_7__ {int state; } ;


 int FUNC_0 () ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (TYPE_5__*,unsigned int) ;
 TYPE_3__* FUNC_2 () ;

void FUNC_3(unsigned VAR_1)
{
   settings_t *VAR_2 = FUNC_2();
   if (!VAR_0.cheats || VAR_0.size == 0)
      return;

   VAR_0.cheats[VAR_1].state = !VAR_0.cheats[VAR_1].state;
   FUNC_1(&VAR_0, VAR_1);

   if (!VAR_2)
      return;

   if (VAR_2->bools.apply_cheats_after_toggle)
      FUNC_0();
}
