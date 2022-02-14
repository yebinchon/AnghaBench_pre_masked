
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {void* wait_for_space; void* no_zero_fill; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,int *,int ,void*,int ,int ,int ,TYPE_1__**) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

void
FUNC_4(void)
{
 kern_return_t VAR_14;
 vm_offset_t VAR_15;

 VAR_14 = FUNC_1(VAR_12, &VAR_15, VAR_10,
          VAR_2,
          (VAR_3),
          VAR_5,
          VAR_4,
          &VAR_9);

 if (VAR_14 != VAR_0)
  FUNC_2("ipc_init: kmem_suballoc of ipc_kernel_map failed");

 VAR_14 = FUNC_1(VAR_12, &VAR_15, VAR_8,
          VAR_2,
          (VAR_3),
          VAR_5,
          VAR_4,
          &VAR_7);

 if (VAR_14 != VAR_0)
  FUNC_2("ipc_init: kmem_suballoc of ipc_kernel_copy_map failed");

 VAR_7->no_zero_fill = VAR_2;
 VAR_7->wait_for_space = VAR_2;







 if (VAR_11 <= VAR_1) {
  VAR_13 = VAR_11;
 }
 else {
  VAR_13 = VAR_1;
 }

 VAR_13 -= VAR_6;

 FUNC_0();
 FUNC_3();

}
