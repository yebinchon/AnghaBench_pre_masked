
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* data; } ;
typedef TYPE_1__ task_retriever_info_t ;
struct TYPE_11__ {scalar_t__ handler; int element_size; TYPE_1__* list; int (* func ) (TYPE_3__*,TYPE_1__*) ;} ;
typedef TYPE_2__ task_retriever_data_t ;
struct TYPE_12__ {scalar_t__ handler; struct TYPE_12__* next; } ;
typedef TYPE_3__ retro_task_t ;
struct TYPE_13__ {TYPE_3__* front; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_3(task_retriever_data_t *VAR_1)
{
   retro_task_t *VAR_2 = ((void*)0);
   task_retriever_info_t *VAR_3 = ((void*)0);


   for (VAR_2 = VAR_0.front; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
   {
      task_retriever_info_t *VAR_4 = ((void*)0);
      if (VAR_2->handler != VAR_1->handler)
         continue;


      VAR_4 = (task_retriever_info_t*)FUNC_1(sizeof(task_retriever_info_t));
      VAR_4->data = FUNC_1(VAR_1->element_size);
      VAR_4->next = ((void*)0);


      if (!VAR_1->func(VAR_2, VAR_4->data))
      {
         FUNC_0(VAR_4->data);
         FUNC_0(VAR_4);
         continue;
      }


      if (VAR_1->list)
      {
         if (VAR_3)
         {
            VAR_3->next = VAR_4;
            VAR_3 = VAR_3->next;
         }
         else
            VAR_3 = VAR_4;
      }
      else
      {
         VAR_1->list = VAR_4;
         VAR_3 = VAR_1->list;
      }
   }
}
