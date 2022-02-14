
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {struct cpumask mask; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(unsigned int VAR_3, const struct cpumask *VAR_4)
{
 unsigned long VAR_5;
 FUNC_0(&VAR_2, VAR_5);
 VAR_1[VAR_3 - VAR_0].mask = *VAR_4;
 FUNC_1(&VAR_2, VAR_5);

 return 0;
}
