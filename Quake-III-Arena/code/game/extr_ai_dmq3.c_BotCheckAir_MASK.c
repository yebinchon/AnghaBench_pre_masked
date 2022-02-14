
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* inventory; int lastair_time; int eye; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;

void FUNC_2(bot_state_t *VAR_4) {
 if (VAR_4->inventory[VAR_3] <= 0) {
  if (FUNC_1(VAR_4->eye) & (VAR_2|VAR_1|VAR_0)) {
   return;
  }
 }
 VAR_4->lastair_time = FUNC_0();
}
