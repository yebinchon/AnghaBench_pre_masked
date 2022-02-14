
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
typedef int mpi_ptr_t ;
struct TYPE_5__ {int sign; int flags; int nbits; scalar_t__ nlimbs; int d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2(MPI VAR_1, const MPI VAR_2)
{
 mpi_ptr_t VAR_3, VAR_4;
 mpi_size_t VAR_5 = VAR_2->nlimbs;
 int VAR_6 = VAR_2->sign;

 if (FUNC_1(VAR_1, (size_t) VAR_5) < 0)
  return -VAR_0;

 VAR_3 = VAR_1->d;
 VAR_4 = VAR_2->d;
 FUNC_0(VAR_3, VAR_4, VAR_5);
 VAR_1->nlimbs = VAR_5;
 VAR_1->nbits = VAR_2->nbits;
 VAR_1->flags = VAR_2->flags;
 VAR_1->sign = VAR_6;
 return 0;
}
