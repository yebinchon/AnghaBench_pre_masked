
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_ptr_t ;
typedef int mpi_limb_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;

mpi_ptr_t FUNC_1( unsigned VAR_1 )
{
    size_t VAR_2 = VAR_1 * sizeof(mpi_limb_t);

    return FUNC_0(VAR_2,VAR_0);
}
