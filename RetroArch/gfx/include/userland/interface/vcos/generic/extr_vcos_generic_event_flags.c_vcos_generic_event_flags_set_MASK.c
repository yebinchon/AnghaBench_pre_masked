
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
typedef scalar_t__ VCOS_OPTION ;
struct TYPE_9__ {int requested_events; scalar_t__ op; int actual_events; struct TYPE_9__* next; int thread; int return_status; } ;
typedef TYPE_2__ VCOS_EVENT_WAITER_T ;
struct TYPE_8__ {TYPE_2__* tail; TYPE_2__* head; } ;
struct TYPE_10__ {int events; int lock; TYPE_1__ waiters; } ;
typedef TYPE_3__ VCOS_EVENT_FLAGS_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

void FUNC_5(VCOS_EVENT_FLAGS_T *VAR_4,
                                  VCOS_UNSIGNED VAR_5,
                                  VCOS_OPTION VAR_6)
{
   FUNC_1(VAR_4);
   FUNC_2(&VAR_4->lock);
   if (VAR_6 == VAR_2)
   {
      VAR_4->events |= VAR_5;
   }
   else if (VAR_6 == VAR_0)
   {
      VAR_4->events &= VAR_5;
   }
   else
   {
      FUNC_1(0);
   }


   if (VAR_4->waiters.head != ((void*)0))
   {
      VCOS_UNSIGNED VAR_7 = 0;
      VCOS_EVENT_WAITER_T **VAR_8 = &VAR_4->waiters.head;
      VCOS_EVENT_WAITER_T *VAR_9 = ((void*)0);




      while ((*VAR_8) != ((void*)0))
      {
         VCOS_EVENT_WAITER_T *VAR_10 = *VAR_8;




         VCOS_UNSIGNED VAR_11 = VAR_4->events & VAR_10->requested_events;


         if (VAR_10->op & VAR_0)
         {

            VAR_11 = (VAR_11 == VAR_10->requested_events);
         }


         if (VAR_11)
         {

            if (VAR_10->op & VAR_1)
            {
               VAR_7 |= VAR_10->requested_events;
            }


            *VAR_8 = VAR_10->next;
            if (VAR_10->next == ((void*)0))
               VAR_4->waiters.tail = VAR_9;

            FUNC_1(FUNC_4(VAR_4));

            VAR_10->return_status = VAR_3;
            VAR_10->actual_events = VAR_4->events;

            FUNC_0(VAR_10->thread);
         }
         else
         {

            VAR_9 = *VAR_8;
            VAR_8 = &(VAR_10->next);
         }
      }

      VAR_4->events &= ~VAR_7;

   }

   FUNC_3(&VAR_4->lock);
}
