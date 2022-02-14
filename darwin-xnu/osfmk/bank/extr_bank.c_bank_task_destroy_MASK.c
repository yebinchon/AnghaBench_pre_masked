
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int * bank_task_t ;
struct TYPE_3__ {int * bank_context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4(task_t VAR_0)
{
 bank_task_t VAR_1;


 FUNC_2();
 VAR_1 = VAR_0->bank_context;
 VAR_0->bank_context = ((void*)0);
 FUNC_3();

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, 1);
}
