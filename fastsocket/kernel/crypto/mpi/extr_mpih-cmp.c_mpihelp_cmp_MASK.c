
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;



int
FUNC_0( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1, mpi_size_t VAR_2 )
{
    mpi_size_t VAR_3;
    mpi_limb_t VAR_4, VAR_5;

    for( VAR_3 = VAR_2 - 1; VAR_3 >= 0 ; VAR_3--) {
 VAR_4 = VAR_0[VAR_3];
 VAR_5 = VAR_1[VAR_3];
 if( VAR_4 != VAR_5 )
     goto diff;
    }
    return 0;

  diff:



    return (VAR_4 > VAR_5) ? 1 : -1;
}
