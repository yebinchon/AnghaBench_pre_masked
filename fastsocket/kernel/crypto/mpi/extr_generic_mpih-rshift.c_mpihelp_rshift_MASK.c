
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mpi_size_t ;
typedef unsigned int* mpi_ptr_t ;
typedef unsigned int mpi_limb_t ;


 unsigned int VAR_0 ;

mpi_limb_t
FUNC_0( mpi_ptr_t VAR_1, mpi_ptr_t VAR_2, mpi_size_t VAR_3, unsigned VAR_4)
{
    mpi_limb_t VAR_5, VAR_6;
    unsigned VAR_7, VAR_8;
    mpi_size_t VAR_9;
    mpi_limb_t VAR_10;

    VAR_7 = VAR_4;
    VAR_1 -= 1;
    VAR_8 = VAR_0 - VAR_7;
    VAR_5 = VAR_2[0];
    VAR_10 = VAR_5 << VAR_8;
    VAR_6 = VAR_5;
    for( VAR_9=1; VAR_9 < VAR_3; VAR_9++) {
 VAR_5 = VAR_2[VAR_9];
 VAR_1[VAR_9] = (VAR_6 >> VAR_7) | (VAR_5 << VAR_8);
 VAR_6 = VAR_5;
    }
    VAR_1[VAR_9] = VAR_6 >> VAR_7;

    return VAR_10;
}
