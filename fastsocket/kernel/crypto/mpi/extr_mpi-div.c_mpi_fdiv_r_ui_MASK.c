
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ mpi_limb_t ;
struct TYPE_4__ {int nlimbs; scalar_t__* d; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__) ;

ulong
FUNC_1( MPI VAR_0, MPI VAR_1, ulong VAR_2 )
{
    mpi_limb_t VAR_3;

    VAR_3 = FUNC_0( VAR_1->d, VAR_1->nlimbs, VAR_2 );
    if( VAR_3 && VAR_1->sign )
 VAR_3 = VAR_2 - VAR_3;

    if( VAR_0 ) {
 VAR_0->d[0] = VAR_3;
 VAR_0->nlimbs = VAR_3? 1:0;
    }
    return VAR_3;
}
