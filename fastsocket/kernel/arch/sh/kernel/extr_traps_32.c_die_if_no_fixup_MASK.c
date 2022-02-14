
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;
struct exception_table_entry {int fixup; } ;


 int FUNC_0 (char const*,struct pt_regs*,long) ;
 struct exception_table_entry* FUNC_1 (int ) ;
 int FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_3(const char * VAR_0, struct pt_regs * VAR_1, long VAR_2)
{
 if (!FUNC_2(VAR_1)) {
  const struct exception_table_entry *VAR_3;
  VAR_3 = FUNC_1(VAR_1->pc);
  if (VAR_3) {
   VAR_1->pc = VAR_3->fixup;
   return;
  }

  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
