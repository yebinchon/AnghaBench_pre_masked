
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {int* inventory; int origin; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_6__ {int origin; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

void FUNC_3(bot_state_t *VAR_2, int VAR_3) {
 vec3_t VAR_4;
 aas_entityinfo_t VAR_5;

 FUNC_0(VAR_3, &VAR_5);
 FUNC_2(VAR_5.origin, VAR_2->origin, VAR_4);
 VAR_2->inventory[VAR_0] = (int) VAR_4[2];
 VAR_4[2] = 0;
 VAR_2->inventory[VAR_1] = (int) FUNC_1(VAR_4);

}
