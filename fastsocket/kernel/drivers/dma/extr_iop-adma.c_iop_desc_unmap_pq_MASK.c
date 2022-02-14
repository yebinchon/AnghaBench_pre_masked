
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dma_async_tx_descriptor {int flags; } ;
struct iop_adma_desc_slot {int unmap_len; int unmap_src_cnt; struct iop_adma_desc_slot* group_head; scalar_t__ pq_check_result; struct dma_async_tx_descriptor async_tx; } ;
struct iop_adma_chan {TYPE_2__* device; } ;
struct device {int dummy; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int ,int,int ) ;
 int FUNC_1 (struct iop_adma_desc_slot*,struct iop_adma_chan*) ;
 int FUNC_2 (struct iop_adma_desc_slot*,struct iop_adma_chan*) ;
 int FUNC_3 (struct iop_adma_desc_slot*,struct iop_adma_chan*,int) ;

__attribute__((used)) static void
FUNC_4(struct iop_adma_chan *VAR_5, struct iop_adma_desc_slot *VAR_6)
{
 struct dma_async_tx_descriptor *VAR_7 = &VAR_6->async_tx;
 struct iop_adma_desc_slot *VAR_8 = VAR_6->group_head;
 struct device *VAR_9 = &VAR_5->device->pdev->dev;
 u32 VAR_10 = VAR_8->unmap_len;
 enum dma_ctrl_flags VAR_11 = VAR_7->flags;
 u32 VAR_12 = VAR_8->unmap_src_cnt;
 dma_addr_t VAR_13 = FUNC_1(VAR_8, VAR_5);
 dma_addr_t VAR_14 = FUNC_2(VAR_8, VAR_5);
 int VAR_15;

 if (VAR_7->flags & VAR_3)
  VAR_12 -= 3;

 if (!(VAR_11 & VAR_1) && !VAR_6->pq_check_result) {
  FUNC_0(VAR_9, VAR_13, VAR_10, VAR_0);
  FUNC_0(VAR_9, VAR_14, VAR_10, VAR_0);
 }

 if (!(VAR_11 & VAR_2)) {
  dma_addr_t VAR_16;

  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
   VAR_16 = FUNC_3(VAR_8, VAR_5, VAR_15);
   FUNC_0(VAR_9, VAR_16, VAR_10, VAR_4);
  }
  if (VAR_6->pq_check_result) {
   FUNC_0(VAR_9, VAR_13, VAR_10, VAR_4);
   FUNC_0(VAR_9, VAR_14, VAR_10, VAR_4);
  }
 }

 VAR_6->group_head = ((void*)0);
}
