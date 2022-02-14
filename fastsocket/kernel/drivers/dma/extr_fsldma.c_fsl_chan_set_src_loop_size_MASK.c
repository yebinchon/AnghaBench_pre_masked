
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {TYPE_1__* reg_base; } ;
struct TYPE_2__ {int mr; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int) ;
 int FUNC_1 (struct fsl_dma_chan*,int *,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct fsl_dma_chan *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 0:
  FUNC_1(VAR_1, &VAR_1->reg_base->mr,
   FUNC_0(VAR_1, &VAR_1->reg_base->mr, 32) &
   (~VAR_0), 32);
  break;
 case 1:
 case 2:
 case 4:
 case 8:
  FUNC_1(VAR_1, &VAR_1->reg_base->mr,
   FUNC_0(VAR_1, &VAR_1->reg_base->mr, 32) |
   VAR_0 | (FUNC_2(VAR_2) << 14),
   32);
  break;
 }
}
