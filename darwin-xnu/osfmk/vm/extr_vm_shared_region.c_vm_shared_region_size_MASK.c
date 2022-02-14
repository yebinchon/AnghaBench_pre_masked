
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef scalar_t__ mach_vm_size_t ;
struct TYPE_4__ {int sr_ref_count; scalar_t__ sr_size; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

mach_vm_size_t
FUNC_3(
 vm_shared_region_t VAR_0)
{
 FUNC_0(
  ("shared_region: -> size(%p)\n",
   (void *)FUNC_1(VAR_0)));
 FUNC_2(VAR_0->sr_ref_count > 1);
 FUNC_0(
  ("shared_region: size(%p) <- 0x%llx\n",
   (void )FUNC_1(VAR_0),
   (long long)VAR_0->sr_size));
 return VAR_0->sr_size;
}
