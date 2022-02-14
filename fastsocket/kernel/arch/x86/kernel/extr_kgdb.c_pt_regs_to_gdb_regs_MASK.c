
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pt_regs {unsigned long ax; unsigned long bx; unsigned long cx; unsigned long dx; unsigned long si; unsigned long di; unsigned long bp; unsigned long ip; unsigned long flags; unsigned long ds; unsigned long es; unsigned long cs; unsigned long sp; unsigned long r8; unsigned long r9; unsigned long r10; unsigned long r11; unsigned long r12; unsigned long r13; unsigned long r14; unsigned long r15; unsigned long ss; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 unsigned long VAR_24 ;

void FUNC_0(unsigned long *VAR_25, struct pt_regs *VAR_26)
{

 u32 *VAR_27 = (u32 *)VAR_25;

 VAR_25[VAR_0] = VAR_26->ax;
 VAR_25[VAR_2] = VAR_26->bx;
 VAR_25[VAR_4] = VAR_26->cx;
 VAR_25[VAR_7] = VAR_26->dx;
 VAR_25[VAR_21] = VAR_26->si;
 VAR_25[VAR_5] = VAR_26->di;
 VAR_25[VAR_1] = VAR_26->bp;
 VAR_25[VAR_11] = VAR_26->ip;
 VAR_25[VAR_19] = VAR_26->r8;
 VAR_25[VAR_20] = VAR_26->r9;
 VAR_25[VAR_13] = VAR_26->r10;
 VAR_25[VAR_14] = VAR_26->r11;
 VAR_25[VAR_15] = VAR_26->r12;
 VAR_25[VAR_16] = VAR_26->r13;
 VAR_25[VAR_17] = VAR_26->r14;
 VAR_25[VAR_18] = VAR_26->r15;
 VAR_27[VAR_12] = VAR_26->flags;
 VAR_27[VAR_3] = VAR_26->cs;
 VAR_27[VAR_23] = VAR_26->ss;
 VAR_25[VAR_22] = VAR_26->sp;

}
