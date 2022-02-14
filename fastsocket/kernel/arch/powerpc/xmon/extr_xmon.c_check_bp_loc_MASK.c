
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned int*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static long FUNC_5(unsigned long VAR_0)
{
 unsigned int VAR_1;

 VAR_0 &= ~3;
 if (!FUNC_2(VAR_0)) {
  FUNC_4("Breakpoints may only be placed at kernel addresses\n");
  return 0;
 }
 if (!FUNC_3(VAR_0, &VAR_1, sizeof(VAR_1))) {
  FUNC_4("Can't read instruction at address %lx\n", VAR_0);
  return 0;
 }
 if (FUNC_0(VAR_1) || FUNC_1(VAR_1)) {
  FUNC_4("Breakpoints may not be placed on mtmsrd or rfid "
         "instructions\n");
  return 0;
 }
 return 1;
}
