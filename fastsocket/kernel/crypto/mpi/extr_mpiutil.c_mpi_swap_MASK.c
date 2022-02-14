
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcry_mpi {int dummy; } ;
typedef struct gcry_mpi* MPI ;



void FUNC_0(MPI VAR_0, MPI VAR_1)
{
 struct gcry_mpi VAR_2;

 VAR_2 = *VAR_0; *VAR_0 = *VAR_1; *VAR_1 = VAR_2;
}
