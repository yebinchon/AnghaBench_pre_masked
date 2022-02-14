
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_vm_allocate_trap_args {int addr; int flags; int size; int target; } ;
typedef int mach_vm_offset_t ;
typedef int addr ;
struct TYPE_5__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct _kernelrpc_mach_vm_allocate_trap_args *VAR_2)
{
 mach_vm_offset_t VAR_3;
 task_t VAR_4 = FUNC_4(VAR_2->target);
 int VAR_5 = VAR_1;

 if (VAR_4 != FUNC_2())
  goto done;

 if (FUNC_0(VAR_2->addr, (char *)&VAR_3, sizeof (VAR_3)))
  goto done;

 VAR_5 = FUNC_3(VAR_4->map, &VAR_3, VAR_2->size, VAR_2->flags);
 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_1(&VAR_3, VAR_2->addr, sizeof (VAR_3));

done:
 if (VAR_4)
  FUNC_5(VAR_4);
 return (VAR_5);
}
