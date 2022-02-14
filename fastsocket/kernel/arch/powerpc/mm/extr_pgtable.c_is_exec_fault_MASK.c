
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ regs; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(void)
{
 return VAR_0->thread.regs && FUNC_0(VAR_0->thread.regs) == 0x400;
}
