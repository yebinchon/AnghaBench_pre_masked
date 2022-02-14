
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * nodePtr; TYPE_5__* rootPtr; } ;
struct TYPE_12__ {TYPE_3__ snziNodeOrRoot; } ;
typedef TYPE_4__ ptw32_oll_ticket_t ;
struct TYPE_9__ {scalar_t__ state; int count; } ;
struct TYPE_10__ {scalar_t__ word; TYPE_1__ internal; } ;
struct TYPE_13__ {TYPE_2__ counter; } ;
typedef TYPE_5__ ptw32_oll_snziRoot_t ;
typedef int ptw32_oll_snziNode_t ;
struct TYPE_14__ {int * leafs; TYPE_5__ proxyRoot; } ;
typedef TYPE_6__ ptw32_oll_csnzi_t ;
typedef int PTW32_INTERLOCKED_SIZEPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_SIZE ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;

ptw32_oll_ticket_t
FUNC_4(ptw32_oll_csnzi_t* VAR_1)
{
  for (;;)
  {
    ptw32_oll_ticket_t VAR_2;
    ptw32_oll_snziRoot_t VAR_3 = VAR_1->proxyRoot;
    if (VAR_3.counter.internal.state != VAR_0)
    {
      VAR_2.snziNodeOrRoot.rootPtr = (ptw32_oll_snziRoot_t*)((void*)0);
      return VAR_2;
    }
    if (!FUNC_2())
    {
      ptw32_oll_snziRoot_t VAR_4 = VAR_3;
      VAR_4.counter.internal.count++;
      if (FUNC_0(
                (PTW32_INTERLOCKED_SIZEPTR)&VAR_1->proxyRoot.counter,
                (PTW32_INTERLOCKED_SIZE)VAR_4.counter.word,
                (PTW32_INTERLOCKED_SIZE)VAR_3.counter.word)
          == (PTW32_INTERLOCKED_SIZE)VAR_3.counter.word)
      {

        VAR_2.snziNodeOrRoot.rootPtr = &VAR_1->proxyRoot;
        return VAR_2;
      }
    }
    else
    {
      ptw32_oll_snziNode_t* VAR_5 = &VAR_1->leafs[FUNC_1()];
      VAR_2.snziNodeOrRoot.nodePtr = (FUNC_3(VAR_5) ? VAR_5 : (ptw32_oll_snziNode_t*)((void*)0));
      return VAR_2;
    }
  }
}
