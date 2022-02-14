
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int * vm_map_t ;
typedef int task_t ;
struct proc {int task; } ;
struct dtrace_ptss_page {TYPE_1__* entries; } ;
typedef scalar_t__ mach_vm_size_t ;
typedef void* mach_vm_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_2__ {struct TYPE_2__* next; void* write_addr; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct dtrace_ptss_page*,int ) ;
 struct dtrace_ptss_page* FUNC_1 (int,int ,int) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,void**,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_4 (int *,void*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (int *,void**,scalar_t__,int ,int ,int ,int *,void*,int ,int*,int*,int ) ;
 int FUNC_6 (int *) ;

struct dtrace_ptss_page*
FUNC_7(struct proc* VAR_16)
{

 struct dtrace_ptss_page* VAR_17 = FUNC_1(sizeof(struct dtrace_ptss_page), VAR_5, VAR_7 | VAR_6);
 if (VAR_17 == ((void*)0))
  return ((void*)0);


 task_t VAR_18 = VAR_16->task;
 vm_map_t VAR_19 = FUNC_2(VAR_18);
 if (VAR_19 == ((void*)0))
   goto err;

 mach_vm_size_t VAR_20 = VAR_8;
 mach_vm_offset_t VAR_21 = 0;
 mach_vm_offset_t VAR_22 = 0;




 vm_prot_t VAR_23 = VAR_14|VAR_13;
 vm_prot_t VAR_24 = VAR_14|VAR_13|VAR_15;

 kern_return_t VAR_25 = FUNC_3(VAR_19, &VAR_21, VAR_20, 0, VAR_9, VAR_12, VAR_11, VAR_3, 0, VAR_2, VAR_23, VAR_24, VAR_10);
 if (VAR_25 != VAR_4) {
  goto err;
 }




  VAR_25 = FUNC_5(VAR_19, &VAR_22, VAR_20, 0, VAR_9, VAR_11, VAR_19, VAR_21, VAR_2, &VAR_23, &VAR_24, VAR_10);
 if (VAR_25 != VAR_4 || !(VAR_24 & VAR_15))
  goto err;

 VAR_25 = FUNC_4 (VAR_19, (mach_vm_offset_t)VAR_22, (mach_vm_size_t)VAR_20, 0, VAR_14 | VAR_15);
 if (VAR_25 != VAR_4)
  goto err;


 int VAR_26;
 for (VAR_26=0; VAR_26<VAR_0; VAR_26++) {
  VAR_17->entries[VAR_26].addr = VAR_21 + (VAR_26 * VAR_1);
  VAR_17->entries[VAR_26].write_addr = VAR_22 + (VAR_26 * VAR_1);
  VAR_17->entries[VAR_26].next = &VAR_17->entries[VAR_26+1];
 }


 VAR_17->entries[VAR_0-1].next = ((void*)0);

 FUNC_6(VAR_19);

 return VAR_17;

err:
 FUNC_0(VAR_17, VAR_5);

 if (VAR_19)
   FUNC_6(VAR_19);

 return ((void*)0);
}
