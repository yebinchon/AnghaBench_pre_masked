
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {unsigned long fixup; unsigned long insn; } ;


 struct exception_table_entry* FUNC_0 (unsigned long) ;

unsigned long FUNC_1(unsigned long VAR_0, unsigned long *VAR_1)
{
 const struct exception_table_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return 0;


 if (!VAR_2->fixup) {
  *VAR_1 = (VAR_0 - VAR_2->insn) / 4;
  return (VAR_2 + 1)->fixup;
 }

 return VAR_2->fixup;
}
