
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* timer_call_t ;
typedef int timer_call_param_t ;
typedef int timer_call_func_t ;
struct TYPE_5__ {int async_dequeue; int lock; } ;


 int FUNC_0 (char*,TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(
 timer_call_t VAR_1,
 timer_call_func_t VAR_2,
 timer_call_param_t VAR_3)
{
 FUNC_0("timer_call_setup(%p,%p,%p)\n", VAR_1, VAR_2, VAR_3);
 FUNC_2(FUNC_1(VAR_1), VAR_2, VAR_3);
 FUNC_3(&(VAR_1)->lock, 0);
 VAR_1->async_dequeue = VAR_0;
}
