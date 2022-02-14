
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ip; unsigned long sp; int flags; int ss; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct pt_regs *VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_5, 0);
 FUNC_2(VAR_4, 0);
 FUNC_1(0);
 VAR_8->ip = VAR_9;
 VAR_8->sp = VAR_10;
 FUNC_3(VAR_7, VAR_10);
 VAR_8->cs = VAR_1;
 VAR_8->ss = VAR_2;
 VAR_8->flags = 0x200;
 FUNC_4(VAR_0);



 FUNC_0(VAR_3);
}
