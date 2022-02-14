
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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *,int) ;
 int VAR_2 ;

void FUNC_8(SH2_struct *VAR_3, const sh2regs_struct *VAR_4)
{
  if(VAR_3==VAR_0)
    FUNC_7(VAR_1, &(VAR_4->R), 16*sizeof(int));
  else
    FUNC_7(VAR_2, &(VAR_4->R), 16*sizeof(int));
  FUNC_5(VAR_3, VAR_4->SR.all);
  FUNC_0(VAR_3, VAR_4->GBR);
  FUNC_6(VAR_3, VAR_4->VBR);
  FUNC_1(VAR_3, VAR_4->MACH);
  FUNC_2(VAR_3, VAR_4->MACL);
  FUNC_4(VAR_3, VAR_4->PR);
  FUNC_3(VAR_3, VAR_4->PC);
}
