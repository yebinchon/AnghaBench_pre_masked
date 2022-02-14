
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int ) ;

void FUNC_5(unsigned int VAR_4)
{
 FUNC_2(FUNC_0(FUNC_1()), 0xffffffff);
 if (FUNC_4(VAR_1, VAR_3, VAR_0,
   "mailbox0", VAR_3)) {
  FUNC_3("Cannot request_irq(OCTEON_IRQ_MBOX0)\n");
 }
 if (FUNC_4(VAR_2, VAR_3, VAR_0,
   "mailbox1", VAR_3)) {
  FUNC_3("Cannot request_irq(OCTEON_IRQ_MBOX1)\n");
 }
}
