
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_shared_region_t ;
typedef TYPE_1__* vm_shared_region_slide_info_t ;
typedef TYPE_2__* vm_shared_region_slide_info_entry_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int version; int v4; int v3; int v2; int v1; } ;
struct TYPE_4__ {scalar_t__ slide_info_size; TYPE_2__* slide_info_entry; scalar_t__ slide; scalar_t__ end; scalar_t__ start; int * slide_object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;

kern_return_t
FUNC_9(vm_shared_region_t VAR_5)
{
 vm_shared_region_slide_info_t VAR_6;
 vm_shared_region_slide_info_entry_t VAR_7;
 kern_return_t VAR_8;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = VAR_6->slide_info_entry;

 VAR_8 = FUNC_1(VAR_4,
        (mach_vm_offset_t)(vm_offset_t)VAR_7,
        (mach_vm_size_t) VAR_6->slide_info_size,
        VAR_2, VAR_3);
 if (VAR_8 != VAR_1) {
  FUNC_2("vm_shared_region_slide_sanity_check: vm_protect() error 0x%x\n", VAR_8);
 }

 if (VAR_7->version == 1) {
  VAR_8 = FUNC_5(&VAR_7->v1);
 } else if (VAR_7->version == 2) {
  VAR_8 = FUNC_6(&VAR_7->v2, VAR_6->slide_info_size);
 } else if (VAR_7->version == 3) {
  VAR_8 = FUNC_7(&VAR_7->v3, VAR_6->slide_info_size);
    } else if (VAR_7->version == 4) {
        VAR_8 = FUNC_8(&VAR_7->v4, VAR_6->slide_info_size);
 } else {
  goto fail;
 }
 if (VAR_8 != VAR_1) {
  goto fail;
 }

 return VAR_1;
fail:
 if (VAR_6->slide_info_entry != ((void*)0)) {
  FUNC_0(VAR_4,
     (vm_offset_t) VAR_6->slide_info_entry,
     (vm_size_t) VAR_6->slide_info_size);

  FUNC_3(VAR_6->slide_object);
         VAR_6->slide_object = ((void*)0);
  VAR_6->start = 0;
  VAR_6->end = 0;
  VAR_6->slide = 0;
  VAR_6->slide_info_entry = ((void*)0);
  VAR_6->slide_info_size = 0;
 }
 return VAR_0;
}
