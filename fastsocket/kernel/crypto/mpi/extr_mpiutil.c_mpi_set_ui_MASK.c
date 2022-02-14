
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* d; int nlimbs; scalar_t__ flags; scalar_t__ nbits; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(MPI VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_1, 1) < 0)
  return -VAR_0;
 VAR_1->d[0] = VAR_2;
 VAR_1->nlimbs = VAR_2? 1:0;
 VAR_1->sign = 0;
 VAR_1->nbits = 0;
 VAR_1->flags = 0;
 return 0;
}
