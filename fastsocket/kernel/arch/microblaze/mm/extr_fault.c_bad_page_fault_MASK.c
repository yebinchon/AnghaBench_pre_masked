
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;
struct exception_table_entry {int fixup; } ;


 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,struct pt_regs*,int) ;
 struct exception_table_entry* FUNC_2 (int ) ;

void FUNC_3(struct pt_regs *VAR_1, unsigned long VAR_2, int VAR_3)
{
 const struct exception_table_entry *VAR_4;


 VAR_4 = FUNC_2(VAR_1->pc);
 if (VAR_4) {
  VAR_1->pc = VAR_4->fixup;
  return;
 }






 FUNC_1("kernel access of bad area", VAR_1, VAR_3);
}
