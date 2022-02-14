
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_dma_device {int feature; scalar_t__* chan; int reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct fsl_dma_device *VAR_4 = (struct fsl_dma_device *)VAR_3;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = (VAR_4->feature & VAR_0) ? FUNC_2(VAR_4->reg_base)
   : FUNC_3(VAR_4->reg_base);
 VAR_6 = (32 - FUNC_0(VAR_5)) / 8;

 return VAR_4->chan[VAR_6] ? FUNC_1(VAR_2,
   VAR_4->chan[VAR_6]) : VAR_1;
}
