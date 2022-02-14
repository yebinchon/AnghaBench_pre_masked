
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int psr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_3)
{
 unsigned long *VAR_4;
 int VAR_5;


 FUNC_0("<-- %s Frame: @%p -->\n",
        VAR_3->psr & VAR_1 ? "Kernel Mode" : "User Mode",
        VAR_3);

 VAR_4 = (unsigned long *) VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0("%s %08lx", VAR_2[VAR_5 + 0], VAR_4[VAR_5 + 0]);

  if (VAR_5 == VAR_0 - 1 || VAR_5 % 5 == 4)
   FUNC_0("\n");
  else
   FUNC_0(" | ");
 }

 FUNC_0("--------\n");
}
