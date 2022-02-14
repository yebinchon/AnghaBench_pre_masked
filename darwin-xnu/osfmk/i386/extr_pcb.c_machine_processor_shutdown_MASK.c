
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* processor_t ;
struct TYPE_6__ {int idle_thread; } ;


 int FUNC_0 (int ,void (*) (TYPE_1__*),TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

thread_t
FUNC_5(
 thread_t VAR_0,
 void (*VAR_1)(processor_t),
 processor_t VAR_2)
{



 FUNC_2(VAR_0, ((void*)0));
 FUNC_3(VAR_0, VAR_2->idle_thread, FUNC_1());
 return(FUNC_0(VAR_0, VAR_1, VAR_2));
}
