
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line; } ;
struct mpsc_port_info {TYPE_2__ port; TYPE_1__* shared_regs; scalar_t__ mirror_regs; } ;
struct TYPE_3__ {scalar_t__ sdma_intr_base; scalar_t__ SDMA_INTR_CAUSE_m; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_1)
{
 FUNC_0("mpsc_sdma_intr_ack[%d]: Acknowledging IRQ\n", VAR_1->port.line);

 if (VAR_1->mirror_regs)
  VAR_1->shared_regs->SDMA_INTR_CAUSE_m = 0;
 FUNC_1(0x00, VAR_1->shared_regs->sdma_intr_base + VAR_0
   + VAR_1->port.line);
}
