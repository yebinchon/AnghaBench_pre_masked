
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_slide_info_entry_v3_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int mach_vm_size_t ;
typedef int kern_return_t ;
struct TYPE_3__ {scalar_t__ page_size; int page_starts_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_1(vm_shared_region_slide_info_entry_v3_t VAR_3, mach_vm_size_t VAR_4)
{
 if (VAR_3->page_size != VAR_2) {
  FUNC_0("vm_shared_region_slide_sanity_check_v3: s_info->page_size != PAGE_SIZE_FOR_SR_SL 0x%llx != 0x%llx\n", (uint64_t)VAR_3->page_size, (uint64_t)VAR_2);
  return VAR_0;
 }

 uint32_t VAR_5 = VAR_3->page_starts_count;
 mach_vm_size_t VAR_6 = VAR_5;
 mach_vm_size_t VAR_7 = VAR_6 << 1;
 mach_vm_size_t VAR_8 = sizeof(*VAR_3) + VAR_7;
 if (VAR_8 < sizeof(*VAR_3)) {
  FUNC_0("vm_shared_region_slide_sanity_check_v3: required_size != sizeof(*s_info) 0x%llx != 0x%llx\n", (uint64_t)VAR_8, (uint64_t)sizeof(*VAR_3));
  return VAR_0;
 }

 if (VAR_8 > VAR_4) {
  FUNC_0("vm_shared_region_slide_sanity_check_v3: required_size != slide_info_size 0x%llx != 0x%llx\n", (uint64_t)VAR_8, (uint64_t)VAR_4);
  return VAR_0;
 }

 return VAR_1;
}
