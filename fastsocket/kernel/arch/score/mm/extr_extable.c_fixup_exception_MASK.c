
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_epc; } ;
struct exception_table_entry {int fixup; } ;


 struct exception_table_entry* FUNC_0 (int ) ;

int FUNC_1(struct pt_regs *VAR_0)
{
 const struct exception_table_entry *VAR_1;

 VAR_1 = FUNC_0(VAR_0->cp0_epc);
 if (VAR_1) {
  VAR_0->cp0_epc = VAR_1->fixup;
  return 1;
 }
 return 0;
}
