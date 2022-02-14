
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; int npc; } ;



__attribute__((used)) static inline void FUNC_0(struct pt_regs *VAR_0)
{
 VAR_0->pc = VAR_0->npc;
 VAR_0->npc += 4;
}
