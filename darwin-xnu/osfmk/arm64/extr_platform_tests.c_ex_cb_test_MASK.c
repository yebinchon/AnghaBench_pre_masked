
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int member_0; scalar_t__ const far; } ;
typedef TYPE_1__ ex_cb_state_t ;
typedef scalar_t__ ex_cb_action_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_3 (int ,int *,TYPE_1__*) ;
 int VAR_6 ;

kern_return_t
FUNC_4()
{
 const vm_offset_t VAR_7 = 0xdead0001;
 const vm_offset_t VAR_8 = 0xdead0002;
 kern_return_t VAR_9;
 ex_cb_state_t VAR_10 = {0xdeadbeef};
 ex_cb_state_t VAR_11 = {0xdeadbeef};
 ex_cb_action_t VAR_12;

 FUNC_1("Testing Exception Callback.");

 FUNC_1("Running registration test.");

 VAR_9 = FUNC_3(VAR_2, &VAR_6, &VAR_10);
 FUNC_0(VAR_5 == VAR_9, "First registration of TEST1 exception callback");
 VAR_9 = FUNC_3(VAR_3, &VAR_6, &VAR_11);
 FUNC_0(VAR_5 == VAR_9, "First registration of TEST2 exception callback");

 VAR_9 = FUNC_3(VAR_3, &VAR_6, &VAR_11);
 FUNC_0(VAR_5 != VAR_9, "Second registration of TEST2 exception callback");
 VAR_9 = FUNC_3(VAR_2, &VAR_6, &VAR_10);
 FUNC_0(VAR_5 != VAR_9, "Second registration of TEST1 exception callback");

 FUNC_1("Running invocation test.");

 VAR_12 = FUNC_2(VAR_2, VAR_7);
 FUNC_0(VAR_1 == VAR_12, ((void*)0));
 FUNC_0(VAR_7 == VAR_10, ((void*)0));

 VAR_12 = FUNC_2(VAR_3, VAR_8);
 FUNC_0(VAR_0 == VAR_12, ((void*)0));
 FUNC_0(VAR_8 == VAR_11, ((void*)0));

 VAR_12 = FUNC_2(VAR_4, 0);
 FUNC_0(VAR_0 == VAR_12, ((void*)0));

 return VAR_5;
}
