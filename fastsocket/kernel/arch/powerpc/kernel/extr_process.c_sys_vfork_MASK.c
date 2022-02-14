
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gpr; } ;


 int FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,struct pt_regs*,int ,int *,int *) ;

int FUNC_2(unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8,
       struct pt_regs *VAR_9)
{
 FUNC_0(VAR_9);
 return FUNC_1(VAR_0 | VAR_1 | VAR_2, VAR_9->gpr[1],
   VAR_9, 0, ((void*)0), ((void*)0));
}
