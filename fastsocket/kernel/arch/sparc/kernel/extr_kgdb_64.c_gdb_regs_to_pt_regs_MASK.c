
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_window {unsigned long* locals; unsigned long* ins; } ;
struct pt_regs {unsigned long* u_regs; unsigned long tstate; unsigned long tpc; unsigned long tnpc; unsigned long y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;

void FUNC_0(unsigned long *VAR_11, struct pt_regs *VAR_12)
{
 struct reg_window *VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < 15; VAR_14++)
  VAR_12->u_regs[VAR_10 + VAR_14] = VAR_11[VAR_0 + VAR_14];




 if (VAR_12->tstate != VAR_11[VAR_5]) {
  unsigned long VAR_15 = VAR_12->tstate & VAR_8;

  VAR_12->tstate = (VAR_11[VAR_5] & ~VAR_8) | VAR_15;
 }

 VAR_12->tpc = VAR_11[VAR_4];
 VAR_12->tnpc = VAR_11[VAR_3];
 VAR_12->y = VAR_11[VAR_6];

 VAR_13 = (struct reg_window *) (VAR_12->u_regs[VAR_9] + VAR_7);
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  VAR_13->locals[VAR_14] = VAR_11[VAR_2 + VAR_14];
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  VAR_13->ins[VAR_14] = VAR_11[VAR_1 + VAR_14];
}
