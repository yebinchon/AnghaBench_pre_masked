
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mpi_limb_t ;
struct TYPE_4__ {int nlimbs; scalar_t__* d; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1( MPI VAR_0, unsigned long VAR_1 )
{
    mpi_limb_t VAR_2 = VAR_1;

    FUNC_0( VAR_0 );
    if( !VAR_0->nlimbs && !VAR_2 )
 return 0;
    if( VAR_0->sign )
 return -1;
    if( VAR_0->nlimbs > 1 )
 return 1;

    if( VAR_0->d[0] == VAR_2 )
 return 0;
    else if( VAR_0->d[0] > VAR_2 )
 return 1;
    else
 return -1;
}
