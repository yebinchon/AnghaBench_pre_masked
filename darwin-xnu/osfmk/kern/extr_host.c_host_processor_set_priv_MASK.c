
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ processor_set_t ;
typedef int kern_return_t ;
typedef scalar_t__ host_priv_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

kern_return_t
FUNC_0(host_priv_t VAR_4, processor_set_t VAR_5, processor_set_t * VAR_6)
{
 if (VAR_4 == VAR_0 || VAR_5 == VAR_3) {
  *VAR_6 = VAR_3;

  return (VAR_1);
 }

 *VAR_6 = VAR_5;

 return (VAR_2);
}
