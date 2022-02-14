
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {TYPE_1__* reg_base; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int cdar; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct fsl_dma_chan *VAR_1, dma_addr_t VAR_2)
{
 FUNC_0(VAR_1, &VAR_1->reg_base->cdar, VAR_2 | VAR_0, 64);
}
