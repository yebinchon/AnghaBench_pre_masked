
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct kernel_vm86_regs {TYPE_1__ pt; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct kernel_vm86_regs *VAR_1)
{
 VAR_1->pt.flags &= ~VAR_0;
}
