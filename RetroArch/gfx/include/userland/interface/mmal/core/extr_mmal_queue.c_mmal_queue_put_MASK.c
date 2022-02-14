
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {int lock; int semaphore; TYPE_2__** last; int length; } ;
typedef TYPE_1__ MMAL_QUEUE_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(MMAL_QUEUE_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   FUNC_1(VAR_0 && VAR_1);
   if(!VAR_0 || !VAR_1) return;

   FUNC_2(&VAR_0->lock);
   FUNC_0(VAR_0, VAR_1);
   VAR_0->length++;
   *VAR_0->last = VAR_1;
   VAR_1->next = 0;
   VAR_0->last = &VAR_1->next;
   FUNC_4(&VAR_0->semaphore);
   FUNC_3(&VAR_0->lock);
}
