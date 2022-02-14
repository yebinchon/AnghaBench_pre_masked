
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int task; int exit_thread; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(proc_t VAR_1)
{
 thread_t VAR_2 = FUNC_0();

 VAR_1->exit_thread = VAR_2;
 FUNC_2(VAR_1);

 FUNC_3(VAR_1->task);
 FUNC_4(VAR_1->task, VAR_0);

 FUNC_1(VAR_1);
}
