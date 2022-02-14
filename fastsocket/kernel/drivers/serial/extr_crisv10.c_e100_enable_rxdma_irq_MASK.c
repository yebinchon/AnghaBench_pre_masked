
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int irq; int line; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int* VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct e100_serial *VAR_1)
{



 FUNC_1(FUNC_0(VAR_1->line,"IRQ enable_rxdma_irq %i\n", VAR_1->line));
 *VAR_0 = (VAR_1->irq << 2) | (VAR_1->irq << 3);
}
