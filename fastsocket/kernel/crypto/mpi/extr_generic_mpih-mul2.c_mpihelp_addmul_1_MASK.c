
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

mpi_limb_t
FUNC_1( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1,
    mpi_size_t VAR_2, mpi_limb_t VAR_3)
{
    mpi_limb_t VAR_4;
    mpi_size_t VAR_5;
    mpi_limb_t VAR_6, VAR_7;
    mpi_limb_t VAR_8;



    VAR_5 = -VAR_2;
    VAR_0 -= VAR_5;
    VAR_1 -= VAR_5;

    VAR_4 = 0;
    do {
 FUNC_0( VAR_6, VAR_7, VAR_1[VAR_5], VAR_3 );

 VAR_7 += VAR_4;
 VAR_4 = (VAR_7 < VAR_4?1:0) + VAR_6;

 VAR_8 = VAR_0[VAR_5];
 VAR_7 = VAR_8 + VAR_7;
 VAR_4 += VAR_7 < VAR_8?1:0;
 VAR_0[VAR_5] = VAR_7;
    } while ( ++VAR_5 );
    return VAR_4;
}
