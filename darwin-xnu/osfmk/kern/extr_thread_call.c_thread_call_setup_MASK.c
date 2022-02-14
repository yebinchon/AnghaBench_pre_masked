
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef int thread_call_param_t ;
typedef int thread_call_func_t ;
typedef int call_entry_t ;
struct TYPE_4__ {int tc_index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(
 thread_call_t VAR_1,
 thread_call_func_t VAR_2,
 thread_call_param_t VAR_3)
{
 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_1((call_entry_t)VAR_1, VAR_2, VAR_3);


 VAR_1->tc_index = VAR_0;


}
