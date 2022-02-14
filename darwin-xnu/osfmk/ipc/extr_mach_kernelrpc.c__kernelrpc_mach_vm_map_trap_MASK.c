
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_vm_map_trap_args {int addr; int cur_protection; int flags; int mask; int size; int target; } ;
typedef int mach_vm_offset_t ;
typedef int addr ;
struct TYPE_5__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct _kernelrpc_mach_vm_map_trap_args *VAR_6)
{
 mach_vm_offset_t VAR_7;
 task_t VAR_8 = FUNC_4(VAR_6->target);
 int VAR_9 = VAR_3;

 if (VAR_8 != FUNC_2())
  goto done;

 if (FUNC_0(VAR_6->addr, (char *)&VAR_7, sizeof (VAR_7)))
  goto done;

 VAR_9 = FUNC_3(VAR_8->map, &VAR_7, VAR_6->size, VAR_6->mask, VAR_6->flags,
   VAR_1, 0, VAR_0, VAR_6->cur_protection, VAR_5,
   VAR_4);
 if (VAR_9 == VAR_2)
  VAR_9 = FUNC_1(&VAR_7, VAR_6->addr, sizeof (VAR_7));

done:
 if (VAR_8)
  FUNC_5(VAR_8);
 return (VAR_9);
}
