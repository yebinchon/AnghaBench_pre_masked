
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptw32_mcs_lock_t ;
struct TYPE_3__ {scalar_t__ readyFlag; scalar_t__ nextFlag; struct TYPE_3__* next; int * lock; } ;
typedef TYPE_1__ ptw32_mcs_local_node_t ;
typedef int PTW32_INTERLOCKED_PVOID_PTR ;
typedef int PTW32_INTERLOCKED_PVOID ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3 (ptw32_mcs_lock_t * VAR_0, ptw32_mcs_local_node_t * VAR_1)
{
  ptw32_mcs_local_node_t *VAR_2;

  VAR_1->lock = VAR_0;
  VAR_1->nextFlag = 0;
  VAR_1->readyFlag = 0;
  VAR_1->next = 0;


  VAR_2 = (ptw32_mcs_local_node_t *)FUNC_0((PTW32_INTERLOCKED_PVOID_PTR)VAR_0,
          (PTW32_INTERLOCKED_PVOID)VAR_1);

  if (0 != VAR_2)
    {

      VAR_2->next = VAR_1;
      FUNC_1(&VAR_2->nextFlag);
      FUNC_2(&VAR_1->readyFlag);
    }
}
