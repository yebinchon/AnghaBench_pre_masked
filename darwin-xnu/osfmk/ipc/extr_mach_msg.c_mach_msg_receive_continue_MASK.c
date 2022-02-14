
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ mach_msg_return_t ;
struct TYPE_3__ {scalar_t__ ith_state; int (* ith_continuation ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(void)
{
 mach_msg_return_t VAR_1;
 thread_t VAR_2 = FUNC_0();

 if (VAR_2->ith_state == VAR_0)
  VAR_1 = VAR_0;
 else
  VAR_1 = FUNC_1(((void*)0));
 (*VAR_2->ith_continuation)(VAR_1);
}
