
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int * slic_regs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 if (VAR_0->slic_regs)
  FUNC_0(VAR_0->slic_regs);
 VAR_0->slic_regs = ((void*)0);
}
