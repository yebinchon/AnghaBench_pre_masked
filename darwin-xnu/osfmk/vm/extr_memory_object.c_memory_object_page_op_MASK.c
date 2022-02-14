
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_object_t ;
typedef int ppnum_t ;
typedef int memory_object_offset_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int,int *,int*) ;

kern_return_t
FUNC_2(
 memory_object_control_t VAR_2,
 memory_object_offset_t VAR_3,
 int VAR_4,
 ppnum_t *VAR_5,
 int *VAR_6)
{
 vm_object_t VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7 == VAR_1)
  return (VAR_0);

 return FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
}
