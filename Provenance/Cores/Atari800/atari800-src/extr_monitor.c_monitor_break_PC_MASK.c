
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1 = FUNC_0(&VAR_0);
 if (VAR_1)
 {
  if (VAR_0 >= 0xd000 && VAR_0 <= 0xd7ff)
   FUNC_1("PC breakpoint disabled\n");
  else
   FUNC_1("Breakpoint set at PC=%04X\n", VAR_0);
 }
 else
 {
  FUNC_1("Breakpoint is at PC=%04X\n", VAR_0);
 }
}
