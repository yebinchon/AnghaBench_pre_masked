
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* avoidgoals; scalar_t__* avoidgoaltimes; } ;
typedef TYPE_1__ bot_goalstate_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;

void FUNC_1(bot_goalstate_t *VAR_1, int VAR_2, float VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {

  if (VAR_1->avoidgoals[VAR_4] == VAR_2)
  {
   VAR_1->avoidgoals[VAR_4] = VAR_2;
   VAR_1->avoidgoaltimes[VAR_4] = FUNC_0() + VAR_3;
   return;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {

  if (VAR_1->avoidgoaltimes[VAR_4] < FUNC_0())
  {
   VAR_1->avoidgoals[VAR_4] = VAR_2;
   VAR_1->avoidgoaltimes[VAR_4] = FUNC_0() + VAR_3;
   return;
  }
 }
}
