
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ cookie; int flags; int callback_param; int (* callback ) (int ) ;} ;
struct mv_xor_desc_slot {int unmap_len; int unmap_src_cnt; TYPE_3__ async_tx; struct mv_xor_desc_slot* group_head; } ;
struct mv_xor_chan {TYPE_2__* device; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef scalar_t__ dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct device*,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (struct mv_xor_desc_slot*) ;
 scalar_t__ FUNC_4 (struct mv_xor_desc_slot*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static dma_cookie_t
FUNC_6(struct mv_xor_desc_slot *VAR_5,
 struct mv_xor_chan *VAR_6, dma_cookie_t VAR_7)
{
 FUNC_0(VAR_5->async_tx.cookie < 0);

 if (VAR_5->async_tx.cookie > 0) {
  VAR_7 = VAR_5->async_tx.cookie;




  if (VAR_5->async_tx.callback)
   VAR_5->async_tx.callback(
    VAR_5->async_tx.callback_param);




  if (VAR_5->group_head && VAR_5->unmap_len) {
   struct mv_xor_desc_slot *VAR_8 = VAR_5->group_head;
   struct device *VAR_9 =
    &VAR_6->device->pdev->dev;
   u32 VAR_10 = VAR_8->unmap_len;
   enum dma_ctrl_flags VAR_11 = VAR_5->async_tx.flags;
   u32 VAR_12;
   dma_addr_t VAR_13;
   dma_addr_t VAR_14;

   VAR_12 = VAR_8->unmap_src_cnt;
   VAR_14 = FUNC_3(VAR_8);
   if (!(VAR_11 & VAR_1)) {
    enum dma_data_direction VAR_15;

    if (VAR_12 > 1)
     VAR_15 = VAR_0;
    else
     VAR_15 = VAR_3;
    FUNC_2(VAR_9, VAR_14, VAR_10, VAR_15);
   }

   if (!(VAR_11 & VAR_2)) {
    while (VAR_12--) {
     VAR_13 = FUNC_4(VAR_8,
            VAR_12);
     if (VAR_13 == VAR_14)
      continue;
     FUNC_2(VAR_9, VAR_13, VAR_10,
             VAR_4);
    }
   }
   VAR_5->group_head = ((void*)0);
  }
 }


 FUNC_1(&VAR_5->async_tx);

 return VAR_7;
}
