
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
typedef int mpi_ptr_t ;
struct TYPE_5__ {scalar_t__ nlimbs; int d; int sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ,int ,scalar_t__,unsigned int) ;

int
FUNC_3( MPI VAR_1, MPI VAR_2, unsigned VAR_3 )
{
    mpi_ptr_t VAR_4;
    mpi_size_t VAR_5;

    VAR_5 = VAR_2->nlimbs;
    VAR_1->sign = VAR_2->sign;
    if (FUNC_1(VAR_1, (size_t)VAR_5) < 0) return -VAR_0;
    VAR_4 = VAR_1->d;

    if( VAR_5 ) {
 FUNC_2( VAR_4, VAR_2->d, VAR_5, VAR_3);
 FUNC_0( VAR_4, VAR_5);
    }
    VAR_1->nlimbs = VAR_5;
    return 0;
}
