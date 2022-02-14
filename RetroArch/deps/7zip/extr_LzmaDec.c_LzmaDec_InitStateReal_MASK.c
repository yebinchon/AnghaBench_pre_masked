
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t lc; size_t lp; } ;
struct TYPE_5__ {int* probs; int* reps; scalar_t__ needInitState; scalar_t__ state; TYPE_1__ prop; } ;
typedef TYPE_2__ CLzmaDec ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(CLzmaDec *VAR_3)
{
   uint32_t VAR_4 = VAR_1 + ((uint32_t)VAR_0 << (VAR_3->prop.lc + VAR_3->prop.lp));
   uint32_t VAR_5;
   uint16_t *VAR_6 = VAR_3->probs;
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
      VAR_6[VAR_5] = VAR_2 >> 1;
   VAR_3->reps[0] = VAR_3->reps[1] = VAR_3->reps[2] = VAR_3->reps[3] = 1;
   VAR_3->state = 0;
   VAR_3->needInitState = 0;
}
