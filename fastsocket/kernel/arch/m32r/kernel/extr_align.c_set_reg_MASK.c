
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int fp; int r7; int r4; int r0; } ;



__attribute__((used)) static void FUNC_0(struct pt_regs *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 < 4)
  *(unsigned long *)(&VAR_0->r0 + VAR_1) = VAR_2;
 else if (VAR_1 < 7)
  *(unsigned long *)(&VAR_0->r4 + (VAR_1 - 4)) = VAR_2;
 else if (VAR_1 < 13)
  *(unsigned long *)(&VAR_0->r7 + (VAR_1 - 7)) = VAR_2;
 else
  *(unsigned long *)(&VAR_0->fp + (VAR_1 - 13)) = VAR_2;
}
