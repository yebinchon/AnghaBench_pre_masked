
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_dma {int all_chan_mask; } ;
struct TYPE_2__ {int ERROR; int DST_TRAN; int SRC_TRAN; int BLOCK; int XFER; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct dw_dma*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dw_dma*,int ) ;
 int FUNC_3 (struct dw_dma*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dw_dma *VAR_3)
{
 FUNC_3(VAR_3, VAR_0, 0);

 FUNC_0(VAR_3, VAR_2.XFER, VAR_3->all_chan_mask);
 FUNC_0(VAR_3, VAR_2.BLOCK, VAR_3->all_chan_mask);
 FUNC_0(VAR_3, VAR_2.SRC_TRAN, VAR_3->all_chan_mask);
 FUNC_0(VAR_3, VAR_2.DST_TRAN, VAR_3->all_chan_mask);
 FUNC_0(VAR_3, VAR_2.ERROR, VAR_3->all_chan_mask);

 while (FUNC_2(VAR_3, VAR_0) & VAR_1)
  FUNC_1();
}
