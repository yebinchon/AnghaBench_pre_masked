
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dma_chan {int feature; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fsl_dma_chan *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->feature |= VAR_0;
 else
  VAR_1->feature &= ~VAR_0;
}
