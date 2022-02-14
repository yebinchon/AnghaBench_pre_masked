
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; TYPE_3__* tmp_msg; TYPE_3__** elems; } ;
typedef TYPE_1__ msg_queue_t ;
struct TYPE_5__ {struct TYPE_5__* msg; } ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(msg_queue_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 1; VAR_1 < VAR_0->ptr; VAR_1++)
   {
      if (VAR_0->elems[VAR_1])
      {
         FUNC_0(VAR_0->elems[VAR_1]->msg);
         FUNC_0(VAR_0->elems[VAR_1]);
         VAR_0->elems[VAR_1] = ((void*)0);
      }
   }
   VAR_0->ptr = 1;
   FUNC_0(VAR_0->tmp_msg);
   VAR_0->tmp_msg = ((void*)0);
}
