
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,scalar_t__*,scalar_t__,scalar_t__,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

kern_return_t
FUNC_6(
 vm_map_t VAR_11,
 mach_vm_offset_t *VAR_12,
 mach_vm_size_t VAR_13,
 int VAR_14,
 vm_tag_t VAR_15)
{
 vm_map_offset_t VAR_16;
 vm_map_size_t VAR_17;
 kern_return_t VAR_18;
 boolean_t VAR_19;


 if (VAR_14 & ~VAR_4)
  return VAR_1;

 if (VAR_11 == VAR_7)
  return(VAR_1);
 if (VAR_13 == 0) {
  *VAR_12 = 0;
  return(VAR_2);
 }

 VAR_19 = ((VAR_3 & VAR_14) != 0);
 if (VAR_19) {
  VAR_16 = FUNC_3(VAR_11);
  if (VAR_16 == 0)
   VAR_16 += FUNC_1(VAR_11);
 } else
  VAR_16 = FUNC_5(*VAR_12,
          FUNC_0(VAR_11));
 VAR_17 = FUNC_4(VAR_13,
         FUNC_0(VAR_11));
 if (VAR_17 == 0) {
   return(VAR_1);
 }

 VAR_18 = FUNC_2(
   VAR_11,
   &VAR_16,
   VAR_17,
   (vm_map_offset_t)0,
   VAR_14,
   VAR_6,
   VAR_15,
   VAR_8,
   (vm_object_offset_t)0,
   VAR_0,
   VAR_10,
   VAR_9,
   VAR_5);

 *VAR_12 = VAR_16;
 return(VAR_18);
}
