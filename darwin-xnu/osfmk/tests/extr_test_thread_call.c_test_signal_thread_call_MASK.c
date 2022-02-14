
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_call_t ;
typedef int thread_call_param_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 thread_call_t VAR_11;
 VAR_11 = FUNC_3(&VAR_10,
                                          (thread_call_param_t)VAR_3,
                                          VAR_7,
                                          VAR_5|VAR_6);

 thread_call_param_t VAR_12 = (thread_call_param_t)VAR_4;

 uint64_t VAR_13;

 boolean_t VAR_14, VAR_15, VAR_16;

 FUNC_1(10, VAR_2, &VAR_13);
 VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
 FUNC_0(VAR_15, VAR_0, "call should not be pending");

 VAR_14 = FUNC_4(VAR_11);
 FUNC_0(VAR_14, VAR_8, "thread_call_cancel should succeed");

 FUNC_1(10, VAR_1, &VAR_13);
 VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
 FUNC_0(VAR_15, VAR_0, "call should not be pending");


 FUNC_2(50, VAR_1);

 FUNC_0(VAR_9, 1, "callback fired");

 VAR_14 = FUNC_4(VAR_11);
 FUNC_0(VAR_14, VAR_0, "thread_call_cancel should not succeed");

 VAR_16 = FUNC_6(VAR_11);
 FUNC_0(VAR_16, VAR_8, "thread_call_free should succeed");
}
