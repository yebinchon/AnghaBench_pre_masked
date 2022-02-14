
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
struct TYPE_5__ {int all_image_info_size; int all_image_info_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(
    task_t VAR_0,
    mach_vm_address_t VAR_1,
    mach_vm_size_t VAR_2)
{
 FUNC_0(VAR_0);
 VAR_0->all_image_info_addr = VAR_1;
 VAR_0->all_image_info_size = VAR_2;
    FUNC_1(VAR_0);
}
