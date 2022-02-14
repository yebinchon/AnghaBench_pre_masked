
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int unit; } ;
struct exception_table_entry {int insn; TYPE_1__ fixup; } ;


 unsigned long FUNC_0 (struct exception_table_entry*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
 struct exception_table_entry *VAR_3 = VAR_0, *VAR_4 = VAR_1;
 unsigned long VAR_5 = FUNC_0(VAR_3), VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7 = VAR_3->fixup.unit;

 VAR_3->fixup.unit = VAR_4->fixup.unit;
 VAR_4->fixup.unit = VAR_7;
 VAR_3->insn = (int)(VAR_6 - (unsigned long)&VAR_3->insn);
 VAR_4->insn = (int)(VAR_5 - (unsigned long)&VAR_4->insn);
}
