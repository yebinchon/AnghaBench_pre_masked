
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_map_t ;
typedef int vm_map_offset_t ;
typedef int vm_behavior_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

kern_return_t
FUNC_4(
 vm_map_t VAR_4,
 mach_vm_offset_t VAR_5,
 mach_vm_size_t VAR_6,
 vm_behavior_t VAR_7)
{
 vm_map_offset_t VAR_8;

 if ((VAR_4 == VAR_3) || (VAR_5 + VAR_6 < VAR_5))
  return(VAR_0);

 if (VAR_6 == 0)
  return VAR_1;

 switch (VAR_7) {
 case 129:
 case 128:
 case 130:





  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = FUNC_0(VAR_4);
  break;
 }

 return FUNC_1(VAR_4,
       FUNC_3(VAR_5, VAR_8),
       FUNC_2(VAR_5+VAR_6, VAR_8),
       VAR_7);
}
