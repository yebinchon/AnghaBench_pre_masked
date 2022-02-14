
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef scalar_t__ semaphore_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

kern_return_t
FUNC_1(
 semaphore_t VAR_3,
 thread_t VAR_4)
{
 kern_return_t VAR_5;

 if (VAR_3 == VAR_1)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_3,
     VAR_4,
     VAR_2);
 return VAR_5;
}
