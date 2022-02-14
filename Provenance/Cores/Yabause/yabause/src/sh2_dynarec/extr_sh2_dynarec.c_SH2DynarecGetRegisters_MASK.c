
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int all; } ;
struct TYPE_5__ {int PC; int PR; int MACL; int MACH; int VBR; int GBR; TYPE_1__ SR; int R; } ;
typedef TYPE_2__ sh2regs_struct ;
typedef int SH2_struct ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_2 ;

void FUNC_8(SH2_struct *VAR_3, sh2regs_struct *VAR_4)
{
  if(VAR_3==VAR_0)
    FUNC_7(&(VAR_4->R), VAR_1, 16*sizeof(int));
  else
    FUNC_7(&(VAR_4->R), VAR_2, 16*sizeof(int));
  VAR_4->SR.all=FUNC_5(VAR_3);
  VAR_4->GBR=FUNC_0(VAR_3);
  VAR_4->VBR=FUNC_6(VAR_3);
  VAR_4->MACH=FUNC_1(VAR_3);
  VAR_4->MACL=FUNC_2(VAR_3);
  VAR_4->PR=FUNC_4(VAR_3);
  VAR_4->PC=FUNC_3(VAR_3);
}
