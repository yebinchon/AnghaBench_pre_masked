
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* inventory; scalar_t__ weaponnum; } ;
typedef TYPE_1__ bot_state_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;

float FUNC_0(bot_state_t *VAR_20) {

 if (VAR_20->inventory[VAR_12]) {

  if (VAR_20->weaponnum != VAR_19 ||
   VAR_20->inventory[VAR_1] < 80) {
   return 70;
  }
 }

 if (VAR_20->inventory[VAR_0] > 200) return 0;

 if (VAR_20->inventory[VAR_8] < 60) return 0;

 if (VAR_20->inventory[VAR_8] < 80) {

  if (VAR_20->inventory[VAR_2] < 40) return 0;
 }

 if (VAR_20->inventory[VAR_3] > 0 &&
   VAR_20->inventory[VAR_4] > 7) return 100;

 if (VAR_20->inventory[VAR_13] > 0 &&
   VAR_20->inventory[VAR_18] > 5) return 95;

 if (VAR_20->inventory[VAR_9] > 0 &&
   VAR_20->inventory[VAR_10] > 50) return 90;

 if (VAR_20->inventory[VAR_14] > 0 &&
   VAR_20->inventory[VAR_15] > 5) return 90;

 if (VAR_20->inventory[VAR_11] > 0 &&
   VAR_20->inventory[VAR_5] > 40) return 85;

 if (VAR_20->inventory[VAR_6] > 0 &&
   VAR_20->inventory[VAR_7] > 10) return 80;

 if (VAR_20->inventory[VAR_17] > 0 &&
   VAR_20->inventory[VAR_16] > 10) return 50;

 return 0;
}
