
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* tailPtr; } ;
typedef TYPE_1__ ptw32_srwl_rwlock_t ;
struct TYPE_10__ {scalar_t__ kind; scalar_t__ spin; int csnzi; struct TYPE_10__* qNextPtr; } ;
typedef TYPE_2__ ptw32_srwl_node_t ;
struct TYPE_11__ {TYPE_2__* departFromPtr; void* ticket; } ;
typedef TYPE_3__ ptw32_srwl_local_t ;
typedef int PTW32_INTERLOCKED_PVOIDPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_PVOID ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;

void
FUNC_6(ptw32_srwl_rwlock_t* VAR_3, ptw32_srwl_local_t* VAR_4)
{
  ptw32_srwl_node_t* VAR_5 = ((void*)0);
  for (;;)
  {
    ptw32_srwl_node_t* VAR_6 = VAR_3->tailPtr;

    if (VAR_6 == ((void*)0))
    {
      if (VAR_5 == ((void*)0))
      {
        VAR_5 = FUNC_4(VAR_4);
      }
      VAR_5->spin = VAR_0;
      if (FUNC_0(
                (PTW32_INTERLOCKED_PVOIDPTR)&VAR_3->tailPtr,
                (PTW32_INTERLOCKED_PVOID)VAR_5,
                (PTW32_INTERLOCKED_PVOID)((void*)0))
          == (PTW32_INTERLOCKED_PVOID)VAR_5)
      {
        FUNC_3(VAR_5->csnzi);
        VAR_4->ticket = FUNC_1(VAR_5->csnzi);
        if (FUNC_2(VAR_4->ticket))
        {
          VAR_4->departFromPtr = VAR_5;
          return;
        }

        VAR_5 = ((void*)0);
      }
    }

    else
    {

      if (VAR_6->kind == VAR_2)
      {
        if (VAR_5 == ((void*)0))
        {
          VAR_5 = FUNC_4(VAR_4);
        }
        VAR_5->spin = VAR_1;
        if (FUNC_0(
                  (PTW32_INTERLOCKED_PVOIDPTR)&VAR_3->tailPtr,
                  (PTW32_INTERLOCKED_PVOID)VAR_5,
                  (PTW32_INTERLOCKED_PVOID)VAR_6)
            == (PTW32_INTERLOCKED_PVOID)VAR_5)
        {
          VAR_6->qNextPtr = VAR_5;
          VAR_4->ticket = FUNC_1(VAR_5->csnzi);
          if (FUNC_2(VAR_4->ticket))
          {
            VAR_4->departFromPtr = VAR_5;
            while (VAR_5->spin);
            return;
          }

          VAR_5 = ((void*)0);
        }
      }




      else
      {
        VAR_4->ticket = FUNC_1(VAR_6->csnzi);
        if (FUNC_2(VAR_4->ticket))
        {
          if (VAR_5 != ((void*)0))
          {
            FUNC_5(VAR_5);
          }
          VAR_4->departFromPtr = VAR_6;
          while (VAR_6->spin);
          return;
        }
      }
    }
  }
}
