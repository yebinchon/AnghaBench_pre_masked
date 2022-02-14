
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_dma_chan {int feature; TYPE_1__* reg_base; } ;
struct TYPE_2__ {int mr; int bcr; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int) ;
 int FUNC_1 (struct fsl_dma_chan*,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct fsl_dma_chan *VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7->feature & VAR_0) {
  FUNC_1(VAR_7, &VAR_7->reg_base->bcr, 0, 32);
  VAR_8 |= VAR_5;
 } else if ((VAR_7->feature & VAR_3) == VAR_2) {
  FUNC_1(VAR_7, &VAR_7->reg_base->mr,
   FUNC_0(VAR_7, &VAR_7->reg_base->mr, 32)
    & ~VAR_5, 32);
 }

 if (VAR_7->feature & VAR_1)
  VAR_8 |= VAR_6;
 else
  VAR_8 |= VAR_4;

 FUNC_1(VAR_7, &VAR_7->reg_base->mr,
   FUNC_0(VAR_7, &VAR_7->reg_base->mr, 32)
   | VAR_8, 32);
}
