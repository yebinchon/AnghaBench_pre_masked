
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;



mpi_limb_t
FUNC_0( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1,
        mpi_ptr_t VAR_2, mpi_size_t VAR_3)
{
    mpi_limb_t VAR_4, VAR_5, VAR_6;
    mpi_size_t VAR_7;



    VAR_7 = -VAR_3;


    VAR_1 -= VAR_7;
    VAR_2 -= VAR_7;
    VAR_0 -= VAR_7;

    VAR_6 = 0;
    do {
 VAR_5 = VAR_2[VAR_7];
 VAR_4 = VAR_1[VAR_7];
 VAR_5 += VAR_6;
 VAR_6 = VAR_5 < VAR_6;
 VAR_5 += VAR_4;
 VAR_6 += VAR_5 < VAR_4;
 VAR_0[VAR_7] = VAR_5;
    } while( ++VAR_7 );

    return VAR_6;
}
