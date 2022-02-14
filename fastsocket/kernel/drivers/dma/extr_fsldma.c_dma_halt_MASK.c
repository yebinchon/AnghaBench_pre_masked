
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {int dev; TYPE_1__* reg_base; } ;
struct TYPE_2__ {int mr; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int) ;
 int FUNC_1 (struct fsl_dma_chan*,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct fsl_dma_chan*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct fsl_dma_chan *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, &VAR_3->reg_base->mr,
  FUNC_0(VAR_3, &VAR_3->reg_base->mr, 32) | VAR_0,
  32);
 FUNC_1(VAR_3, &VAR_3->reg_base->mr,
  FUNC_0(VAR_3, &VAR_3->reg_base->mr, 32) & ~(VAR_1
  | VAR_2 | VAR_0), 32);

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  if (FUNC_3(VAR_3))
   break;
  FUNC_4(10);
 }
 if (VAR_4 >= 100 && !FUNC_3(VAR_3))
  FUNC_2(VAR_3->dev, "DMA halt timeout!\n");
}
