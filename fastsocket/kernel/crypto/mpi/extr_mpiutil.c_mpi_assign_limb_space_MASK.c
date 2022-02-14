
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpi_ptr_t ;
struct TYPE_3__ {unsigned int alloced; int d; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (int ) ;

void FUNC_1(MPI VAR_0, mpi_ptr_t VAR_1, unsigned VAR_2)
{
    FUNC_0(VAR_0->d);
    VAR_0->d = VAR_1;
    VAR_0->alloced = VAR_2;
}
