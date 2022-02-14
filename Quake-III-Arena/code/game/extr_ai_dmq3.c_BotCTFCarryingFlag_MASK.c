
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* inventory; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_0(bot_state_t *VAR_7) {
 if (VAR_6 != VAR_3) return VAR_1;

 if (VAR_7->inventory[VAR_5] > 0) return VAR_2;
 else if (VAR_7->inventory[VAR_4] > 0) return VAR_0;
 return VAR_1;
}
