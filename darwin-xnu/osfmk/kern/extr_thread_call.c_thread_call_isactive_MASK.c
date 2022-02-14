
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ tc_submit_count; scalar_t__ tc_finish_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

boolean_t
FUNC_2(thread_call_t VAR_0)
{
 boolean_t VAR_1;

 spl_t VAR_2 = FUNC_0();
 VAR_1 = (VAR_0->tc_submit_count > VAR_0->tc_finish_count);
 FUNC_1(VAR_2);

 return VAR_1;
}
