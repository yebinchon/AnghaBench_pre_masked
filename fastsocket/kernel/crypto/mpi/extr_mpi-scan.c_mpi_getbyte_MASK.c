
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;
struct TYPE_3__ {int* d; int nlimbs; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;

int
FUNC_0( const MPI VAR_1, unsigned VAR_2 )
{
    int VAR_3, VAR_4;
    unsigned VAR_5;
    mpi_ptr_t VAR_6;
    mpi_limb_t VAR_7;

    VAR_6 = VAR_1->d;
    for(VAR_5=0,VAR_3=0; VAR_3 < VAR_1->nlimbs; VAR_3++ ) {
 VAR_7 = VAR_6[VAR_3];
 for( VAR_4=0; VAR_4 < VAR_0; VAR_4++, VAR_5++ )
     if( VAR_5 == VAR_2 )
  return (VAR_7 >> VAR_4*8) & 0xff;
    }
    return -1;
}
