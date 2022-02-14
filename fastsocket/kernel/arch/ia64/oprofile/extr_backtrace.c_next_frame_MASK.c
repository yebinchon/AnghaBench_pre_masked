
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * pfs_loc; int ip; } ;
struct TYPE_6__ {TYPE_3__ frame; int * prev_pfs_loc; TYPE_1__* regs; } ;
typedef TYPE_2__ ia64_backtrace_t ;
struct TYPE_5__ {int ar_pfs; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static __inline__ int FUNC_2(ia64_backtrace_t *VAR_0)
{





 if (FUNC_0(VAR_0->frame.ip))
  return 0;
 if (VAR_0->prev_pfs_loc && VAR_0->regs && VAR_0->frame.pfs_loc == VAR_0->prev_pfs_loc)
  VAR_0->frame.pfs_loc = &VAR_0->regs->ar_pfs;
 VAR_0->prev_pfs_loc = ((void*)0);

 return FUNC_1(&VAR_0->frame) == 0;
}
