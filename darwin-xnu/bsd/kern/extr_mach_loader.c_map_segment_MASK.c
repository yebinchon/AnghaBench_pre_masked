
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
struct TYPE_7__ {void* vmkf_cs_enforcement_override; void* vmkf_cs_enforcement; void* vmkf_fourk; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef int uint64_t ;
typedef scalar_t__ memory_object_control_t ;
typedef int mach_vm_offset_t ;
struct TYPE_8__ {int csflags; } ;
typedef TYPE_2__ load_result_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,scalar_t__,int ,int ,TYPE_1__,int ,int ,int ,void*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,scalar_t__,int ,int ,TYPE_1__,int ,scalar_t__,scalar_t__,void*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static kern_return_t
FUNC_9(
 vm_map_t VAR_14,
 vm_map_offset_t VAR_15,
 vm_map_offset_t VAR_16,
 memory_object_control_t VAR_17,
 vm_map_offset_t VAR_18,
 vm_map_offset_t VAR_19,
 vm_prot_t VAR_20,
 vm_prot_t VAR_21,
 load_result_t *VAR_22)
{
 vm_map_offset_t VAR_23, VAR_24, VAR_25;
 kern_return_t VAR_26;
 vm_map_offset_t VAR_27;
 vm_map_kernel_flags_t VAR_28, VAR_29;

 if (VAR_16 < VAR_15 ||
     VAR_19 < VAR_18) {
  return VAR_4;
 }
 if (VAR_16 == VAR_15 ||
     VAR_19 == VAR_18) {

  return VAR_6;
 }

 VAR_27 = FUNC_0(VAR_8, FUNC_6(VAR_14));

 VAR_28 = VAR_13;
 if (FUNC_5(VAR_15, VAR_27) &&
     FUNC_5(VAR_16, VAR_27) &&
     FUNC_5(VAR_18, VAR_27) &&
     FUNC_5(VAR_19, VAR_27)) {

 } else {




  FUNC_2("map_segment: unexpected mis-alignment "
        "vm[0x%llx:0x%llx] file[0x%llx:0x%llx]\n",
        (uint64_t) VAR_15,
        (uint64_t) VAR_16,
        (uint64_t) VAR_18,
        (uint64_t) VAR_19);

 }

 VAR_23 = 0;
 VAR_24 = VAR_15;
 VAR_25 = VAR_15;
 if (VAR_25 >= VAR_15 + (VAR_19 - VAR_18)) {

  goto done;
 }
 if (FUNC_7(VAR_25, VAR_27) >=
     FUNC_8(VAR_15 + (VAR_19 - VAR_18),
         VAR_27)) {

 } else {
  VAR_24 = VAR_25;
  if ((VAR_15 & VAR_27) !=
      (VAR_18 & VAR_27)) {

   VAR_29 = VAR_28;
  } else {

   VAR_29 = VAR_13;
  }
  if (VAR_22->csflags & VAR_0) {
   VAR_29.vmkf_cs_enforcement = VAR_9;
  } else {
   VAR_29.vmkf_cs_enforcement = VAR_1;
  }
  VAR_29.vmkf_cs_enforcement_override = VAR_9;


  VAR_25 = FUNC_8(VAR_15 + (VAR_19 -
       VAR_18),
         VAR_27);
  if (VAR_17 != VAR_7) {
   VAR_26 = FUNC_4(
    VAR_14,
    &VAR_24,
    VAR_25 - VAR_24,
    (mach_vm_offset_t)0,
    VAR_10,
    VAR_29,
    VAR_12,
    VAR_17,
    VAR_18 + VAR_23,
    VAR_9,
    VAR_20, VAR_21,
    VAR_11);
  } else {
   VAR_26 = FUNC_3(
    VAR_14,
    &VAR_24,
    VAR_25 - VAR_24,
    (mach_vm_offset_t)0,
    VAR_10,
    VAR_29,
    VAR_12,
    VAR_2,
    0,
    VAR_9,
    VAR_20, VAR_21,
    VAR_11);
  }
  if (VAR_26 != VAR_3) {
   return (VAR_5);
  }
  VAR_23 += VAR_25 - VAR_24;
 }
 if (VAR_25 >= VAR_15 + (VAR_19 - VAR_18)) {

  goto done;
 }
 VAR_24 = VAR_25;
done:
 FUNC_1(VAR_25 >= VAR_15 + (VAR_19 - VAR_18));
 return VAR_6;
}
