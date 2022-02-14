
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* avoidgoals; scalar_t__* avoidgoaltimes; } ;
typedef TYPE_1__ bot_goalstate_t ;


 float FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_0 ;

float FUNC_2(int VAR_1, int VAR_2)
{
 int VAR_3;
 bot_goalstate_t *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4) return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_4->avoidgoals[VAR_3] == VAR_2 && VAR_4->avoidgoaltimes[VAR_3] >= FUNC_0())
  {
   return VAR_4->avoidgoaltimes[VAR_3] - FUNC_0();
  }
 }
 return 0;
}
