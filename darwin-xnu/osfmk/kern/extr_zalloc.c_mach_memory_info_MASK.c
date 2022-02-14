
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int vm_size_t ;
typedef unsigned int vm_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef int uint64_t ;
typedef int mach_zone_name_t ;
typedef int * mach_zone_name_array_t ;
struct TYPE_5__ {int mzi_collectable; } ;
typedef TYPE_1__ mach_zone_info_t ;
typedef TYPE_1__* mach_zone_info_array_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef int mach_memory_info_t ;
typedef int * mach_memory_info_array_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ host_priv_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,unsigned int*,unsigned int,int ) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_12 (int ,unsigned int,unsigned int,int,int ,int ) ;
 int FUNC_13 (int *,unsigned int,int ) ;
 unsigned int FUNC_14 () ;
 int * VAR_11 ;

kern_return_t
FUNC_15(
 host_priv_t VAR_12,
 mach_zone_name_array_t *VAR_13,
 mach_msg_type_number_t *VAR_14,
 mach_zone_info_array_t *VAR_15,
 mach_msg_type_number_t *VAR_16,
 mach_memory_info_array_t *VAR_17,
 mach_msg_type_number_t *VAR_18)
{
 mach_zone_name_t *VAR_19;
 vm_offset_t VAR_20;
 vm_size_t VAR_21;

 mach_zone_info_t *VAR_22;
 vm_offset_t VAR_23;
 vm_size_t VAR_24;

 mach_memory_info_t *VAR_25;
 vm_offset_t VAR_26;
 vm_size_t VAR_27;
 vm_size_t VAR_28;
 unsigned int VAR_29;

 unsigned int VAR_30, VAR_31, VAR_32;
 mach_zone_name_t *VAR_33;
 mach_zone_info_t *VAR_34;
 kern_return_t VAR_35;

 uint64_t VAR_36 = 0;

 if (VAR_12 == VAR_1)
  return VAR_2;
 FUNC_8(&VAR_8);
 VAR_30 = (unsigned int)(VAR_10);
 FUNC_9(&VAR_8);

 VAR_21 = FUNC_7(VAR_30 * sizeof *VAR_19);
 VAR_35 = FUNC_5(VAR_9,
     &VAR_20, VAR_21, VAR_5);
 if (VAR_35 != VAR_3)
  return VAR_35;
 VAR_19 = (mach_zone_name_t *) VAR_20;

 VAR_24 = FUNC_7(VAR_30 * sizeof *VAR_22);
 VAR_35 = FUNC_5(VAR_9,
     &VAR_23, VAR_24, VAR_5);
 if (VAR_35 != VAR_3) {
  FUNC_6(VAR_9,
     VAR_20, VAR_21);
  return VAR_35;
 }
 VAR_22 = (mach_zone_info_t *) VAR_23;

 VAR_33 = &VAR_19[0];
 VAR_34 = &VAR_22[0];

 VAR_31 = VAR_30;
 for (VAR_32 = 0; VAR_32 < VAR_30; VAR_32++) {
  if (!FUNC_4(&(VAR_11[VAR_32]), VAR_33, VAR_34)) {
   VAR_31--;
   continue;
  }
  VAR_36 += FUNC_0(VAR_34->mzi_collectable);
  VAR_33++;
  VAR_34++;
 }

 *VAR_13 = (mach_zone_name_t *) FUNC_3(VAR_20, VAR_21, VAR_31 * sizeof *VAR_19);
 *VAR_14 = VAR_31;

 *VAR_15 = (mach_zone_info_t *) FUNC_3(VAR_23, VAR_24, VAR_31 * sizeof *VAR_22);
 *VAR_16 = VAR_31;

 VAR_29 = 0;
 VAR_26 = 0;

 if (VAR_17 && VAR_18)
 {
  vm_map_copy_t VAR_37;
  VAR_29 = FUNC_14();
  VAR_27 = VAR_29 * sizeof(*VAR_25);
  VAR_28 = FUNC_7(VAR_27);
  VAR_35 = FUNC_5(VAR_9,
      &VAR_26, VAR_28, VAR_5);
  if (VAR_35 != VAR_3) {
   return VAR_35;
  }

  VAR_35 = FUNC_12(VAR_9, VAR_26, VAR_26 + VAR_28,
         VAR_6|VAR_7, VAR_5, VAR_0);
  FUNC_2(VAR_35 == VAR_3);

  VAR_25 = (mach_memory_info_t *) VAR_26;
  FUNC_13(VAR_25, VAR_29, VAR_36);

  VAR_35 = FUNC_11(VAR_9, VAR_26, VAR_26 + VAR_28, VAR_0);
  FUNC_2(VAR_35 == VAR_3);

  VAR_35 = FUNC_10(VAR_9, (vm_map_address_t)VAR_26,
       (vm_map_size_t)VAR_27, VAR_4, &VAR_37);
  FUNC_2(VAR_35 == VAR_3);

  *VAR_17 = (mach_memory_info_t *) VAR_37;
  *VAR_18 = VAR_29;
 }

 return VAR_3;
}
