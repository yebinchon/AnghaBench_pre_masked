
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mpi_size_t ;
typedef scalar_t__ mpi_ptr_t ;
typedef int mpi_limb_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

mpi_limb_t
FUNC_2( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1, mpi_size_t VAR_2,
    mpi_ptr_t VAR_3, mpi_size_t VAR_4)
{
    mpi_limb_t VAR_5 = 0;

    if( VAR_4 )
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);

    if( VAR_2 - VAR_4 )
 VAR_5 = FUNC_0(VAR_0 + VAR_4, VAR_1 + VAR_4,
          VAR_2 - VAR_4, VAR_5);
    return VAR_5;
}
