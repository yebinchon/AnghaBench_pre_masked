
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int processor_flavor_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int,int *) ;

kern_return_t
FUNC_1(
 processor_flavor_t VAR_3,
 mach_msg_type_number_t *VAR_4)
{
 switch (VAR_3) {

 case 129:
  *VAR_4 = VAR_1;
  break;

 case 128:
  *VAR_4 = VAR_2;
  break;

 default:
  return (FUNC_0(VAR_3, VAR_4));
 }

 return (VAR_0);
}
