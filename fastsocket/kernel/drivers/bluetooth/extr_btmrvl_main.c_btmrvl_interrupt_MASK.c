
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wait_q; } ;
struct btmrvl_private {TYPE_2__ main_thread; TYPE_1__* adapter; } ;
struct TYPE_3__ {int int_count; scalar_t__ wakeup_tries; int ps_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct btmrvl_private *VAR_1)
{
 VAR_1->adapter->ps_state = VAR_0;

 VAR_1->adapter->wakeup_tries = 0;

 VAR_1->adapter->int_count++;

 FUNC_0(&VAR_1->main_thread.wait_q);
}
