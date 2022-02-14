
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_retriever_info_t ;
struct TYPE_3__ {int element_size; int * list; int func; int handler; } ;
typedef TYPE_1__ task_retriever_data_t ;
typedef int http_transfer_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

task_retriever_info_t *FUNC_1(void)
{
   task_retriever_data_t VAR_2;


   VAR_2.handler = VAR_1;
   VAR_2.element_size = sizeof(http_transfer_info_t);
   VAR_2.func = VAR_0;


   FUNC_0(&VAR_2);

   return VAR_2.list;
}
