
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_object_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

kern_return_t
FUNC_2(
 memory_object_control_t VAR_2,
 kern_return_t VAR_3)
{
 vm_object_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == VAR_1)
  return (VAR_0);

 return (FUNC_1(VAR_4, VAR_3));
}
