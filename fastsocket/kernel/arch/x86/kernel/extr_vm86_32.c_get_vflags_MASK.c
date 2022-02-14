
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long flags; } ;
struct kernel_vm86_regs {TYPE_1__ pt; } ;
struct TYPE_5__ {int v86mask; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct kernel_vm86_regs *VAR_6)
{
 unsigned long VAR_7 = VAR_6->pt.flags & VAR_0;

 if (VAR_1 & VAR_4)
  VAR_7 |= VAR_2;
 VAR_7 |= VAR_3;
 return VAR_7 | (VAR_1 & VAR_5->thread.v86mask);
}
