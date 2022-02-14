
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptw32_mcs_lock_t ;
struct TYPE_3__ {int readyFlag; int next; int nextFlag; int * lock; } ;
typedef TYPE_1__ ptw32_mcs_local_node_t ;
typedef int PTW32_INTERLOCKED_SIZEPTR ;
typedef int PTW32_INTERLOCKED_SIZE ;
typedef int PTW32_INTERLOCKED_PVOID_PTR ;
typedef int PTW32_INTERLOCKED_PVOID ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (ptw32_mcs_local_node_t * VAR_0)
{
  ptw32_mcs_lock_t *VAR_1 = VAR_0->lock;
  ptw32_mcs_local_node_t *VAR_2 =
    (ptw32_mcs_local_node_t *)
      FUNC_1((PTW32_INTERLOCKED_SIZEPTR)&VAR_0->next, (PTW32_INTERLOCKED_SIZE)0);

  if (0 == VAR_2)
    {


      if (VAR_0 == (ptw32_mcs_local_node_t *)
   FUNC_0((PTW32_INTERLOCKED_PVOID_PTR)VAR_1,
       (PTW32_INTERLOCKED_PVOID)0,
       (PTW32_INTERLOCKED_PVOID)VAR_0))
 {

   return;
 }


      FUNC_3(&VAR_0->nextFlag);
      VAR_2 = (ptw32_mcs_local_node_t *)
 FUNC_1((PTW32_INTERLOCKED_SIZEPTR)&VAR_0->next, (PTW32_INTERLOCKED_SIZE)0);
    }


  FUNC_2(&VAR_2->readyFlag);
}
