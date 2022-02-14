
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_5__ {int DMA1_IRQ_Enable_sig; int DMA2_IRQ_Enable_sig; } ;
struct TYPE_6__ {TYPE_1__ ctrl_208; } ;
typedef TYPE_2__ flexcop_ibi_value ;
typedef int flexcop_dma_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ FUNC_0 (struct flexcop_device*,int ) ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_2__) ;

int FUNC_2(struct flexcop_device *VAR_3,
  flexcop_dma_index_t VAR_4,
  int VAR_5)
{
 flexcop_ibi_value VAR_6 = VAR_3->read_ibi_reg(VAR_3,VAR_2);

 if (VAR_4 & VAR_0)
  VAR_6.ctrl_208.DMA1_IRQ_Enable_sig = VAR_5;

 if (VAR_4 & VAR_1)
  VAR_6.ctrl_208.DMA2_IRQ_Enable_sig = VAR_5;

 VAR_3->write_ibi_reg(VAR_3,VAR_2,VAR_6);
 return 0;
}
