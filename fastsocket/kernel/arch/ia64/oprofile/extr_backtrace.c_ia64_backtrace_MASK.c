
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {unsigned int depth; int * prev_pfs_loc; struct pt_regs* regs; } ;
typedef TYPE_1__ ia64_backtrace_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct pt_regs* const) ;

void
FUNC_4(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 ia64_backtrace_t VAR_3;
 unsigned long VAR_4;






 if (FUNC_3(VAR_1))
  return;

 VAR_3.depth = VAR_2;
 VAR_3.regs = VAR_1;
 VAR_3.prev_pfs_loc = ((void*)0);
 FUNC_1(VAR_4);
 FUNC_2(VAR_0, &VAR_3);
 FUNC_0(VAR_4);
}
