
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* inventory; } ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

int FUNC_0(bot_state_t *VAR_27) {

 if (VAR_27->inventory[VAR_8] > 0 && VAR_27->inventory[VAR_3] > 0)
  return VAR_21;
 else if (VAR_27->inventory[VAR_16] > 0 && VAR_27->inventory[VAR_15] > 0)
  return VAR_26;
 else if (VAR_27->inventory[VAR_11] > 0 && VAR_27->inventory[VAR_4] > 0)
  return VAR_23;
 else if (VAR_27->inventory[VAR_6] > 0 && VAR_27->inventory[VAR_7] > 0)
  return VAR_20;






 else if (VAR_27->inventory[VAR_12] > 0 && VAR_27->inventory[VAR_17] > 0)
  return VAR_24;
 else if (VAR_27->inventory[VAR_13] > 0 && VAR_27->inventory[VAR_14] > 0)
  return VAR_25;
 else if (VAR_27->inventory[VAR_1] > 0 && VAR_27->inventory[VAR_2] > 0)
  return VAR_18;
 else {
  return -1;
 }
}
