
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct fpga_irq {unsigned int base; unsigned short mask; int sraddr; } ;


 unsigned short FUNC_0 (int ) ;
 struct fpga_irq FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,struct irq_desc*) ;
 struct irq_desc* VAR_0 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 struct fpga_irq VAR_3 = FUNC_1(VAR_1);
 unsigned short VAR_4 = FUNC_0(VAR_3.sraddr);
 struct irq_desc *VAR_5;
 unsigned int VAR_6 = VAR_3.base;

 VAR_4 &= VAR_3.mask;

 while (VAR_4) {
  if (VAR_4 & 0x0001) {
   VAR_5 = VAR_0 + VAR_6;
   FUNC_2(VAR_6, VAR_5);
  }
  VAR_4 >>= 1;
  VAR_6++;
 }
}
