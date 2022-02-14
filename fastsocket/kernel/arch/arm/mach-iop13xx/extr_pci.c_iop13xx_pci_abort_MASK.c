
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_pc; int ARM_lr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned long,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(unsigned long VAR_3, unsigned int VAR_4, struct pt_regs *VAR_5)
{
 FUNC_0("Data abort: address = 0x%08lx "
      "fsr = 0x%03x PC = 0x%08lx LR = 0x%08lx",
  VAR_3, VAR_4, VAR_5->ARM_pc, VAR_5->ARM_lr);

 FUNC_0("IOP13XX_XBG_BECSR: %#10x", FUNC_1(VAR_0));
 FUNC_0("IOP13XX_XBG_BERAR: %#10x", FUNC_1(VAR_1));
 FUNC_0("IOP13XX_XBG_BERUAR: %#10x", FUNC_1(VAR_2));




 if (VAR_4 & (1 << 10))
  VAR_5->ARM_pc += 4;

 if (FUNC_2() || FUNC_3())
  return 0;
 else
  return 1;
}
