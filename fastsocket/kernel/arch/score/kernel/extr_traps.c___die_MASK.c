
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(const char *VAR_1, struct pt_regs *VAR_2, const char *VAR_3,
 const char *VAR_4, unsigned long VAR_5)
{
 FUNC_0();
 FUNC_2("%s", VAR_1);
 if (VAR_3 && VAR_4)
  FUNC_2(" in %s:%s, line %ld", VAR_3, VAR_4, VAR_5);
 FUNC_2(":\n");
 FUNC_3(VAR_2);
 FUNC_1(VAR_0);
}
