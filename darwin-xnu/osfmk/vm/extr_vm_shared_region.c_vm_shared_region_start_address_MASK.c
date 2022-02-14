
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int sr_ref_count; scalar_t__ sr_base_address; scalar_t__ sr_first_mapping; scalar_t__ sr_mapping_in_progress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 () ;

kern_return_t
FUNC_6(
 vm_shared_region_t VAR_3,
 mach_vm_offset_t *VAR_4)
{
 kern_return_t VAR_5;
 mach_vm_offset_t VAR_6;
 mach_vm_offset_t VAR_7;

 FUNC_0(
  ("shared_region: -> start_address(%p)\n",
   (void *)FUNC_1(VAR_3)));
 FUNC_2(VAR_3->sr_ref_count > 1);

 FUNC_3();






 while (VAR_3->sr_mapping_in_progress) {

  FUNC_2(VAR_3->sr_ref_count > 1);
  FUNC_4(&VAR_3->sr_mapping_in_progress,
           VAR_2);
 }
 FUNC_2(! VAR_3->sr_mapping_in_progress);
 FUNC_2(VAR_3->sr_ref_count > 1);

 VAR_6 = VAR_3->sr_base_address;
 VAR_7 = VAR_3->sr_first_mapping;

 if (VAR_7 == (mach_vm_offset_t) -1) {

  VAR_5 = VAR_0;
 } else {
  VAR_5 = VAR_1;
  *VAR_4 = VAR_6 + VAR_7;
 }

 FUNC_5();

 FUNC_0(
  ("shared_region: start_address(%p) <- 0x%llx\n",
   (void )FUNC_1(VAR_3),
   (long long)VAR_3->sr_base_address));

 return VAR_5;
}
