
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int clock_res_t ;
typedef int clock_flavor_t ;
typedef scalar_t__ clock_attr_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

kern_return_t
FUNC_0(
 clock_flavor_t VAR_4,
 clock_attr_t VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 if (*VAR_6 != 1)
  return (VAR_0);

 switch (VAR_4) {

 case 128:
 case 131:
 case 129:
 case 130:
  *(clock_res_t *) VAR_5 = VAR_3 / 100;
  break;

 default:
  return (VAR_1);
 }

 return (VAR_2);
}
