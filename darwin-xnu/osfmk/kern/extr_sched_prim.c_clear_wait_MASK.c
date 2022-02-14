
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int thread_t ;
typedef int spl_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

kern_return_t
FUNC_5(
 thread_t VAR_0,
 wait_result_t VAR_1)
{
 kern_return_t VAR_2;
 spl_t VAR_3;

 VAR_3 = FUNC_1();
 FUNC_3(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_4(VAR_0);
 FUNC_2(VAR_3);
 return VAR_2;
}
