
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef TYPE_1__* vm_object_t ;
typedef int vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
struct TYPE_22__ {int vmkf_fourk; } ;
typedef TYPE_2__ vm_map_kernel_flags_t ;
typedef scalar_t__ vm_map_address_t ;
typedef int vm_inherit_t ;
typedef scalar_t__ memory_object_t ;
typedef int memory_object_control_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_21__ {scalar_t__ pager; scalar_t__ copy_strategy; int pager_ready; scalar_t__ named; int ref_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,scalar_t__,scalar_t__,int,TYPE_2__,int ,TYPE_1__*,int ,int,int,int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*,scalar_t__,scalar_t__,int,TYPE_2__,int ,TYPE_1__*,int ,int,int,int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__**,int ,int ,int*,int*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int ,TYPE_1__**,int *,int*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (TYPE_1__*) ;

kern_return_t
FUNC_19(
 vm_map_t VAR_14,
 vm_map_offset_t *VAR_15,
 vm_map_size_t VAR_16,
 vm_map_offset_t VAR_17,
 int VAR_18,
 vm_map_kernel_flags_t VAR_19,
 vm_tag_t VAR_20,
 memory_object_control_t VAR_21,
 vm_object_offset_t VAR_22,
 boolean_t VAR_23,
 vm_prot_t VAR_24,
 vm_prot_t VAR_25,
 vm_inherit_t VAR_26)
{
 vm_map_address_t VAR_27;
 vm_map_size_t VAR_28;
 vm_object_t VAR_29;
 vm_object_size_t VAR_30;
 kern_return_t VAR_31;
 memory_object_t VAR_32;
 vm_prot_t VAR_33;
 kern_return_t VAR_34;







 if ((VAR_14 == VAR_9) ||
     (VAR_24 & ~VAR_11) ||
     (VAR_25 & ~VAR_11) ||
     (VAR_26 > VAR_8) ||
     VAR_16 == 0) {
  return VAR_1;
 }
 {
  VAR_27 = FUNC_8(*VAR_15,
          FUNC_0(VAR_14));
  VAR_28 = FUNC_7(VAR_16,
          FUNC_0(VAR_14));
 }
 VAR_30 = FUNC_17(VAR_16);

 VAR_29 = FUNC_2(VAR_21);

 if (VAR_29 == VAR_10)
  return VAR_2;

 if (VAR_29 == VAR_13) {
  FUNC_4("Warning: Attempt to map kernel object"
         " by a non-private kernel entity\n");
  return VAR_2;
 }

 FUNC_12(VAR_29);
 VAR_29->ref_count++;
 FUNC_16(VAR_29);
 VAR_33 = VAR_25;
 if (VAR_23) {
  VAR_33 &= ~VAR_12;
 }
 VAR_32 = VAR_29->pager;
 if (VAR_29->named &&
     VAR_32 != VAR_6 &&
     VAR_29->copy_strategy != VAR_5) {
  FUNC_1(VAR_29->pager_ready);
  FUNC_15(VAR_29, VAR_7);
  FUNC_13(VAR_29);
  FUNC_18(VAR_29);

  VAR_34 = FUNC_3(VAR_32, VAR_33);
  FUNC_1(VAR_34 == VAR_4);

  FUNC_12(VAR_29);
  FUNC_14(VAR_29);
 }
 FUNC_18(VAR_29);





 if (VAR_23) {
  vm_object_t VAR_35;
  vm_object_offset_t VAR_36;

  VAR_31 = FUNC_10(VAR_29, VAR_22, VAR_30,
            &VAR_35, &VAR_36,
            &VAR_23);


  if (VAR_31 == VAR_3) {
   boolean_t VAR_37;
   boolean_t VAR_38;
   VAR_35 = VAR_29;
   VAR_36 = VAR_22;
   VAR_37 = FUNC_9(&VAR_35,
        VAR_36, VAR_30,
        &VAR_38,
        &VAR_23);
   FUNC_1(VAR_37);
   VAR_31 = VAR_4;
  }





  FUNC_11(VAR_29);

  if (VAR_31 != VAR_4) {
   return VAR_31;
  }

  VAR_29 = VAR_35;
  VAR_22 = VAR_36;
 }
 {
  VAR_31 = FUNC_5(VAR_14,
          &VAR_27, VAR_28,
          (vm_map_offset_t)VAR_17,
          VAR_18,
          VAR_19,
          VAR_20,
          VAR_29, VAR_22,
          VAR_23,
          VAR_24, VAR_25,
          VAR_26);
 }
 if (VAR_31 != VAR_4)
  FUNC_11(VAR_29);
 *VAR_15 = VAR_27;

 return VAR_31;
}
