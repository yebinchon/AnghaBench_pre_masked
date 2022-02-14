
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct exception_table_entry {int fixup; } ;
typedef int UPT_IP ;


 struct exception_table_entry* FUNC_0 (unsigned long) ;

int FUNC_1(unsigned long VAR_0, struct uml_pt_regs *VAR_1)
{
 const struct exception_table_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != 0) {
  UPT_IP(VAR_3) = VAR_2->fixup;
  return 1;
 }
 return 0;
}
