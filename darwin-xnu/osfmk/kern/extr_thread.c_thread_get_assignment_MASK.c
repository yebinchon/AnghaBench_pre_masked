
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_t ;
typedef int * processor_set_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

kern_return_t
FUNC_0(
 thread_t VAR_3,
 processor_set_t *VAR_4)
{
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 *VAR_4 = &VAR_2;

 return (VAR_1);
}
