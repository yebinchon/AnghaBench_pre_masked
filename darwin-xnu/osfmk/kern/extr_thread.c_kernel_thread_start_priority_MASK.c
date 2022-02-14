
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;
typedef int integer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

kern_return_t
FUNC_4(
 thread_continue_t VAR_1,
 void *VAR_2,
 integer_t VAR_3,
 thread_t *VAR_4)
{
 kern_return_t VAR_5;
 thread_t VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6);
 if (VAR_5 != VAR_0)
  return (VAR_5);

 *VAR_4 = VAR_6;

 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6);

 return (VAR_5);
}
