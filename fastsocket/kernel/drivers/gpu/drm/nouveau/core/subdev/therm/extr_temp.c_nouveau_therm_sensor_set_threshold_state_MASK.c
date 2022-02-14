
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* alarm_state; } ;
struct nouveau_therm_priv {TYPE_1__ sensor; } ;
struct nouveau_therm {int dummy; } ;
typedef enum nouveau_therm_thrs_state { ____Placeholder_nouveau_therm_thrs_state } nouveau_therm_thrs_state ;
typedef enum nouveau_therm_thrs { ____Placeholder_nouveau_therm_thrs } nouveau_therm_thrs ;



void FUNC_0(struct nouveau_therm *VAR_0,
          enum nouveau_therm_thrs VAR_1,
          enum nouveau_therm_thrs_state VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_0;
 VAR_3->sensor.alarm_state[VAR_1] = VAR_2;
}
