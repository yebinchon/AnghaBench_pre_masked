
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_size_t ;
typedef int * mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;



mpi_limb_t
FUNC_0( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1,
        mpi_size_t VAR_2, mpi_limb_t VAR_3)
{
    mpi_limb_t VAR_4;

    VAR_4 = *VAR_1++;
    VAR_3 += VAR_4;
    *VAR_0++ = VAR_3;
    if( VAR_3 < VAR_4 ) {
 while( --VAR_2 ) {
     VAR_4 = *VAR_1++ + 1;
     *VAR_0++ = VAR_4;
     if( VAR_4 )
  goto leave;
 }
 return 1;
    }

  leave:
    if( VAR_0 != VAR_1 ) {
 mpi_size_t VAR_5;
 for( VAR_5=0; VAR_5 < VAR_2-1; VAR_5++ )
     VAR_0[VAR_5] = VAR_1[VAR_5];
    }
    return 0;
}
