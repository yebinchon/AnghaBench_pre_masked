
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;

int FUNC_2(unsigned long VAR_1, struct pt_regs *VAR_2)
{

        FUNC_1("System call ID error: [0x1#args:8 #syscall:16  0x%lx]\n", VAR_1);

 FUNC_0("unknown trapa", VAR_2, VAR_1);

 return -VAR_0;
}
