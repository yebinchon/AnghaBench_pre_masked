
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct pt_regs {TYPE_1__ psw; } ;



__attribute__((used)) static inline void FUNC_0 (struct pt_regs *VAR_0, int VAR_1)
{
        VAR_0->psw.mask = (VAR_0->psw.mask & 0xFFFFCFFF) | ((VAR_1&3) << 12);
}
