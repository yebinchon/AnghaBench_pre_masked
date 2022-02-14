
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptw32_srwl_rwlock_t ;
struct TYPE_6__ {TYPE_4__* departFromPtr; int ticket; } ;
typedef TYPE_2__ ptw32_srwl_local_t ;
struct TYPE_7__ {TYPE_1__* qNextPtr; int csnzi; } ;
struct TYPE_5__ {int spin; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;

void
FUNC_2(ptw32_srwl_rwlock_t* VAR_1, ptw32_srwl_local_t* VAR_2)
{
  if (FUNC_0(VAR_2->departFromPtr->csnzi, VAR_2->ticket))
  {
    return;
  }

  VAR_2->departFromPtr->qNextPtr->spin = VAR_0;
  VAR_2->departFromPtr->qNextPtr = ((void*)0);
  FUNC_1(VAR_2->departFromPtr);
}
