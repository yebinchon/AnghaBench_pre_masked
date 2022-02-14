
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; unsigned long addr; } ;
struct pt_regs {unsigned long* gprs; int orig_gpr2; TYPE_1__ psw; } ;
typedef int regs ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 int VAR_7 ;

int FUNC_2(int (*VAR_8)(void *), void * VAR_9, unsigned long VAR_10)
{
 struct pt_regs VAR_11;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.psw.mask = VAR_7 | VAR_4 | VAR_3;
 VAR_11.psw.addr = (unsigned long) VAR_6 | VAR_2;
 VAR_11.gprs[9] = (unsigned long) VAR_8;
 VAR_11.gprs[10] = (unsigned long) VAR_9;
 VAR_11.gprs[11] = (unsigned long) VAR_5;
 VAR_11.orig_gpr2 = -1;


 return FUNC_0(VAR_10 | VAR_1 | VAR_0,
         0, &VAR_11, 0, ((void*)0), ((void*)0));
}
