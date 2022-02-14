
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct pt_regs*,int ,int *,int *) ;

int
FUNC_1(struct pt_regs *VAR_3)
{
 return FUNC_0(VAR_0 | VAR_1 | VAR_2, VAR_3->gr[30], VAR_3, 0, ((void*)0), ((void*)0));
}
