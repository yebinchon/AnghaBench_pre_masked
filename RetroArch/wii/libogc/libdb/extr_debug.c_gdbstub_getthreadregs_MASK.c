
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_6__ {int FPSCR; int XER; int CTR; int LR; int CR; int MSR; int FPR; int GPR; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
typedef TYPE_2__ lwp_cntrl ;
struct TYPE_8__ {int FPSCR; int XER; int CTR; int LR; int CR; int SRR1; int SRR0; int FPR; int GPR; } ;
typedef TYPE_3__ frame_context ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_0,frame_context *VAR_1)
{
 lwp_cntrl *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if(VAR_2) {
  FUNC_1(VAR_1->GPR,VAR_2->context.GPR,(32*4));
  FUNC_1(VAR_1->FPR,VAR_2->context.FPR,(32*8));
  VAR_1->SRR0 = VAR_2->context.LR;
  VAR_1->SRR1 = VAR_2->context.MSR;
  VAR_1->CR = VAR_2->context.CR;
  VAR_1->LR = VAR_2->context.LR;
  VAR_1->CTR = VAR_2->context.CTR;
  VAR_1->XER = VAR_2->context.XER;
  VAR_1->FPSCR = VAR_2->context.FPSCR;
  return 1;
 }
 return 0;
}
