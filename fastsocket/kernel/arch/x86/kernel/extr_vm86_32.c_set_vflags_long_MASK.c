
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct kernel_vm86_regs {TYPE_2__ pt; } ;
struct TYPE_4__ {int v86mask; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct kernel_vm86_regs*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct kernel_vm86_regs*) ;
 int FUNC_2 (int ,unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_3(unsigned long VAR_4, struct kernel_vm86_regs *VAR_5)
{
 FUNC_2(VAR_1, VAR_4, VAR_3->thread.v86mask);
 FUNC_2(VAR_5->pt.flags, VAR_4, VAR_0);
 if (VAR_4 & VAR_2)
  FUNC_1(VAR_5);
 else
  FUNC_0(VAR_5);
}
