
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_slide_info_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int mach_vm_offset_t ;
typedef int kern_return_t ;
struct TYPE_9__ {TYPE_1__* slide_info_entry; } ;
struct TYPE_8__ {int version; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

kern_return_t
FUNC_4(vm_shared_region_slide_info_t VAR_1, vm_offset_t VAR_2, mach_vm_offset_t VAR_3, uint32_t VAR_4)
{
 if (VAR_1->slide_info_entry->version == 1) {
  return FUNC_0(VAR_1, VAR_2, VAR_4);
 } else if (VAR_1->slide_info_entry->version == 2) {
  return FUNC_1(VAR_1, VAR_2, VAR_4);
    } else if (VAR_1->slide_info_entry->version == 3) {
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    } else if (VAR_1->slide_info_entry->version == 4) {
        return FUNC_3(VAR_1, VAR_2, VAR_4);
 } else {
        return VAR_0;
    }
}
