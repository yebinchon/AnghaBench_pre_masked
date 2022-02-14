
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lastframe_health; scalar_t__* inventory; scalar_t__ standfindenemy_time; scalar_t__ stand_time; int chatto; int cs; int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(bot_state_t *VAR_3) {


 if (VAR_3->lastframe_health > VAR_3->inventory[VAR_0]) {
  if (FUNC_3(VAR_3)) {
   VAR_3->standfindenemy_time = FUNC_5() + FUNC_2(VAR_3) + 0.1;
   VAR_3->stand_time = FUNC_5() + FUNC_2(VAR_3) + 0.1;
  }
 }
 if (VAR_3->standfindenemy_time < FUNC_5()) {
  if (FUNC_4(VAR_3, -1)) {
   FUNC_0(VAR_3, "stand: found enemy");
   return VAR_1;
  }
  VAR_3->standfindenemy_time = FUNC_5() + 1;
 }

 FUNC_7(VAR_3->client);

 if (VAR_3->stand_time < FUNC_5()) {
  FUNC_6(VAR_3->cs, 0, VAR_3->chatto);
  FUNC_1(VAR_3, "stand: time out");
  return VAR_1;
 }

 return VAR_2;
}
