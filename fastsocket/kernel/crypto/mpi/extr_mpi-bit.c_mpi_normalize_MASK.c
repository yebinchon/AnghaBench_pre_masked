
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlimbs; int * d; } ;
typedef TYPE_1__* MPI ;



void
FUNC_0( MPI VAR_0 )
{
    for( ; VAR_0->nlimbs && !VAR_0->d[VAR_0->nlimbs-1]; VAR_0->nlimbs-- )
 ;
}
