
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {scalar_t__ scratchbufs_dma; } ;
struct iwl_pcie_txq_scratch_buf {int dummy; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline dma_addr_t
FUNC_0(struct iwl_txq *VAR_0, int VAR_1)
{
 return VAR_0->scratchbufs_dma +
        sizeof(struct iwl_pcie_txq_scratch_buf) * VAR_1;
}
