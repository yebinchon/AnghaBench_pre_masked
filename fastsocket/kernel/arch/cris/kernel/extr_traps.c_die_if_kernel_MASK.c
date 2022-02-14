
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pt_regs*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char const*,long) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

void
FUNC_7(const char *VAR_2, struct pt_regs *VAR_3, long VAR_4)
{
 if (FUNC_6(VAR_3))
  return;
 FUNC_1(VAR_3);

 FUNC_2("%s: %04lx\n", VAR_2, VAR_4 & 0xffff);

 FUNC_4(VAR_3);

 VAR_1 = 0;




 FUNC_0(VAR_0);
}
