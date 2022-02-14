
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int ,int,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

kern_return_t
FUNC_4(
 vm_map_t VAR_5,
 mach_vm_offset_t VAR_6,
 mach_vm_size_t VAR_7,
 boolean_t VAR_8,
 vm_prot_t VAR_9)
{
 if ((VAR_5 == VAR_2) || (VAR_6 + VAR_7 < VAR_6) ||
     (VAR_9 & ~(VAR_3 | VAR_4)))
  return(VAR_0);

 if (VAR_7 == 0)
  return VAR_1;

 return(FUNC_1(VAR_5,
         FUNC_3(VAR_6,
      FUNC_0(VAR_5)),
         FUNC_2(VAR_6+VAR_7,
      FUNC_0(VAR_5)),
         VAR_9,
         VAR_8));
}
