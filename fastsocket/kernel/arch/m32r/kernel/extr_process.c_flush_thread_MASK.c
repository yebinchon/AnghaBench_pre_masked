
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct debug_trap {int dummy; } ;
struct TYPE_3__ {int debug_trap; } ;
struct TYPE_4__ {TYPE_1__ thread; int pid; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(void)
{
 FUNC_0("pid = %d\n", VAR_0->pid);
 FUNC_1(&VAR_0->thread.debug_trap, 0, sizeof(struct debug_trap));
}
