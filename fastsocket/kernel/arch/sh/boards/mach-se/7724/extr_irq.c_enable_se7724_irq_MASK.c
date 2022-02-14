
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_irq {unsigned int base; int mraddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int) ;
 struct fpga_irq FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_0)
{
 struct fpga_irq VAR_1 = FUNC_3(FUNC_2(VAR_0));
 unsigned int VAR_2 = VAR_0 - VAR_1.base;
 FUNC_1(FUNC_0(VAR_1.mraddr) & ~(0x0001 << VAR_2), VAR_1.mraddr);
}
