
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ semaphore_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,void (*) (int )) ;

kern_return_t
FUNC_1(
 semaphore_t VAR_3,
 uint64_t VAR_4)
{

 if (VAR_3 == VAR_1)
  return VAR_0;

 return(FUNC_0(VAR_3,
        VAR_1,
        VAR_4, VAR_2,
           (void (*)(kern_return_t))0));
}
