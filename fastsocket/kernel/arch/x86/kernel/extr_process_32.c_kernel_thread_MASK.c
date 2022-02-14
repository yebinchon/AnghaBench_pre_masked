
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long bx; unsigned long dx; int orig_ax; unsigned long ip; int cs; int flags; int gs; int fs; void* es; void* ds; } ;
typedef int regs ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 int FUNC_1 () ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct pt_regs*,int ,int) ;

int FUNC_3(int (*VAR_10)(void *), void *VAR_11, unsigned long VAR_12)
{
 struct pt_regs VAR_13;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));

 VAR_13.bx = (unsigned long) VAR_10;
 VAR_13.dx = (unsigned long) VAR_11;

 VAR_13.ds = VAR_8;
 VAR_13.es = VAR_8;
 VAR_13.fs = VAR_6;
 VAR_13.gs = VAR_7;
 VAR_13.orig_ax = -1;
 VAR_13.ip = (unsigned long) VAR_9;
 VAR_13.cs = VAR_5 | FUNC_1();
 VAR_13.flags = VAR_2 | VAR_4 | VAR_3 | 0x2;


 return FUNC_0(VAR_12 | VAR_1 | VAR_0, 0, &VAR_13, 0, ((void*)0), ((void*)0));
}
