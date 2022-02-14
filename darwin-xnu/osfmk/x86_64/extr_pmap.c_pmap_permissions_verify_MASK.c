
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_region_recurse_info_t ;
typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vm_region_submap_info_64 {int protection; scalar_t__ is_submap; } ;
typedef int pt_entry_t ;
typedef int ppnum_t ;
typedef int pmap_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,int *,int*,scalar_t__*,int ,int *) ;
 int * FUNC_6 (int ,int) ;
 int * FUNC_7 (int ,int) ;
 int * FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int* FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;

kern_return_t
FUNC_13(pmap_t VAR_15, vm_map_t VAR_16, vm_offset_t VAR_17, vm_offset_t VAR_18) {
 vm_offset_t VAR_19 = VAR_17;
 kern_return_t VAR_20 = VAR_4;
 uint64_t VAR_21 = 0, VAR_22 = 0;

 FUNC_1(!FUNC_3(VAR_15));

 VAR_17 &= ~VAR_7;
 VAR_18 &= ~VAR_7;
 while (VAR_19 < VAR_18) {
  if (FUNC_0((VAR_19 > 0x00007FFFFFFFFFFFULL) &&
   (VAR_19 < 0xFFFF800000000000ULL))) {
   VAR_19 = 0xFFFF800000000000ULL;
  }



  if (((VAR_19 & VAR_10) == 0) && (FUNC_8(VAR_15, VAR_19) == 0)) {
   if ((VAR_19 + VAR_6) > VAR_19)
    VAR_19 += VAR_6;
   else
    break;
   VAR_21++;
   continue;
  }
  if (((VAR_19 & VAR_9) == 0) && (FUNC_9(VAR_15, VAR_19) == 0)) {
   if ((VAR_19 + VAR_5) > VAR_19)
    VAR_19 += VAR_5;
   else
    break;
   VAR_22++;
   continue;
  }

  pt_entry_t *VAR_23 = FUNC_10(VAR_15, VAR_19);
  if (VAR_23 && (*VAR_23 & VAR_1)) {
   if (*VAR_23 & VAR_2) {
    if (!(*VAR_23 & VAR_0)) {
     FUNC_4("W+X PTE at 0x%lx, P4: 0x%llx, P3: 0x%llx, P2: 0x%llx, PT: 0x%llx, VP: %u\n", VAR_19, *FUNC_8(VAR_15, VAR_19), *FUNC_7(VAR_15, VAR_19), *FUNC_6(VAR_15, VAR_19), *VAR_23, FUNC_11((ppnum_t)(FUNC_2(FUNC_12(*VAR_23)))));
     VAR_20 = VAR_3;
    }
   }
  }
  VAR_19 += VAR_8;
 }
 FUNC_4("Completed pmap scan\n");
 VAR_19 = VAR_17;

 struct vm_region_submap_info_64 VAR_24;
 mach_msg_type_number_t VAR_25 = 0;
 mach_vm_size_t VAR_26;
 vm_prot_t VAR_27;
 uint32_t VAR_28 = 0;
 kern_return_t VAR_29;

 while (VAR_19 < VAR_18) {

  for (;;) {
   VAR_25 = VAR_14;
   if((VAR_29 = FUNC_5(VAR_16,
        (mach_vm_address_t *) &VAR_19, &VAR_26, &VAR_28,
     (vm_region_recurse_info_t)&VAR_24,
     &VAR_25)) != VAR_4) {
    break;
   }

   if(VAR_24.is_submap) {
    VAR_28++;
    continue;
   } else {
    break;
   }
  }

  if(VAR_29 != VAR_4)
   break;

  VAR_27 = VAR_24.protection;

  if ((VAR_27 & (VAR_13 | VAR_11)) == (VAR_13 | VAR_11)) {
   FUNC_4("W+X map entry at address 0x%lx\n", VAR_19);
   VAR_20 = VAR_3;
  }

  if (VAR_27) {
   vm_offset_t VAR_30;
   for (VAR_30 = VAR_19; VAR_30 < VAR_19 + VAR_26; VAR_30 += VAR_8) {
    pt_entry_t *VAR_31 = FUNC_10(VAR_15, VAR_30);
    vm_prot_t VAR_32;

    if ((VAR_31 == ((void*)0)) || !(*VAR_31 & VAR_1))
     continue;
    VAR_32 = VAR_12;
    if (*VAR_31 & VAR_2)
     VAR_32 |= VAR_13;
    if ((*VAR_31 & VAR_0) == 0)
     VAR_32 |= VAR_11;
    if (VAR_32 != VAR_27) {
     FUNC_4("PTE/map entry permissions mismatch at address 0x%lx, pte: 0x%llx, protection: 0x%x\n", VAR_30, *VAR_31, VAR_27);
     VAR_20 = VAR_3;
    }
   }
  }
  VAR_19 += VAR_26;
 }
 return VAR_20;
}
