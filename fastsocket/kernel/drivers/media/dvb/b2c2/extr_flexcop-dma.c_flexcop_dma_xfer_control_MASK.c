
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_3__) ;TYPE_3__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_9__ {int dma_1start; } ;
struct TYPE_8__ {int dma_0start; } ;
struct TYPE_10__ {int raw; TYPE_2__ dma_0xc; TYPE_1__ dma_0x0; } ;
typedef TYPE_3__ flexcop_ibi_value ;
typedef int flexcop_ibi_register ;
typedef int flexcop_dma_index_t ;
typedef int flexcop_dma_addr_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 TYPE_3__ FUNC_2 (struct flexcop_device*,int ) ;
 TYPE_3__ FUNC_3 (struct flexcop_device*,int ) ;
 int FUNC_4 (struct flexcop_device*,int ,TYPE_3__) ;
 int FUNC_5 (struct flexcop_device*,int ,TYPE_3__) ;

int FUNC_6(struct flexcop_device *VAR_9,
  flexcop_dma_index_t VAR_10,
  flexcop_dma_addr_index_t VAR_11,
  int VAR_12)
{
 flexcop_ibi_value VAR_13,VAR_14;
 flexcop_ibi_register VAR_15,VAR_16;

 if ((VAR_10 & VAR_1) == VAR_10) {
  VAR_15 = VAR_5;
  VAR_16 = VAR_6;
 } else if ((VAR_10 & VAR_2) == VAR_10) {
  VAR_15 = VAR_7;
  VAR_16 = VAR_8;
 } else {
  FUNC_1("either transfer DMA1 or DMA2 can be started within one "
   "flexcop_dma_xfer_control call.");
  return -VAR_0;
 }

 VAR_13 = VAR_9->read_ibi_reg(VAR_9,VAR_15);
 VAR_14 = VAR_9->read_ibi_reg(VAR_9,VAR_16);

 FUNC_0("reg: %03x: %x\n",VAR_15,VAR_13);
 FUNC_0("reg: %03x: %x\n",VAR_16,VAR_14.raw);

 if (VAR_11 & VAR_3)
  VAR_13 = VAR_12;

 if (VAR_11 & VAR_4)
  VAR_14.dma_0xc.dma_1start = VAR_12;

 VAR_9->write_ibi_reg(VAR_9,VAR_15,VAR_13);
 VAR_9->write_ibi_reg(VAR_9,VAR_16,VAR_14);

 FUNC_0("reg: %03x: %x\n",VAR_15,VAR_13);
 FUNC_0("reg: %03x: %x\n",VAR_16,VAR_14.raw);
 return 0;
}
