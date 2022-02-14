
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,unsigned long,...) ;
 int FUNC_3 (char*,unsigned long) ;

void FUNC_4(unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{






 FUNC_2("Function entered at [<%08lx>] from [<%08lx>]\n", VAR_1, VAR_2);


 if (FUNC_1(VAR_1))
  FUNC_0("", "Exception stack", VAR_3 + 4, VAR_3 + 4 + sizeof(struct pt_regs));
}
