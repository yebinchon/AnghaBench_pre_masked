
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef void* dtrace_id_t ;
struct TYPE_4__ {void* mach_trap_function; } ;
struct TYPE_3__ {scalar_t__ stsy_entry; scalar_t__ stsy_return; void* stsy_underlying; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5, dtrace_id_t VAR_6, void *VAR_7)
{
#pragma unused(arg)

 int VAR_8 = FUNC_2((uintptr_t)VAR_7);
 int VAR_9 = (VAR_4[VAR_8].stsy_entry != VAR_0 ||
   VAR_4[VAR_8].stsy_return != VAR_0);

 if (FUNC_1((uintptr_t)VAR_7)) {
  VAR_4[VAR_8].stsy_entry = VAR_6;
 } else {
  VAR_4[VAR_8].stsy_return = VAR_6;
 }

 if (VAR_9) {
     FUNC_0(VAR_3[VAR_8].mach_trap_function == (void *)VAR_1);
     return(0);
 }

 FUNC_3(&VAR_2);

 if (VAR_3[VAR_8].mach_trap_function == VAR_4[VAR_8].stsy_underlying) {
  vm_offset_t VAR_10 = (vm_offset_t)&VAR_1;
  FUNC_5((vm_offset_t)&VAR_10, (vm_offset_t)&VAR_3[VAR_8].mach_trap_function, sizeof(vm_offset_t));
 }

 FUNC_4(&VAR_2);

 return(0);
}
