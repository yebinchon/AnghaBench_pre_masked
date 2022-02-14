
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ thread_call_param_t ;
typedef int test_param ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_7(thread_call_param_t VAR_10,
                   thread_call_param_t VAR_11)
{
 FUNC_0((test_param)VAR_10, VAR_2, "param0 is correct");
 FUNC_0((test_param)VAR_11, VAR_3, "param1 is correct");

 VAR_6++;

 FUNC_0(VAR_6, 1, "only one callback");

 FUNC_3(&VAR_7);

 FUNC_6(&VAR_8);

 uint64_t VAR_12;
 FUNC_1(10, VAR_1, &VAR_12);

 kern_return_t VAR_13;

 VAR_13 = FUNC_4(&VAR_7, VAR_0, &VAR_9, VAR_5, VAR_12);
 FUNC_0(VAR_13, VAR_4, " callback woken by main function");

 FUNC_5(&VAR_7);


 FUNC_2(1, VAR_1);
}
