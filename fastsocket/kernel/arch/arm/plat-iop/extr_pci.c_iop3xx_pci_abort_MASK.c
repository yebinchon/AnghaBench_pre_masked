
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_pc; int ARM_lr; } ;


 int FUNC_0 (char*,unsigned long,unsigned int,int,int ) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_0, unsigned int VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0("PCI abort: address = 0x%08lx fsr = 0x%03x PC = 0x%08lx LR = 0x%08lx\n",
  VAR_0, VAR_1, VAR_2->ARM_pc, VAR_2->ARM_lr);





 if (VAR_1 & (1 << 10))
  VAR_2->ARM_pc += 4;

 return 0;
}
