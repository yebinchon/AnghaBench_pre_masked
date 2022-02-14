
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; void* data; } ;
typedef TYPE_1__ task_retriever_info_t ;



void *FUNC_0(task_retriever_info_t **VAR_0)
{
   void *VAR_1 = ((void*)0);


   if (*VAR_0)
   {
      VAR_1 = (*VAR_0)->data;
      *VAR_0 = (*VAR_0)->next;
   }

   return VAR_1;
}
