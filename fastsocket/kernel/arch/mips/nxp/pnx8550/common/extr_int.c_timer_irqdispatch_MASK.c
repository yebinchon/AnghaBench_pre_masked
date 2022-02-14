
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 VAR_3 = (0x01c0 & FUNC_2()) >> 6;

 if (FUNC_3(VAR_3 == 0)) {
  FUNC_1("timer_irqdispatch: irq 0, spurious interrupt?\n");
  return;
 }

 if (VAR_3 & 0x1)
  FUNC_0(VAR_0);
 if (VAR_3 & 0x2)
  FUNC_0(VAR_1);
 if (VAR_3 & 0x4)
  FUNC_0(VAR_2);
}
