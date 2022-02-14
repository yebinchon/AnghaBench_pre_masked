
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ VCOS_MSG_T ;
struct TYPE_6__ {int lock; int sem; int * tail; TYPE_1__* head; } ;
typedef TYPE_2__ VCOS_MSGQUEUE_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

VCOS_MSG_T *FUNC_3(VCOS_MSGQUEUE_T *VAR_0)
{
   VCOS_MSG_T *VAR_1;
   FUNC_0(&VAR_0->lock);

   VAR_1 = VAR_0->head;


   if (VAR_1)
   {
      VAR_0->head = VAR_1->next;
      if (VAR_0->head == ((void*)0))
         VAR_0->tail = ((void*)0);






      FUNC_2(&VAR_0->sem);
   }

   FUNC_1(&VAR_0->lock);
   return VAR_1;
}
