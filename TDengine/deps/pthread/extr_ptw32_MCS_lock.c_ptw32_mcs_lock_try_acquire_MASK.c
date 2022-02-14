
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptw32_mcs_lock_t ;
struct TYPE_3__ {scalar_t__ next; scalar_t__ readyFlag; scalar_t__ nextFlag; int * lock; } ;
typedef TYPE_1__ ptw32_mcs_local_node_t ;
typedef int PTW32_INTERLOCKED_PVOID_PTR ;
typedef scalar_t__ PTW32_INTERLOCKED_PVOID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

int
FUNC_1 (ptw32_mcs_lock_t * VAR_1, ptw32_mcs_local_node_t * VAR_2)
{
  VAR_2->lock = VAR_1;
  VAR_2->nextFlag = 0;
  VAR_2->readyFlag = 0;
  VAR_2->next = 0;

  return ((PTW32_INTERLOCKED_PVOID)FUNC_0((PTW32_INTERLOCKED_PVOID_PTR)VAR_1,
                                                        (PTW32_INTERLOCKED_PVOID)VAR_2,
                                                        (PTW32_INTERLOCKED_PVOID)0)
                                 == (PTW32_INTERLOCKED_PVOID)0) ? 0 : VAR_0;
}
