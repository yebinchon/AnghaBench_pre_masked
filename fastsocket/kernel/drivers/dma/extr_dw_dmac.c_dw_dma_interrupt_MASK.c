
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int dev; } ;
struct dw_dma {int all_chan_mask; int tasklet; TYPE_1__ dma; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int ERROR; int DST_TRAN; int SRC_TRAN; int BLOCK; int XFER; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_dma*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct dw_dma*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct dw_dma *VAR_5 = VAR_4;
 u32 VAR_6;

 FUNC_2(VAR_5->dma.dev, "interrupt: status=0x%x\n",
   FUNC_3(VAR_5, VAR_2));





 FUNC_0(VAR_5, VAR_1.XFER, VAR_5->all_chan_mask);
 FUNC_0(VAR_5, VAR_1.BLOCK, VAR_5->all_chan_mask);
 FUNC_0(VAR_5, VAR_1.ERROR, VAR_5->all_chan_mask);

 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5->dma.dev,
   "BUG: Unexpected interrupts pending: 0x%x\n",
   VAR_6);


  FUNC_0(VAR_5, VAR_1.XFER, (1 << 8) - 1);
  FUNC_0(VAR_5, VAR_1.BLOCK, (1 << 8) - 1);
  FUNC_0(VAR_5, VAR_1.SRC_TRAN, (1 << 8) - 1);
  FUNC_0(VAR_5, VAR_1.DST_TRAN, (1 << 8) - 1);
  FUNC_0(VAR_5, VAR_1.ERROR, (1 << 8) - 1);
 }

 FUNC_4(&VAR_5->tasklet);

 return VAR_0;
}
