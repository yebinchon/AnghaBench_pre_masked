
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int dma_in_irq_nbr; int dma_in_irq_description; int dma_in_nbr; scalar_t__ dma_in_enabled; int dma_out_irq_nbr; int dma_out_irq_description; int dma_out_nbr; scalar_t__ dma_out_enabled; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct e100_serial*) ;

__attribute__((used)) static void
FUNC_2(struct e100_serial *VAR_0)
{
 if (VAR_0->dma_out_enabled) {
  FUNC_0(VAR_0->dma_out_nbr, VAR_0->dma_out_irq_description);
  FUNC_1(VAR_0->dma_out_irq_nbr, VAR_0);
 }
 if (VAR_0->dma_in_enabled) {
  FUNC_0(VAR_0->dma_in_nbr, VAR_0->dma_in_irq_description);
  FUNC_1(VAR_0->dma_in_irq_nbr, VAR_0);
 }
}
