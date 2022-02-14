
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long mask; } ;
struct pt_regs {TYPE_1__ psw; } ;



__attribute__((used)) static inline int FUNC_0(struct pt_regs *VAR_0, unsigned long VAR_1)
{
 return (VAR_0->psw.mask & VAR_1) / ((~VAR_1 + 1) & VAR_1);
}
