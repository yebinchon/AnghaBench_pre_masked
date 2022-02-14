
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int bpc; } ;
typedef int code ;


 int FUNC_0 (int ,unsigned long,unsigned long*,int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,unsigned long,unsigned long*) ;

void
FUNC_3(struct pt_regs *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

  VAR_2 = (VAR_1->bpc - 2) & ~3;
 VAR_1->bpc -= 2;
 if (FUNC_2(VAR_0, VAR_2, &VAR_3)) {
     FUNC_0(VAR_0, VAR_2, &VAR_3, sizeof(VAR_3), 1);
     FUNC_1();
 }
}
