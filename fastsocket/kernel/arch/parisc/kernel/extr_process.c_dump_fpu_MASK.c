
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int fr; } ;
typedef int elf_fpregset_t ;


 int FUNC_0 (int *,int ,int) ;

int FUNC_1 (struct pt_regs * VAR_0, elf_fpregset_t *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;

 FUNC_0(VAR_1, VAR_0->fr, sizeof *VAR_1);
 return 1;
}
