
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* inventory; int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_5 (int ) ;

void FUNC_6(bot_state_t *VAR_3) {
 if (VAR_3->inventory[VAR_0] < 40) {
  if (VAR_3->inventory[VAR_2] > 0) {
   if (!FUNC_1(VAR_3)




    ) {
    FUNC_5(VAR_3->client);
   }
  }
 }
 if (VAR_3->inventory[VAR_0] < 60) {
  if (VAR_3->inventory[VAR_1] > 0) {
   FUNC_5(VAR_3->client);
  }
 }




}
