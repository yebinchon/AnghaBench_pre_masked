
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ainode; scalar_t__ standfindenemy_time; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(bot_state_t *VAR_1, char *VAR_2) {
 FUNC_0(VAR_1, "stand", "", VAR_2);
 VAR_1->standfindenemy_time = FUNC_1() + 1;
 VAR_1->ainode = VAR_0;
}
