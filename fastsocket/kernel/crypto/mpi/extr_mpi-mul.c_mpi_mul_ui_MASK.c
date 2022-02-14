
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;
struct TYPE_5__ {scalar_t__ nlimbs; int sign; scalar_t__ alloced; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;

int
FUNC_2( MPI VAR_1, MPI VAR_2, unsigned long VAR_3 )
{
    mpi_size_t VAR_4, VAR_5;
    mpi_ptr_t VAR_6;
    mpi_limb_t VAR_7;
    int VAR_8;

    VAR_4 = VAR_2->nlimbs;
    VAR_8 = VAR_2->sign;

    if( !VAR_4 || !VAR_3 ) {
 VAR_1->nlimbs = 0;
 VAR_1->sign = 0;
 return 0;
    }

    VAR_5 = VAR_4 + 1;
    if( VAR_1->alloced < VAR_5 )
     if (FUNC_0( VAR_1, VAR_5 ) < 0)
      return -VAR_0;
    VAR_6 = VAR_1->d;

    VAR_7 = FUNC_1( VAR_6, VAR_2->d, VAR_4, (mpi_limb_t)VAR_3 );
    if( VAR_7 )
 VAR_6[VAR_4++] = VAR_7;
    VAR_1->nlimbs = VAR_4;
    VAR_1->sign = VAR_8;
    return 0;
}
