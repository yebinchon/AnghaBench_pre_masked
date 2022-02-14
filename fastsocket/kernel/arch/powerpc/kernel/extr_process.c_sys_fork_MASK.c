
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gpr; } ;


 int FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct pt_regs*,int ,int *,int *) ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3,
      unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6,
      struct pt_regs *VAR_7)
{
 FUNC_0(VAR_7);
 return FUNC_1(VAR_0, VAR_7->gpr[1], VAR_7, 0, ((void*)0), ((void*)0));
}
