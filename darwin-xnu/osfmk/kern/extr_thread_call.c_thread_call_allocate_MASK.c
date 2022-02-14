
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef int thread_call_param_t ;
typedef int thread_call_func_t ;
struct TYPE_5__ {int tc_refs; int tc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;

thread_call_t
FUNC_2(
  thread_call_func_t VAR_2,
  thread_call_param_t VAR_3)
{
 thread_call_t VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_2, VAR_3);
 VAR_4->tc_refs = 1;
 VAR_4->tc_flags = VAR_0;

 return (VAR_4);
}
