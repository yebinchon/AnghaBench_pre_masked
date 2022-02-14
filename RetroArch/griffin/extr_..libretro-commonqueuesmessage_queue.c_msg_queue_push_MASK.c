
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct queue_elem {unsigned int prio; unsigned int duration; int * msg; } ;
struct TYPE_3__ {size_t ptr; size_t size; struct queue_elem** elems; } ;
typedef TYPE_1__ msg_queue_t ;
typedef enum message_queue_icon { ____Placeholder_message_queue_icon } message_queue_icon ;
typedef enum message_queue_category { ____Placeholder_message_queue_category } message_queue_category ;


 scalar_t__ FUNC_0 (int,int) ;
 int * FUNC_1 (char const*) ;

void FUNC_2(msg_queue_t *VAR_0, const char *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      char *VAR_4,
      enum message_queue_icon VAR_5, enum message_queue_category VAR_6)
{
   size_t VAR_7 = 0;
   struct queue_elem *VAR_8 = ((void*)0);

   if (!VAR_0 || VAR_0->ptr >= VAR_0->size)
      return;

   VAR_8 = (struct queue_elem*)
      FUNC_0(1, sizeof(struct queue_elem));
   if (!VAR_8)
      return;

   VAR_8->prio = VAR_2;
   VAR_8->duration = VAR_3;
   VAR_8->msg = VAR_1 ? FUNC_1(VAR_1) : ((void*)0);

   VAR_0->elems[VAR_0->ptr] = VAR_8;

   VAR_7 = VAR_0->ptr++;

   while (VAR_7 > 1)
   {
      struct queue_elem *VAR_9 = VAR_0->elems[VAR_7 >> 1];
      struct queue_elem *VAR_10 = VAR_0->elems[VAR_7];

      if (VAR_10->prio <= VAR_9->prio)
         break;

      VAR_0->elems[VAR_7 >> 1] = VAR_10;
      VAR_0->elems[VAR_7] = VAR_9;

      VAR_7 >>= 1;
   }
}
