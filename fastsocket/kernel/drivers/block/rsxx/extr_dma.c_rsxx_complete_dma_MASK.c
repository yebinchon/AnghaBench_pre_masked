
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_cancelled; int dma_hw_fault; int dma_sw_err; } ;
struct rsxx_dma_ctrl {int card; TYPE_1__ stats; } ;
struct rsxx_dma {int cb_data; int (* cb ) (int ,int ,int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct rsxx_dma_ctrl*,struct rsxx_dma*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rsxx_dma_ctrl *VAR_3,
      struct rsxx_dma *VAR_4,
      unsigned int VAR_5)
{
 if (VAR_5 & VAR_2)
  VAR_3->stats.dma_sw_err++;
 if (VAR_5 & VAR_1)
  VAR_3->stats.dma_hw_fault++;
 if (VAR_5 & VAR_0)
  VAR_3->stats.dma_cancelled++;

 if (VAR_4->cb)
  VAR_4->cb(VAR_3->card, VAR_4->cb_data, VAR_5 ? 1 : 0);

 FUNC_0(VAR_3, VAR_4);
}
