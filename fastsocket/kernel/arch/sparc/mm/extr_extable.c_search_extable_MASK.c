
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int fixup; unsigned long insn; } ;



const struct exception_table_entry *
FUNC_0(const struct exception_table_entry *VAR_0,
        const struct exception_table_entry *VAR_1,
        unsigned long VAR_2)
{
 const struct exception_table_entry *VAR_3;
 for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++) {
  if (VAR_3->fixup == 0) {

   VAR_3++;
   continue;
  }


  if (VAR_3->fixup == -1)
   continue;

  if (VAR_3->insn == VAR_2)
   return VAR_3;
 }


 for (VAR_3 = VAR_0; VAR_3 <= (VAR_1 - 1); VAR_3++) {
  if (VAR_3->fixup)
   continue;

  if (VAR_3[0].insn <= VAR_2 && VAR_3[1].insn > VAR_2)
   return VAR_3;

  VAR_3++;
 }

        return ((void*)0);
}
