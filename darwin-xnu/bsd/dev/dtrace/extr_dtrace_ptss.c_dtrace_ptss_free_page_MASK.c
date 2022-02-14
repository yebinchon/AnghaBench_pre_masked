
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int task_t ;
struct proc {int task; } ;
struct dtrace_ptss_page {TYPE_1__* entries; } ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
struct TYPE_2__ {int write_addr; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct proc* VAR_1, struct dtrace_ptss_page* VAR_2)
{

 task_t VAR_3 = VAR_1->task;
 vm_map_t VAR_4 = FUNC_0(VAR_3);

 mach_vm_address_t VAR_5 = VAR_2->entries[0].addr;
 mach_vm_size_t VAR_6 = VAR_0;


 FUNC_1(VAR_4, VAR_5, VAR_6);

 mach_vm_address_t VAR_7 = VAR_2->entries[0].write_addr;
 FUNC_1(VAR_4, VAR_7, VAR_6);

 FUNC_2(VAR_4);
}
