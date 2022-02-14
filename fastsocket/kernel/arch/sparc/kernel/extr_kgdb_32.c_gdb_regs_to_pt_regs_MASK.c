
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window32 {unsigned long* locals; unsigned long* ins; } ;
struct pt_regs {unsigned long* u_regs; unsigned long psr; unsigned long pc; unsigned long npc; unsigned long y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned long VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

void FUNC_0(unsigned long *VAR_10, struct pt_regs *VAR_11)
{
 struct reg_window32 *VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < 15; VAR_13++)
  VAR_11->u_regs[VAR_9 + VAR_13] = VAR_10[VAR_0 + VAR_13];




 if (VAR_11->psr != VAR_10[VAR_5]) {
  unsigned long VAR_14 = VAR_11->psr & VAR_7;

  VAR_11->psr = (VAR_10[VAR_5] & ~VAR_7) | VAR_14;
 }

 VAR_11->pc = VAR_10[VAR_4];
 VAR_11->npc = VAR_10[VAR_3];
 VAR_11->y = VAR_10[VAR_6];

 VAR_12 = (struct reg_window32 *) VAR_11->u_regs[VAR_8];
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_12->locals[VAR_13] = VAR_10[VAR_2 + VAR_13];
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_12->ins[VAR_13] = VAR_10[VAR_1 + VAR_13];
}
