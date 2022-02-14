
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(int VAR_2)
{
 unsigned int *VAR_3;
 int VAR_4;

 *(int *) VAR_1 = 0x63 | (VAR_2 & 0xfffff000);
 FUNC_0((uintptr_t) VAR_0);
 VAR_3 = (unsigned int *) VAR_0;
 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  FUNC_1("0x%x ", *VAR_3++);
  if ((VAR_4 % 8) == 0)
   FUNC_1("\n");
 }
 FUNC_1("\n");
 *(int *) VAR_1 = 0;

}
