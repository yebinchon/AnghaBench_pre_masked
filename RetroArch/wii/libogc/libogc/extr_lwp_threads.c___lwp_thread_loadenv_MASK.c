
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int FPSCR; int* GPR; int MSR; int LR; } ;
struct TYPE_6__ {int stack_size; int isr_level; TYPE_1__ context; scalar_t__ stack; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,TYPE_2__*,void*,int,void*) ;

void FUNC_1(lwp_cntrl *VAR_9)
{
 u32 VAR_10,VAR_11,VAR_12;
 u32 VAR_13,VAR_14,VAR_15;

 VAR_9->context.FPSCR = 0x000000f8;

 VAR_10 = (u32)VAR_9->stack;
 VAR_12 = VAR_9->stack_size;


 *((u32*)VAR_10) = 0xDEADBABE;
 VAR_11 = VAR_10+VAR_12-VAR_0;
 VAR_11 &= ~(VAR_2-1);
 *((u32*)VAR_11) = 0;

 VAR_9->context.GPR[1] = VAR_11;

 VAR_15 = (VAR_6|VAR_5|VAR_3|VAR_7);
 if(!(VAR_9->isr_level&VAR_1))
  VAR_15 |= VAR_4;

 VAR_9->context.MSR = VAR_15;
 VAR_9->context.LR = (u32)VAR_8;

 __asm__ __volatile__ ("mr %0,2; mr %1,13" : "=r" ((VAR_13)), "=r" ((VAR_14)));
 VAR_9->context.GPR[2] = VAR_13;
 VAR_9->context.GPR[13] = VAR_14;





}
