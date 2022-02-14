
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct egpio_info {int irqs_enabled; unsigned int irq_start; } ;


 struct egpio_info* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0)
{
 struct egpio_info *VAR_1 = FUNC_0(VAR_0);
 VAR_1->irqs_enabled |= 1 << (VAR_0 - VAR_1->irq_start);
 FUNC_1("EGPIO unmask %d %04x\n", VAR_0, VAR_1->irqs_enabled);
}
