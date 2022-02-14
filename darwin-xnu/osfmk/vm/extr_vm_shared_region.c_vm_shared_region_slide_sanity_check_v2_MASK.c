
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_slide_info_entry_v2_t ;
typedef int uint32_t ;
typedef int mach_vm_size_t ;
typedef int kern_return_t ;
struct TYPE_3__ {scalar_t__ page_size; int page_starts_count; int page_extras_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static kern_return_t
FUNC_0(vm_shared_region_slide_info_entry_v2_t VAR_3, mach_vm_size_t VAR_4)
{
 if (VAR_3->page_size != VAR_2) {
  return VAR_0;
 }



 uint32_t VAR_5 = VAR_3->page_starts_count;
 uint32_t VAR_6 = VAR_3->page_extras_count;
 mach_vm_size_t VAR_7 = VAR_5 + VAR_6;
 if (VAR_7 < VAR_5) {
  return VAR_0;
 }


 mach_vm_size_t VAR_8 = VAR_7 << 1;
 if (VAR_8 >> 1 != VAR_7) {
  return VAR_0;
 }

 mach_vm_size_t VAR_9 = sizeof(*VAR_3) + VAR_8;
 if (VAR_9 < sizeof(*VAR_3)) {
  return VAR_0;
 }

 if (VAR_9 > VAR_4) {
  return VAR_0;
 }

 return VAR_1;
}
