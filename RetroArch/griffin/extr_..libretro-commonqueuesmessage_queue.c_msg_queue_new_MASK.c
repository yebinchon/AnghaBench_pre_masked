
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct queue_elem {int dummy; } ;
struct TYPE_4__ {size_t size; int ptr; struct queue_elem** elems; } ;
typedef TYPE_1__ msg_queue_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

msg_queue_t *FUNC_2(size_t VAR_0)
{
   struct queue_elem **VAR_1 = ((void*)0);
   msg_queue_t *VAR_2 = (msg_queue_t*)FUNC_0(1, sizeof(*VAR_2));

   if (!VAR_2)
      return ((void*)0);

   VAR_2->size = VAR_0 + 1;

   VAR_1 = (struct queue_elem**)FUNC_0(VAR_2->size,
         sizeof(struct queue_elem*));

   if (!VAR_1)
   {
      FUNC_1(VAR_2);
      return ((void*)0);
   }

   VAR_2->elems = VAR_1;
   VAR_2->ptr = 1;

   return VAR_2;
}
