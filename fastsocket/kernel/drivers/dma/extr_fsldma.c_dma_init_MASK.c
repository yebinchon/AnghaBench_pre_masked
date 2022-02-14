
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {int feature; TYPE_1__* reg_base; } ;
struct TYPE_2__ {int mr; } ;


 int FUNC_0 (struct fsl_dma_chan*,int *,int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct fsl_dma_chan *VAR_6)
{

 FUNC_0(VAR_6, &VAR_6->reg_base->mr, 0, 32);

 switch (VAR_6->feature & VAR_0) {
 case 128:





  FUNC_0(VAR_6, &VAR_6->reg_base->mr, VAR_1
    | VAR_2 | VAR_3, 32);
  break;
 case 129:




  FUNC_0(VAR_6, &VAR_6->reg_base->mr, VAR_4
    | VAR_5, 32);
  break;
 }

}
