
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ next; scalar_t__ lock; scalar_t__ readyFlag; scalar_t__ nextFlag; } ;
typedef TYPE_1__ ptw32_mcs_local_node_t ;
typedef int PTW32_INTERLOCKED_PVOID_PTR ;
typedef int PTW32_INTERLOCKED_PVOID ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;

void
FUNC_2 (ptw32_mcs_local_node_t * VAR_0, ptw32_mcs_local_node_t * VAR_1)
{
  VAR_0->lock = VAR_1->lock;
  VAR_0->nextFlag = 0;
  VAR_0->readyFlag = 0;
  VAR_0->next = 0;

  if ((ptw32_mcs_local_node_t *)FUNC_0((PTW32_INTERLOCKED_PVOID_PTR)VAR_0->lock,
                                                                       (PTW32_INTERLOCKED_PVOID)VAR_0,
                                                                       (PTW32_INTERLOCKED_PVOID)VAR_1)
       != VAR_1)
    {



      while (VAR_1->next == 0)
        {
          FUNC_1();
        }
      VAR_0->next = VAR_1->next;
    }
}
