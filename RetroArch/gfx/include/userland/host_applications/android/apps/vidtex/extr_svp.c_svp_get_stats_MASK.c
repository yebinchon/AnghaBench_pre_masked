
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int stats; } ;
typedef TYPE_1__ SVP_T ;
typedef int SVP_STATS_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SVP_T *VAR_0, SVP_STATS_T *VAR_1)
{
   FUNC_0(&VAR_0->mutex);
   *VAR_1 = VAR_0->stats;
   FUNC_1(&VAR_0->mutex);
}
