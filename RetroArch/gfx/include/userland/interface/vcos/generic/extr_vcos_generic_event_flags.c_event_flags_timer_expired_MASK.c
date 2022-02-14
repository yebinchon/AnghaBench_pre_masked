
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VCOS_THREAD_T ;
struct TYPE_8__ {struct TYPE_8__* next; int * thread; TYPE_3__* flags; } ;
typedef TYPE_2__ VCOS_EVENT_WAITER_T ;
struct TYPE_7__ {TYPE_2__* tail; TYPE_2__* head; } ;
struct TYPE_9__ {int lock; TYPE_1__ waiters; } ;
typedef TYPE_3__ VCOS_EVENT_FLAGS_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
   VCOS_EVENT_WAITER_T *VAR_1 = (VCOS_EVENT_WAITER_T *)VAR_0;
   VCOS_EVENT_FLAGS_T *VAR_2 = VAR_1->flags;
   VCOS_EVENT_WAITER_T **VAR_3;
   VCOS_EVENT_WAITER_T *VAR_4 = ((void*)0);
   VCOS_THREAD_T *VAR_5 = 0;

   FUNC_1(VAR_2);

   FUNC_2(&VAR_2->lock);







   VAR_3 = &VAR_2->waiters.head;
   while (*VAR_3 != ((void*)0))
   {
      if (*VAR_3 == VAR_1)
      {
         int VAR_6;

         VAR_5 = (*VAR_3)->thread;
         VAR_6 = ((*VAR_3)->next == ((void*)0));


         *VAR_3 = (*VAR_3)->next;
         if (VAR_6)
            VAR_2->waiters.tail = VAR_4;

         break;
      }
      VAR_4 = *VAR_3;
      VAR_3 = &(*VAR_3)->next;
   }
   FUNC_1(FUNC_4(VAR_2));

   FUNC_3(&VAR_2->lock);

   if (VAR_5)
   {
      FUNC_0(VAR_5);
   }
}
