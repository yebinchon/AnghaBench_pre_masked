
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; struct TYPE_5__* d; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

void FUNC_3(MPI VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->flags & 4)
  FUNC_0(VAR_0->d);
 else {
  FUNC_1(VAR_0->d);
 }

 if (VAR_0->flags & ~7 )
  FUNC_2("invalid flag value in mpi\n");
 FUNC_0(VAR_0);
}
