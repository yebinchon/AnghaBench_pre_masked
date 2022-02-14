
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Fbr1BufferSize; int Fbr0BufferSize; } ;
struct et131x_adapter {TYPE_6__* pdev; TYPE_4__* regs; TYPE_1__ RxRing; scalar_t__ RegistryPhyLoopbk; } ;
struct TYPE_12__ {int fbr1_enable; int fbr1_size; int fbr0_enable; int fbr0_size; scalar_t__ halt_status; } ;
struct TYPE_14__ {int value; TYPE_5__ bits; int member_0; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_10__ {TYPE_2__ csr; } ;
struct TYPE_11__ {TYPE_3__ rxdma; } ;
typedef TYPE_7__ RXDMA_CSR_t ;


 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct et131x_adapter *VAR_0)
{
 if (VAR_0->RegistryPhyLoopbk)

  FUNC_3(0x1, &VAR_0->regs->rxdma.csr.value);
 else {

  RXDMA_CSR_t VAR_1 = { 0 };

  VAR_1.bits.fbr1_enable = 1;
  if (VAR_0->RxRing.Fbr1BufferSize == 4096)
   VAR_1.bits.fbr1_size = 1;
  else if (VAR_0->RxRing.Fbr1BufferSize == 8192)
   VAR_1.bits.fbr1_size = 2;
  else if (VAR_0->RxRing.Fbr1BufferSize == 16384)
   VAR_1.bits.fbr1_size = 3;
  FUNC_3(VAR_1.value, &VAR_0->regs->rxdma.csr.value);

  VAR_1.value = FUNC_1(&VAR_0->regs->rxdma.csr.value);
  if (VAR_1.bits.halt_status != 0) {
   FUNC_2(5);
   VAR_1.value = FUNC_1(&VAR_0->regs->rxdma.csr.value);
   if (VAR_1.bits.halt_status != 0) {
    FUNC_0(&VAR_0->pdev->dev,
     "RX Dma failed to exit halt state.  CSR 0x%08x\n",
     VAR_1.value);
   }
  }
 }
}
