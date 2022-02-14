
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {TYPE_1__* reg_base; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int ndar; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fsl_dma_chan *VAR_0, dma_addr_t VAR_1)
{
 FUNC_0(VAR_0, &VAR_0->reg_base->ndar, VAR_1, 64);
}
