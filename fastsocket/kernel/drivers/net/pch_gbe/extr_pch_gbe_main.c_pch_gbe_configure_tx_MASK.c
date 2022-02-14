
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_adapter {TYPE_1__* tx_ring; struct pch_gbe_hw hw; } ;
struct TYPE_4__ {int DMA_CTRL; int TX_DSC_SW_P; int TX_DSC_SIZE; int TX_DSC_BASE; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (char*,unsigned long long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pch_gbe_adapter *VAR_1)
{
 struct pch_gbe_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3, VAR_4, VAR_5;

 FUNC_2("dma addr = 0x%08llx  size = 0x%08x\n",
   (unsigned long long)VAR_1->tx_ring->dma,
   VAR_1->tx_ring->size);


 VAR_3 = VAR_1->tx_ring->dma;
 VAR_4 = VAR_1->tx_ring->size - 0x10;
 FUNC_1(VAR_3, &VAR_2->reg->TX_DSC_BASE);
 FUNC_1(VAR_4, &VAR_2->reg->TX_DSC_SIZE);
 FUNC_1(VAR_3, &VAR_2->reg->TX_DSC_SW_P);


 VAR_5 = FUNC_0(&VAR_2->reg->DMA_CTRL);
 VAR_5 |= VAR_0;
 FUNC_1(VAR_5, &VAR_2->reg->DMA_CTRL);
}
