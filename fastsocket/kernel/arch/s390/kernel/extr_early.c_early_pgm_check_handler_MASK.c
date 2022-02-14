
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exception_table_entry {int fixup; } ;
struct TYPE_3__ {unsigned long addr; } ;
struct TYPE_4__ {TYPE_1__ program_old_psw; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct exception_table_entry* FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_3;
 const struct exception_table_entry *VAR_4;

 VAR_3 = VAR_2.program_old_psw.addr;
 VAR_4 = FUNC_1(VAR_3 & VAR_1);
 if (!VAR_4)
  FUNC_0(0);
 VAR_2.program_old_psw.addr = VAR_4->fixup | VAR_0;
}
