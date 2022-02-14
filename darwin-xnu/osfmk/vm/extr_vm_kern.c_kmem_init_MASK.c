
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
struct TYPE_4__ {void* vmkf_no_pmap_check; void* vmkf_permanent; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef int uint64_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,scalar_t__,scalar_t__,int ,TYPE_1__,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_16 ;

void
FUNC_9(
 vm_offset_t VAR_17,
 vm_offset_t VAR_18)
{
 vm_map_offset_t VAR_19;
 vm_map_offset_t VAR_20;
 vm_map_kernel_flags_t VAR_21;

 VAR_21 = VAR_6;
 VAR_21.vmkf_permanent = VAR_2;
 VAR_21.vmkf_no_pmap_check = VAR_2;

 VAR_19 = FUNC_8(VAR_17,
          FUNC_1(VAR_12));
 VAR_20 = FUNC_7(VAR_18,
        FUNC_1(VAR_12));
 VAR_12 = FUNC_5(FUNC_3(),VAR_8,
       VAR_20, VAR_0);



 if (VAR_17 != VAR_8) {
  vm_map_offset_t VAR_22;
  kern_return_t VAR_23;

  VAR_21 = VAR_6;
  VAR_21.vmkf_no_pmap_check = VAR_2;

  VAR_22 = VAR_8;
  VAR_23 = FUNC_6(VAR_12,
      &VAR_22,
      (vm_map_size_t)(VAR_19 - VAR_8),
      (vm_map_offset_t) 0,
      VAR_3,
      VAR_21,
      VAR_5,
      VAR_10,
      (vm_object_offset_t) 0, VAR_0,
      VAR_11, VAR_11,
      VAR_4);

  if (VAR_23 != VAR_1) {
   FUNC_2("kmem_init(0x%llx,0x%llx): vm_map_enter(0x%llx,0x%llx) error 0x%x\n",
         (uint64_t) VAR_17, (uint64_t) VAR_18,
         (uint64_t) VAR_8,
         (uint64_t) (VAR_19 - VAR_8),
         VAR_23);
  }
 }
 VAR_14 = FUNC_0(VAR_13*20/100,
         VAR_9);
 VAR_15 = VAR_13 - VAR_14;


 VAR_16 = VAR_15;
}
