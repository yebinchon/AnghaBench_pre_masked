
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int*,...) ;
 int * VAR_2 ;

__attribute__((used)) static instr *
FUNC_3(instr * VAR_3, unsigned char * VAR_4)
{
 instr * VAR_5 = 0;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_2("Prologue [<%p>], Frame %p:\n", VAR_3, VAR_4);
 while (!FUNC_0(*VAR_3))
  if (FUNC_1(*VAR_3)) {
   VAR_6 = (*VAR_3 & VAR_1) >> 21;
   VAR_7 = *(unsigned long *)(VAR_4 + (*VAR_3 & VAR_0));
   if (VAR_6 == 26)
    VAR_5 = (instr *)VAR_7;
   FUNC_2("\t\t%s / 0x%016lx\n", &VAR_2[VAR_6], VAR_7);
  }
 return VAR_5;
}
