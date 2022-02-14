
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long r11; unsigned long r12; unsigned long erp; int ccs; } ;
typedef int regs ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct pt_regs*,int ,int) ;

int
FUNC_2(int (*VAR_5)(void *), void * VAR_6, unsigned long VAR_7)
{
 struct pt_regs VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));


 VAR_8.r11 = (unsigned long) VAR_5;
 VAR_8.r12 = (unsigned long) VAR_6;
 VAR_8.erp = (unsigned long) VAR_4;
 VAR_8.ccs = 1 << (VAR_3 + VAR_0);


        return FUNC_0(VAR_7 | VAR_2 | VAR_1, 0, &VAR_8, 0, ((void*)0), ((void*)0));
}
