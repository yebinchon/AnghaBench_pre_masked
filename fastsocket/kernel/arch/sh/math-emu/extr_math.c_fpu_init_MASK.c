
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fpu_soft_struct {scalar_t__* xfp_regs; scalar_t__* fp_regs; scalar_t__ fpul; int fpscr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sh_fpu_soft_struct *VAR_1)
{
 int VAR_2;

 VAR_1->fpscr = VAR_0;
 VAR_1->fpul = 0;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  VAR_1->fp_regs[VAR_2] = 0;
  VAR_1->xfp_regs[VAR_2]= 0;
 }
}
