
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct et131x_adapter {TYPE_2__* pdev; TYPE_4__* regs; } ;
struct TYPE_7__ {int halt_status; } ;
struct TYPE_12__ {void* value; TYPE_1__ bits; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_11__ {TYPE_3__ csr; } ;
struct TYPE_10__ {TYPE_5__ rxdma; } ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_6__ RXDMA_CSR_t ;


 int FUNC_0 (int *,char*,void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct et131x_adapter *VAR_0)
{
 RXDMA_CSR_t VAR_1;


 FUNC_3(0x00002001, &VAR_0->regs->rxdma.csr.value);
 VAR_1.value = FUNC_1(&VAR_0->regs->rxdma.csr.value);
 if (VAR_1.bits.halt_status != 1) {
  FUNC_2(5);
  VAR_1.value = FUNC_1(&VAR_0->regs->rxdma.csr.value);
  if (VAR_1.bits.halt_status != 1)
   FUNC_0(&VAR_0->pdev->dev,
    "RX Dma failed to enter halt state. CSR 0x%08x\n",
    VAR_1.value);
 }
}
