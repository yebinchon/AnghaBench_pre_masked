
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {TYPE_1__* reg_base; } ;
struct TYPE_2__ {int mr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fsl_dma_chan*,int *,int) ;
 int FUNC_2 (struct fsl_dma_chan*,int *,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct fsl_dma_chan *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 > 1024);
 FUNC_2(VAR_0, &VAR_0->reg_base->mr,
  FUNC_1(VAR_0, &VAR_0->reg_base->mr, 32)
   | ((FUNC_3(VAR_1) << 24) & 0x0f000000),
  32);
}
