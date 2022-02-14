
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int processor_flavor_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned int VAR_2 ;

kern_return_t
FUNC_0(processor_flavor_t VAR_3,
        unsigned int *VAR_4)
{

 switch (VAR_3) {
 case 128:
  *VAR_4 = VAR_2;
  return (VAR_1);

 default:
  *VAR_4 = 0;
  return (VAR_0);
 }
}
