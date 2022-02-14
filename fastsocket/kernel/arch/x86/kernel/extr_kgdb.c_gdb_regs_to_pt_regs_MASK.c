
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct pt_regs {unsigned long ax; unsigned long bx; unsigned long cx; unsigned long dx; unsigned long si; unsigned long di; unsigned long bp; unsigned long ip; unsigned long flags; unsigned long ds; unsigned long es; unsigned long cs; unsigned long r8; unsigned long r9; unsigned long r10; unsigned long r11; unsigned long r12; unsigned long r13; unsigned long r14; unsigned long r15; void* ss; } ;


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

void FUNC_0(unsigned long *VAR_21, struct pt_regs *VAR_22)
{

 u32 *VAR_23 = (u32 *)VAR_21;

 VAR_22->ax = VAR_21[VAR_0];
 VAR_22->bx = VAR_21[VAR_2];
 VAR_22->cx = VAR_21[VAR_4];
 VAR_22->dx = VAR_21[VAR_7];
 VAR_22->si = VAR_21[VAR_19];
 VAR_22->di = VAR_21[VAR_5];
 VAR_22->bp = VAR_21[VAR_1];
 VAR_22->ip = VAR_21[VAR_9];






 VAR_22->r8 = VAR_21[VAR_17];
 VAR_22->r9 = VAR_21[VAR_18];
 VAR_22->r10 = VAR_21[VAR_11];
 VAR_22->r11 = VAR_21[VAR_12];
 VAR_22->r12 = VAR_21[VAR_13];
 VAR_22->r13 = VAR_21[VAR_14];
 VAR_22->r14 = VAR_21[VAR_15];
 VAR_22->r15 = VAR_21[VAR_16];
 VAR_22->flags = VAR_23[VAR_10];
 VAR_22->cs = VAR_23[VAR_3];
 VAR_22->ss = VAR_23[VAR_20];

}
