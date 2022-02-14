
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* d; int nlimbs; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 TYPE_1__* FUNC_0 (int) ;

MPI FUNC_1(unsigned long VAR_0)
{
 MPI VAR_1 = FUNC_0(1);
 if (!VAR_1)
  return VAR_1;
 VAR_1->d[0] = VAR_0;
 VAR_1->nlimbs = VAR_0? 1:0;
 VAR_1->sign = 0;
 return VAR_1;
}
