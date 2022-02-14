
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_call_t ;
typedef int thread_call_param_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_14(void)
{
 FUNC_3(&VAR_15, "test_thread_call", VAR_2);
 FUNC_4(&VAR_14, &VAR_15, VAR_1);

 thread_call_t VAR_19;
 VAR_19 = FUNC_8(&VAR_16,
                                          (thread_call_param_t)VAR_6,
                                          VAR_10,
                                          VAR_9);

 thread_call_param_t VAR_20 = (thread_call_param_t)VAR_7;

 FUNC_5(&VAR_14);

 FUNC_11(VAR_19, VAR_20);

 uint64_t VAR_21;
 FUNC_1(10, VAR_5, &VAR_21);

 kern_return_t VAR_22;

 VAR_22 = FUNC_6(&VAR_14, VAR_3, &VAR_17, VAR_11, VAR_21);
 FUNC_0(VAR_22, VAR_8, "main function woken by callback");

 FUNC_7(&VAR_14);



 FUNC_0(VAR_13, 1, "callback fired");

 boolean_t VAR_23, VAR_24, VAR_25;

 VAR_23 = FUNC_9(VAR_19);
 FUNC_0(VAR_23, VAR_0, "thread_call_cancel should not succeed");

 VAR_24 = FUNC_11(VAR_19, VAR_20);
 FUNC_0(VAR_24, VAR_0, "call should not be pending");


 FUNC_2(10, VAR_4);

 VAR_23 = FUNC_9(VAR_19);
 FUNC_0(VAR_23, VAR_12, "thread_call_cancel should succeed");

 VAR_24 = FUNC_11(VAR_19, VAR_20);
 FUNC_0(VAR_24, VAR_0, "call should not be pending");

 VAR_25 = FUNC_12(VAR_19);
 FUNC_0(VAR_25, VAR_0, "thread_call_free should not succeed");

 VAR_24 = FUNC_11(VAR_19, VAR_20);
 FUNC_0(VAR_24, VAR_12, "call should be pending");

 FUNC_13(&VAR_18);

 VAR_23 = FUNC_10(VAR_19);
 FUNC_0(VAR_23, VAR_12, "thread_call_cancel_wait should succeed");

 VAR_23 = FUNC_9(VAR_19);
 FUNC_0(VAR_23, VAR_0, "thread_call_cancel should not succeed");

 VAR_25 = FUNC_12(VAR_19);
 FUNC_0(VAR_25, VAR_12, "thread_call_free should succeed");
}
