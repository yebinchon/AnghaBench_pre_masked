
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpi_limb_t ;
struct TYPE_3__ {unsigned int alloced; void* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned int,int ) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void*,void*,int) ;

int FUNC_4(MPI VAR_2, unsigned VAR_3)
{
 void *VAR_4;

 if (VAR_3 <= VAR_2->alloced)
  return 0;

 if (VAR_2->d) {
  VAR_4 = FUNC_1(VAR_3 * sizeof(mpi_limb_t), VAR_1);
  if (!VAR_4)
   return -VAR_0;
  FUNC_3(VAR_4, VAR_2->d, VAR_2->alloced * sizeof(mpi_limb_t));
  FUNC_0(VAR_2->d);
  VAR_2->d = VAR_4;
 } else {
  VAR_2->d = FUNC_2( VAR_3 * sizeof(mpi_limb_t), VAR_1);
  if (!VAR_2->d)
   return -VAR_0;
 }
 VAR_2->alloced = VAR_3;
 return 0;
}
