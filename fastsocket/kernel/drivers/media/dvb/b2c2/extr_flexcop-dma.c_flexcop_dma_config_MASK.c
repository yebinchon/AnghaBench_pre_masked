
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct flexcop_dma {int dma_addr0; int dma_addr1; int size; } ;
struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_4__) ;} ;
struct TYPE_13__ {int dma_addr_size; } ;
struct TYPE_12__ {int dma_address1; } ;
struct TYPE_11__ {int dma_address0; } ;
struct TYPE_14__ {TYPE_3__ dma_0x4_write; TYPE_2__ dma_0xc; TYPE_1__ dma_0x0; scalar_t__ raw; } ;
typedef TYPE_4__ flexcop_ibi_value ;
typedef int flexcop_dma_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_4__) ;
 int FUNC_2 (struct flexcop_device*,int ,TYPE_4__) ;
 int FUNC_3 (struct flexcop_device*,int ,TYPE_4__) ;
 int FUNC_4 (struct flexcop_device*,int ,TYPE_4__) ;
 int FUNC_5 (struct flexcop_device*,int ,TYPE_4__) ;
 int FUNC_6 (struct flexcop_device*,int ,TYPE_4__) ;

int FUNC_7(struct flexcop_device *VAR_9,
  struct flexcop_dma *VAR_10,
  flexcop_dma_index_t VAR_11)
{
 flexcop_ibi_value VAR_12,VAR_13,VAR_14;
 VAR_12 = VAR_13 = VAR_14.raw = 0;

 VAR_12 = VAR_10->dma_addr0 >> 2;
 VAR_14.dma_0xc.dma_address1 = VAR_10->dma_addr1 >> 2;
 VAR_13 = VAR_10->size / 4;

 if ((VAR_11 & VAR_1) == VAR_11) {
  VAR_9->write_ibi_reg(VAR_9,VAR_3,VAR_12);
  VAR_9->write_ibi_reg(VAR_9,VAR_4,VAR_13);
  VAR_9->write_ibi_reg(VAR_9,VAR_5,VAR_14);
 } else if ((VAR_11 & VAR_2) == VAR_11) {
  VAR_9->write_ibi_reg(VAR_9,VAR_6,VAR_12);
  VAR_9->write_ibi_reg(VAR_9,VAR_7,VAR_13);
  VAR_9->write_ibi_reg(VAR_9,VAR_8,VAR_14);
 } else {
  FUNC_0("either DMA1 or DMA2 can be configured within one "
   "flexcop_dma_config call.");
  return -VAR_0;
 }

 return 0;
}
