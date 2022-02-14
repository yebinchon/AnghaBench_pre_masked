
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
struct TYPE_4__ {int vmkf_permanent; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int,int ,int ,TYPE_1__,int ,int *) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(vm_size_t VAR_12) {
 kern_return_t VAR_13;

 if (VAR_9) {
  vm_map_kernel_flags_t VAR_14;

  VAR_14 = VAR_5;
  VAR_14.vmkf_permanent = VAR_2;
  VAR_13 = FUNC_0(VAR_11, &VAR_8, (VAR_12 * VAR_10),
           VAR_0, VAR_3, VAR_14, VAR_4,
           &VAR_6);

  if (VAR_13 != VAR_1) {
   FUNC_1("zone_init: kmem_suballoc(gzalloc_map, 0x%lx, %u) failed", VAR_12, VAR_10);
  }
  VAR_7 = VAR_8 + (VAR_12 * VAR_10);
 }
}
