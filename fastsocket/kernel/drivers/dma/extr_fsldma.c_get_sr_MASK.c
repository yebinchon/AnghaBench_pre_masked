
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_dma_chan {TYPE_1__* reg_base; } ;
struct TYPE_2__ {int sr; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int) ;

__attribute__((used)) static u32 FUNC_1(struct fsl_dma_chan *VAR_0)
{
 return FUNC_0(VAR_0, &VAR_0->reg_base->sr, 32);
}
