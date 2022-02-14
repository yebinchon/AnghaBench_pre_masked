
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sh_fpu_soft_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct sh_fpu_soft_struct*,struct pt_regs*,int) ;
 int FUNC_1 (struct sh_fpu_soft_struct*,struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_2(u16 VAR_0, struct sh_fpu_soft_struct *VAR_1, struct pt_regs *VAR_2)
{
 if ((VAR_0 & 0xf000) == 0xf000)
  return FUNC_0(VAR_1, VAR_2, VAR_0);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_0);
}
