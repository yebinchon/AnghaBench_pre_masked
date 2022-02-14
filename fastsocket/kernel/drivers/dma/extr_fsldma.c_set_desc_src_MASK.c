
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fsl_dma_ld_hw {int src_addr; } ;
struct fsl_dma_chan {int feature; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct fsl_dma_chan*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct fsl_dma_chan *VAR_3,
    struct fsl_dma_ld_hw *VAR_4, dma_addr_t VAR_5)
{
 u64 VAR_6;

 VAR_6 = ((VAR_3->feature & VAR_1) == VAR_0)
  ? ((u64)VAR_2 << 32) : 0;
 VAR_4->src_addr = FUNC_0(VAR_3, VAR_6 | VAR_5, 64);
}
