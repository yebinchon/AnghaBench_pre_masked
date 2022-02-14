
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* pcb_t ;
struct TYPE_3__ {int xstate; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ) ;

void
FUNC_2(thread_t VAR_1, void *VAR_2)
{
 pcb_t VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3->xstate);
 VAR_3->xstate = VAR_0;
}
