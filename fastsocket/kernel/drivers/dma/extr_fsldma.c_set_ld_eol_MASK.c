
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fsl_dma_chan {int feature; } ;
struct TYPE_2__ {int next_ln_addr; } ;
struct fsl_desc_sw {TYPE_1__ hw; } ;


 int FUNC_0 (struct fsl_dma_chan*,int,int) ;
 int FUNC_1 (struct fsl_dma_chan*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct fsl_dma_chan *VAR_4,
   struct fsl_desc_sw *VAR_5)
{
 u64 VAR_6;

 VAR_6 = ((VAR_4->feature & VAR_2) == VAR_1)
  ? VAR_3 : 0;

 VAR_5->hw.next_ln_addr = FUNC_0(VAR_4,
  FUNC_1(VAR_4, VAR_5->hw.next_ln_addr, 64) | VAR_0
   | VAR_6, 64);
}
