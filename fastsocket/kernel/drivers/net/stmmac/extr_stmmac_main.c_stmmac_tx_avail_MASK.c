
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stmmac_priv {scalar_t__ cur_tx; scalar_t__ dma_tx_size; scalar_t__ dirty_tx; } ;



__attribute__((used)) static inline u32 FUNC_0(struct stmmac_priv *VAR_0)
{
 return VAR_0->dirty_tx + VAR_0->dma_tx_size - VAR_0->cur_tx - 1;
}
