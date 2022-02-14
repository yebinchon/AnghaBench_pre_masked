
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
struct TYPE_3__ {unsigned int nlimbs; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;



void
FUNC_0( MPI VAR_0, unsigned int VAR_1 )
{
    mpi_ptr_t VAR_2 = VAR_0->d;
    mpi_size_t VAR_3 = VAR_0->nlimbs;
    unsigned int VAR_4;

    if( VAR_1 >= VAR_3 ) {
 VAR_0->nlimbs = 0;
 return;
    }

    for( VAR_4 = 0; VAR_4 < VAR_3 - VAR_1; VAR_4++ )
 VAR_2[VAR_4] = VAR_2[VAR_4+VAR_1];
    VAR_2[VAR_4] = 0;
    VAR_0->nlimbs -= VAR_1;
}
