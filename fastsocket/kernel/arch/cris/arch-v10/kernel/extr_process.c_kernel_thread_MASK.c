
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long r11; unsigned long r12; unsigned long irp; int dccr; } ;
typedef int regs ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pt_regs*,int ,int) ;

int FUNC_2(int (*VAR_4)(void *), void * VAR_5, unsigned long VAR_6)
{
 struct pt_regs VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));


 VAR_7.r11 = (unsigned long)VAR_4;
 VAR_7.r12 = (unsigned long)VAR_5;
 VAR_7.irp = (unsigned long)VAR_3;
 VAR_7.dccr = 1 << VAR_2;


        return FUNC_0(VAR_6 | VAR_1 | VAR_0, 0, &VAR_7, 0, ((void*)0), ((void*)0));
}
